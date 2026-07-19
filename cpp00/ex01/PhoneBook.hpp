#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
class PhoneBook
{
private:
    Contact contacts[8];
    int     count;
    int     index;
//const mean:function will only read not change
public:
    PhoneBook();
    void    add_contact();
    void    find()const;
};


#endif