/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:30:41 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 09:46:48 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie :: Zombie (void)
{
	std :: cout << "Zombie Born" << std :: endl;
}

Zombie :: ~Zombie (void)
{
	std :: cout << "Destruct Zombie : " << this->_name << std :: endl;
}

void	Zombie :: announce (void)
{
	std :: cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}

void	Zombie :: init (std :: string name)
{
	this->_name = name;
	std :: cout << "Zombie " << this->_name << " init" << std :: endl;
}