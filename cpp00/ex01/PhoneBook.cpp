/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 14:50:39 by joloo             #+#    #+#             */
/*   Updated: 2026/07/20 13:12:10 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>

// constructor/destructor no return types
PhoneBook::PhoneBook(void) : _Contacts_i(0)
{
	// std::cout << "Default Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void PhoneBook::AddContact(void)
{
	Contact	new_Contact;
	std::string input;

	std::cout << "Enter firstname: ";
	std::cin >> input;
	new_Contact.set_firstname(input);
	std::cout << "Enter lastname: ";
	std::cin >> input;
	new_Contact.set_lastname(input);
	std::cout << "Enter nickname: ";
	std::cin >> input;
	new_Contact.set_nickname(input);
	std::cout << "Enter phone number: ";
	std::cin >> input;
	new_Contact.set_phone_number(input);
	std::cout << "Enter darkest secret: ";
	std::cin >> input;
	new_Contact.set_secret(input);
	new_Contact.set_is_set(1);

	this->_Contacts[this->_Contacts_i] = new_Contact;
	this->_Contacts_i++;
	if (this->_Contacts_i == MAX_CONTACTS)
		this->_Contacts_i = 0;
	return ;
}

static void print_trunc_field(const std::string &string)
{
	if (string.length() > MAX_WIDTH)
	{
		int i = 0;
		while (i < MAX_WIDTH - 1)
		{
			std::cout << string[i];
			i++;
		}
		std::cout << ".";
	}
	else
	{
		std::cout << std::setw(MAX_WIDTH) << string;
	}
	return ;
}

void PhoneBook::SearchContact(void) const
{
	int i = 0;
	std::cout << "Displaying saved contacts" << std::endl;
	while (i < MAX_CONTACTS)
	{
		if (this->_Contacts[i].get_is_set() == 1)
		{
			std::cout << std::setw(MAX_WIDTH) << i;
			std::cout << "|";
			print_trunc_field(this->_Contacts[i].get_firstname());
			std::cout << "|";
			print_trunc_field(this->_Contacts[i].get_lastname());
			std::cout << "|";
			print_trunc_field(this->_Contacts[i].get_nickname());
			std::cout << std::endl;
		}
		else
			break ;
		i++;
	}
	std::cout << "Choose index to view: ";
	std::string input;
	std::cin >> input;
	i = 0;
	while (input[i] != '\0')
	{
		if (std::isdigit(input[i]) == 0)
		{
			std::cout << "Invalid input :(" << std::endl;
			return ;
		}
		i++;
	}
	int index = std::atoi(input.c_str());
	if (index < 0 || index >= MAX_CONTACTS || this->_Contacts[index].get_is_set() != 1)
	{
		std::cout << "Out of range input :(" << std::endl;
			return ;
	}
	std::cout << "first name: " << this->_Contacts[index].get_firstname() << std::endl;
	std::cout << "last name: " << this->_Contacts[index].get_lastname() << std::endl;
	std::cout << "nickname: " << this->_Contacts[index].get_nickname() << std::endl;
	std::cout << "phone number: " << this->_Contacts[index].get_phone_number() << std::endl;
	std::cout << "darkest secret: " << this->_Contacts[index].get_secret() << std::endl;
	return ;
}
