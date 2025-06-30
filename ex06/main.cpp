/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:07:03 by altheven          #+#    #+#             */
/*   Updated: 2025/06/30 11:14:23 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl Harl;
	
	if (ac == 2)
		Harl.complain(av[1]);
	else
		std :: cout << "[ Probably complaining about insignificant problems ]" << std :: endl;
}