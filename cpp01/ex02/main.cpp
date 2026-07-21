/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 15:45:13 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/21 16:00:44 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		string;
	std::string		*stringPTR;
	std::string		&stringREF = string;
	
	string = "HI THIS IS BRAIN";
	stringPTR = &string;

	std::cout << &string << std::endl 
	<< stringPTR << std::endl
	<<&stringREF  << std::endl << std::endl;
	
	std::cout << string << std::endl
	 << *stringPTR << std::endl << stringREF ;
}