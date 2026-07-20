/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:32:16 by joloo             #+#    #+#             */
/*   Updated: 2026/07/20 13:12:10 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	// std::cout << "Default Constructor called" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	std::string levels[MAX_LEVEL] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*levels_fptr[MAX_LEVEL])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	int i = 0;
	while (i < MAX_LEVEL)
	{
		if (level.compare(levels[i]) == 0)
		{
			(this->*levels_fptr[i])();
			return ;
		}
		i++;
	}
	return ;
}
