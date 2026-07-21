/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:08:03 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/21 16:32:40 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
	std::string	type;
	
	public:
	Weapon(std::string type);

	/*intaed of return a copy of string it will return a 
	refrence of it 
	first const -> protect the returned value and the second
	const dont change the obj*/
	
	const std::string	&getType() const;
	void				setType(std::string type);
	
};

#endif