/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:25:18 by altheven          #+#    #+#             */
/*   Updated: 2025/06/30 09:56:24 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	public :
	void complain(std :: string level);
	Harl(void);
	~Harl(void);

	private :
	void	(Harl :: *f_ptr[4])(void);
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
};

#endif