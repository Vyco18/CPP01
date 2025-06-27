/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:31:00 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 09:31:01 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie	*newZombie(std :: string name)
{
	Zombie *z;
	
	try
	{
		z = new Zombie(name);
	}
	catch (...)
	{
		std :: cerr << "Error With Alloc" << std :: endl ;
		return NULL;
	}
	return (z);
}