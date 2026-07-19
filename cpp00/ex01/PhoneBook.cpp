/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhwaja <rkhwaja@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 15:21:50 by rkhwaja           #+#    #+#             */
/*   Updated: 2026/07/19 15:21:51 by rkhwaja          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

PhoneBook::PhoneBook()
{
    this->count = 0;
    this->index = 0;
}
static bool	ft_isdigit(std::string input)
{
	std::string::size_type	i;

	if (input.empty())
		return (false);
	i = 0;
	while (i < input.length())
	{
		if (!std::isdigit(static_cast<unsigned char>(input[i])))
			return (false);
		i++;
	}
	return (true);
}
static std::string ft_getline(std::string cont_info)
{
	std::string input;
	int i;
	while (1)
	{
		std::cout << cont_info;
		if (!std::getline(std::cin, input))
			return ("");
		
		if (cont_info == "Phone number: " && !ft_isdigit(input))
		{
			std::cout << "Only digits for PHONE" << std::endl;
			continue ;
		}

		if (!input.empty())
			return(input);
		std::cout << "Values can't be empty" << std::endl;
	}
}
void PhoneBook::add_contact()
{
	Contact	contact;
	std::string	input;

	contact.set_firstname(ft_getline("First Name:"));
	contact.set_lastname(ft_getline("Last Name: "));
	contact.set_nickname(ft_getline("Nickname: "));
	contact.set_phone_number(ft_getline("Phone number: "));
	contact.set_darkest_secret(ft_getline("Darkest secret: "));

	this->contacts[this->index] = contact;

	if (this->count < 8)
		this->count++;
	this->index++;
	if (this->index == 8)
		this->index = 0;
	std::cout << "Contact ADDED" << std::endl;
}

static std::string	write_values(std::string values)
{
	std::string result;
	if (values.length() > 10)
		values = values.substr(0,9) + ".";
	return (values);
	
}

void PhoneBook::find()const
{
	int				i;
	int				chosen_index;
	std::string		input;
	if (this->count == 0)
	{
		std::cout << "Empty PhoneBook" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "FirstName" << "|";
	std::cout << std::setw(10) << "LastName" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	i = 0;
	while (i < this->count)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << write_values(this->contacts[i].get_firstname()) << "|";
		std::cout << std::setw(10) << write_values(this->contacts[i].get_lastname()) << "|";
		std::cout << std::setw(10) << write_values(this->contacts[i].get_nickname()) << std::endl;
		i++;
	}
	std::cout << "Choose index: ";
	std::getline(std::cin, input);

	if (input.length() != 1 || input[0] < '0' || input[0] > '7')
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}

	chosen_index = input[0] - '0';

	if (chosen_index >= this->count)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}

	std::cout << "FirstName: " << this->contacts[chosen_index].get_firstname() << std::endl;
	std::cout << "LastName: " << this->contacts[chosen_index].get_lastname() << std::endl;
	std::cout << "Nickname: " << this->contacts[chosen_index].get_nickname() << std::endl;
	std::cout << "Phone number: " << this->contacts[chosen_index].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[chosen_index].get_darkest_secret() << std::endl;
}