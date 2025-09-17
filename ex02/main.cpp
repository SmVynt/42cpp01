/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/17 15:49:57 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";
	std::cout << str << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << std::endl;
	return (0);
}
