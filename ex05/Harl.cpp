/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:55:12 by altheven          #+#    #+#             */
/*   Updated: 2025/06/30 09:58:29 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl :: Harl(void)
{
	this->f_ptr[0] = &Harl :: debug;
	this->f_ptr[1] = &Harl :: info;
	this->f_ptr[2] = &Harl :: warning;
	this->f_ptr[3] = &Harl :: error;
}

Harl :: ~Harl(void)
{}

void	Harl :: debug(void)
{
	std :: cout << "\"DEBUG\"" << std :: endl;
	std :: cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std :: endl ;
}

void	Harl :: info(void)
{
	std :: cout << "\"INFO\"" << std :: endl;
	std :: cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std :: endl ;
}

void	Harl :: warning(void)
{
	std :: cout << "\"WARNING\"" << std :: endl;
	std :: cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std :: endl ;
}

void	Harl :: error(void)
{
	std :: cout << "\"ERROR\"" << std :: endl;
	std :: cout << "This is unacceptable! I want to speak to the manager now." << std :: endl ;
}

void	Harl :: complain(std :: string level)
{
	std :: string key_word[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for(int i = 0; i < 4; i++)
	{
		if (key_word[i] == level)
		{
			(this->*f_ptr[i])();
			return ;
		}
	}
}