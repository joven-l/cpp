/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 14:09:14 by joloo             #+#    #+#             */
/*   Updated: 2026/07/20 15:51:49 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) : _is_set(0)
{
	// std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void Contact::set_firstname(const std::string &firstname)
{
	_firstname = firstname;
	return ;
}

void Contact::set_lastname(const std::string &lastname)
{
	_lastname = lastname;
	return ;
}

void Contact::set_nickname(const std::string &nickname)
{
	_nickname = nickname;
	return ;
}

void Contact::set_phone_number(const std::string &phone_number)
{
	_phone_number = phone_number;
	return ;
}

void Contact::set_secret(const std::string &secret)
{
	_secret = secret;
	return ;
}

void Contact::set_is_set(int is_set)
{
	_is_set = is_set;
	return ;
}

std::string Contact::get_firstname(void) const
{
	return (_firstname);
}

std::string Contact::get_lastname(void) const
{
	return (_lastname);
}

std::string Contact::get_nickname(void) const
{
	return (_nickname);
}

std::string Contact::get_phone_number(void) const
{
	return (_phone_number);
}

std::string Contact::get_secret(void) const
{
	return (_secret);
}

int	Contact::get_is_set(void) const
{
	return (_is_set);
}
