#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private:
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    public:
    Contact(void);
    
    void	set_firstname(std::string value);
	void	set_lastname(std::string value);
	void	set_nickname(std::string value);
	void	set_phone_number(std::string value);
	void	set_darkest_secret(std::string value);

	std::string	get_firstname(void) const;
	std::string	get_lastname(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phone_number(void) const;
	std::string	get_darkest_secret(void) const;


};

#endif