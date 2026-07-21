/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:13:09 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/21 15:42:28 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{}
Zombie::~Zombie()
{
	std::cout << this->name << ": destroyed" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}
void	Zombie::announce()
{
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
