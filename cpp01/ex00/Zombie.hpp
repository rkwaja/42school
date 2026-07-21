/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 15:33:46 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/21 13:11:58 by rkhwaja          ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie();
	
	void	set_name(std::string name);
	std::string	get_name() const;
	
	void	announce( void );
	
};


Zombie*	newZombie( std::string name );
void randomChump( std::string name );


#endif