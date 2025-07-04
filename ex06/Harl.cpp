/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:55:12 by altheven          #+#    #+#             */
/*   Updated: 2025/06/30 11:19:13 by altheven         ###   ########.fr       */
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
	int i = 0;
	
	while(i < 4)
	{
		if (key_word[i] == level)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*f_ptr[0])();
			break;
		case 1:
			(this->*f_ptr[1])();
			break;
		case 2:
			(this->*f_ptr[2])();
			break;
		case 3:
			(this->*f_ptr[3])();
			break;
		default : 
			std :: cout << "[ Probably complaining about insignificant problems ]" << std :: endl;
			break;
	}
}