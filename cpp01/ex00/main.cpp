/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 15:33:33 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/21 13:06:02 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie	*zombie;
	
	randomChump("The Stack \U0001f9df");
	zombie = newZombie("The Heap \U0001f9df");
	zombie-> announce();
	delete (zombie);
}
