/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:39:56 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 13:29:49 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public :
	HumanB(std :: string name);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon &club);

	private :
	Weapon *_club;
	std :: string _name;
};

#endif