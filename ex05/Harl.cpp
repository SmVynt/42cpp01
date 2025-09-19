/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/19 11:43:08 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl (){};
Harl::~Harl (){};

void		Harl::complain(std::string level)
{
	void (Harl::*complains[4])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string levels[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*complains[i])();
			return ;
		}
	}
	std::cout << COL_Y "[ Probably complaining about " \
	"insignificant problems ]\n" COL_X << std::endl;
};
void		Harl::debug(void)
{
	std::cout << COL_Y "[ DEBUG ]\n" COL_X \
	"I love having extra bacon for my " \
	"7XL-double-cheese-triple-pickle-specialketchup burger. " \
	"I really do!\n" << std::endl;
};
void		Harl::info(void)
{
	std::cout << COL_Y "[ INFO ]\n" COL_X \
	"I cannot believe adding extra bacon costs more money.\n" \
	"You didn’t put enough bacon in my burger!\n" \
	"If you did, I wouldn’t be asking for more!\n" << std::endl;
};
void		Harl::warning(void)
{
	std::cout << COL_Y "[ WARNING ]\n" COL_X \
	"I think I deserve to have some extra bacon for free.\n" \
	"I’ve been coming for years, whereas you started" \
	"working here just last month.\n" << std::endl;
};
void		Harl::error(void)
{
	std::cout << COL_Y "[ ERROR ]\n" COL_X \
	"This is unacceptable!\n" \
	"I want to speak to the manager now.\n" << std::endl;
};
