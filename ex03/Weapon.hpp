/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 01:04:50 by psmolin           #+#    #+#             */
/*   Updated: 2025/09/17 22:50:46 by psmolin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
// # include <new>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string	&getType();
		void		setType(std::string newType);

	private:
		std::string		type;
};

#endif
