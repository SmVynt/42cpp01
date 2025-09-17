/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/17 23:23:15 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name) : name(name), weapon(NULL) {};

HumanB::~HumanB() {};

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}
void	HumanB::attack()
{
	if (this->weapon)
	{
		std::cout << this->name << " attacks with their ";
		std::cout << (* this->weapon).getType() << std::endl;
	}
	else
		std::cout << this->name << " has no weapon" << std::endl;
};
