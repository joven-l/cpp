/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 14:52:05 by joloo             #+#    #+#             */
/*   Updated: 2026/04/03 16:53:08 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	PhoneBook	pb;
	std::string	input;

	while (1)
	{
		std::cout << "Enter Command(ADD, SEARCH, EXIT): ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
			pb.AddContact();
		else if (input.compare("SEARCH") == 0)
			pb.SearchContact();
		else if (input.compare("EXIT") == 0)
			return (0);
	}
	return (0);
}
