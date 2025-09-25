/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/19 01:25:13 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

# define RED	"\033[31m"
# define RESET	"\033[0m"

std::string	mySed(std::string line, std::string s1, std::string s2)
{
	std::string	retLine = "";
	int			i = 0;
	int			len1 = s1.length();

	if (s1.empty())
		return (line);
	while (line[i])
	{
		if (line.substr(i, len1) == s1)
		{
			retLine += s2;
			i += len1;
		}
		else
		{
			retLine += line[i];
			i++;
		}
	}
	return (retLine);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << RED << " Run the program as './sed filename string1 string2'" << RESET << std::endl;
		return (1);
	}
	std::ifstream	inputFile(argv[1]);
	std::string		replaceName = argv[1];
	replaceName += ".replace";
	std::ofstream	replaceFile(replaceName.c_str());
	if (inputFile.is_open() && replaceFile.is_open())
	{
		std::string	line;
		while (std::getline(inputFile, line))
			replaceFile << mySed(line, argv[2], argv[3]) << std::endl;
	}
	else
	{
		std::cerr << RED;
		if (inputFile.is_open())
			inputFile.close();
		else
			std::cerr << "Error: Cannot open input file";
		if (replaceFile.is_open())
			replaceFile.close();
		else
			std::cerr << "Error: Cannot open input file";
		std::cerr << RESET << std::endl;
		return (1);
	}
	inputFile.close();
	replaceFile.close();
	return (0);
}
