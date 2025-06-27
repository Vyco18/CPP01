/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:31:04 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 09:40:34 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std :: string name);

int	main(void)
{
	Zombie	*z;
	std :: string name = "Bobby";
	
	z = zombieHorde(5, name);
	delete [] z;
	return 0;
}