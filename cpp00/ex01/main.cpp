/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:22:14 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/19 15:22:35 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>



// getline function used to read an entire line of text from input stream
// stores the extracted characters into string until delimiter.
//Commonly used to take input containing spaces, unlike cin which stops at whitespace.
//By default, it stops reading when a newline character (\n) is found.


int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
		std::cout << "Enter Command: ";
		if (!std::getline(std::cin, command))
			break ;
		if (command == "ADD")
			phonebook.add_contact();
		else if (command == "EXIT")
			break ;
		else if (command == "SEARCH")
			phonebook.find();
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}