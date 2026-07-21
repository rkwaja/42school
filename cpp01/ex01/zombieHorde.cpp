/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:10:46 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/21 15:15:16 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombies;
	int	i;

	if (N <= 0)
		return (NULL);
	zombies = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombies[i].set_name(name);
		i++;
	}
	return (zombies);
}