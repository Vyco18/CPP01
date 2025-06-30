/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:40:27 by altheven          #+#    #+#             */
/*   Updated: 2025/06/30 13:04:20 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA :: HumanA (std :: string name, Weapon &club) : _club(club)
{
	this->_name = name;
}

HumanA :: ~HumanA (void)
{}

void	HumanA :: attack(void)
{
	std :: cout << this->_name << " attacks with their " << this->_club.getType() << std :: endl;;
}
