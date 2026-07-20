/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 15:47:25 by joloo             #+#    #+#             */
/*   Updated: 2026/04/03 16:28:49 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
private:
	std::string	_firstname;
	std::string _lastname;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_secret;
	int			_is_set;

public:
	Contact(void);
	~Contact(void);

	void set_firstname(const std::string &firstname);
	void set_lastname(const std::string &lastname);
	void set_nickname(const std::string &nickname);
	void set_phone_number(const std::string &phone_number);
	void set_secret(const std::string &secret);
	void set_is_set(int is_set);

	std::string get_firstname(void) const;
	std::string get_lastname(void) const;
	std::string get_nickname(void) const;
	std::string	get_phone_number(void) const;
	std::string get_secret(void) const;
	int get_is_set(void) const;
};

#endif