/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 10:37:46 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 13:14:56 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>

class	Weapon
{
	public :
	
	Weapon(std :: string newType);
	~Weapon(void);
	std :: string const & getType(void) const;
	void	setType(std :: string newType);
	
	private :
	std :: string	_type;
};

#endif