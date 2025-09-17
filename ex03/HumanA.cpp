/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/17 23:18:56 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){};
HumanA::~HumanA() {};

void	HumanA::setWeapon(Weapon &newWeapon)
{
	this->weapon = newWeapon;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl;
};
