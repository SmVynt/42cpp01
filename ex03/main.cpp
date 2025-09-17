/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:32 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/17 23:17:50 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA alex("Alex", club);
		alex.attack();
		club.setType("some other type of club");
		alex.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB bob("Bob");
		bob.attack();
		bob.setWeapon(club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	return 0;
}

