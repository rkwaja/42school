/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:13:29 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/21 15:43:06 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
	Zombie *zombies;
	int		i;
	int		N;
	
	N = 5;
	i = 0;
	zombies = zombieHorde(N, "Zombie \U0001f9df");
	if (!zombies)
		return (1);
	while (i < N)
	{
		zombies[i].announce();
		i++;
	}
	delete[] zombies;
	return(0);
}