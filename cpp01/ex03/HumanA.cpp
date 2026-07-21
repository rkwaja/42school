/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:08:51 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/21 16:50:25 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this-> name = name;
}

void	HumanA::attack()
{
	std::cout << " attacks with their ";
	std::cout << this->weapon.getType() << std:: endl;
}