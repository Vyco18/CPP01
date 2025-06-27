/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:31:04 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 09:31:05 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
void	randomChump( std :: string name);
Zombie	*newZombie(std :: string name);

int	main(void)
{
	Zombie	*z;
	std :: string name;
	try
	{
		name = "Billy";
	}
	catch (...)
	{
		std :: cerr << "Error With Alloc" << std :: endl ;
		return 1;
	}
	z = newZombie(name);
	if (!z)
		return 1;
	std :: cerr << "uncatch" << std :: endl ;
	z->announce();
	randomChump("Bobby");
	delete z;
	return 0;
}