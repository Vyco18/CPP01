/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 10:12:45 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 10:30:44 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int	main(void)
{
	std :: string	str = "HI THIS IS BRAIN";
	std :: string	*stringPTR = &str;
	std :: string	&stringREF = str;

	std :: cout << "Adress original string : " << &str << std :: endl 
	<< "Adress PTR string : " << &stringPTR << std :: endl 
	<< "Adress REF string : " << &stringREF << std :: endl;

	std :: cout << std :: endl << "Value original string : " << str << std :: endl 
	<< "Value PTR string : " << *stringPTR << std :: endl 
	<< "Value REF string : " << stringREF << std :: endl;
	return (0);
}