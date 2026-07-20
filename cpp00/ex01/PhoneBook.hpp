/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 14:48:28 by joloo             #+#    #+#             */
/*   Updated: 2026/04/03 16:02:56 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_CONTACTS 8
#define MAX_WIDTH 10

class PhoneBook
{
private:
	Contact	_Contacts[MAX_CONTACTS];
	int		_Contacts_i;

public:

	PhoneBook(void);
	~PhoneBook(void);
	void AddContact(void);
	void SearchContact(void) const;
};

#endif