/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:40:12 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 13:30:30 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"


HumanB :: HumanB (std :: string name)
{
	this->_name = name;
	this->_club = NULL;
}

HumanB :: ~HumanB (void)
{}

void	HumanB :: attack(void)
{
	std :: cout << this->_name << "attacks with their ";
	if (this->_club)
		std :: cout << this->_club->getType() << std :: endl;
	else
		std :: cout << "Imaginary Weapon" << std :: endl;
}

void	HumanB :: setWeapon(Weapon &club)
{
	this->_club = &club;
}