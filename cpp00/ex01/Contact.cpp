#include "Contact.hpp"

Contact::Contact(void)
{
    
}

//seters

void    Contact::set_firstname(std::string value)
{
    this->firstname = value;
}
void    Contact::set_lastname(std::string value)
{
    this->lastname = value;
}

void    Contact::set_nickname(std::string value)
{
    this->nickname = value;
}

void    Contact::set_phone_number(std::string value)
{
    this->phone_number = value;
}
void    Contact::set_darkest_secret(std::string value)
{
    this->darkest_secret = value;
}

//getters

std::string     Contact::get_firstname(void)const
{
    return (this->firstname);
}

std::string Contact::get_lastname(void) const
{
	return (this->lastname);
}

std::string Contact::get_nickname(void) const
{
	return (this->nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
	return (this->darkest_secret);
}
