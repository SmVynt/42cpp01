/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/17 23:01:47 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){};
Weapon::Weapon(std::string type):type(type){};
Weapon::~Weapon(){};
std::string	&Weapon::getType()
{
	return (this->type);
};
void		Weapon::setType(std::string newType)
{
	this->type = newType;
};
