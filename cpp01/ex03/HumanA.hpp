/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:08:40 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/21 16:41:56 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>


class HumanA
{
	private:
	std::string	name;
	Weapon &weapon;
	
	public:
	HumanA(std::string name, Weapon &weapon);
	void	attack();	

};


#endif