/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 15:33:38 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/20 18:40:18 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
 {
	Zombie *zombiePtr;

	zombiePtr = new Zombie(name);

	if (zombiePtr == nullptr)
	{
		std::cout << "Memory allocation failed";
		delete zombiePtr;
	}
	return (zombiePtr);
 }