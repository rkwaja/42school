/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 15:33:43 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/20 18:45:50 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..."; 
}

std::string	Zombie::get_name(void)const
{
	return (this->name);	
}
void	Zombie::announce( void )
{
	set_name("BraiiiiiiinnnzzzZ...");
}