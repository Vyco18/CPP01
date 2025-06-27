/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: altheven <altheven@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 11:40:22 by altheven          #+#    #+#             */
/*   Updated: 2025/06/27 13:32:06 by altheven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class	HumanA
{
	public :
	HumanA(std :: string name, Weapon &club);
	~HumanA(void);
	void	attack(void);

	private :
	Weapon &_club;
	std :: string _name;
};

#endif