/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 10:37:44 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 13:14:55 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon :: Weapon (std :: string newType)
{
	this->_type = newType;
}

Weapon :: ~Weapon(void)
{}

void	Weapon :: setType (std :: string newType)
{
	this->_type = newType ;
}

std :: string const & Weapon :: getType(void) const
{
	std :: string const & stringREF = this->_type;
	return (stringREF);
}