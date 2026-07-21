/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 13:07:57 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/21 15:31:55 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
	std::string	name;
	
	public:
	Zombie();
	~Zombie();

	
	void	set_name(std::string name);
	void	announce();
};

Zombie* zombieHorde( int N, std::string name );


#endif