/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 09:30:52 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 09:30:53 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie :: Zombie (std :: string name)
{
	this->_name = name;
	std :: cout << "Create Zombie : " << this->_name << std :: endl;
}

Zombie :: ~Zombie (void)
{
	std :: cout << "Destruct Zombie : " << this->_name << std :: endl;
}

void	Zombie :: announce (void)
{
	std :: cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std ::endl;
}