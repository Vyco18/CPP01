/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:30:23 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 09:45:18 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std :: string name)
{
	Zombie *Horde = new Zombie[n];

	for(int i = 0; i < n; i++)
		Horde[i].init(name);
	for(int i = 0; i < n; i++)
		Horde[i].announce();
	return (&Horde[0]);
}