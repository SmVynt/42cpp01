/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:45 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/17 15:25:32 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie	*zombieHorde( int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie *horde = new Zombie[N]();
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].announce();
	}

	return (horde);
}

