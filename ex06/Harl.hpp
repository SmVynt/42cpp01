/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:50 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/19 11:40:10 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# define COL_R	"\033[31m"
# define COL_Y	"\033[33m"
# define COL_B	"\033[34m"
# define COL_X	"\033[0m"

class Harl
{
	public:
		Harl();
		~Harl();
		void		complain(std::string level);
	private:
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
};

#endif
