/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:32:16 by joloo             #+#    #+#             */
/*   Updated: 2026/07/20 15:51:49 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	// std::cout << "Constructor called" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
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
			break ;
		}
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*levels_fptr[0])();
			(this->*levels_fptr[1])();
			(this->*levels_fptr[2])();
			(this->*levels_fptr[3])();
			break ;
		case 1:
			(this->*levels_fptr[1])();
			(this->*levels_fptr[2])();
			(this->*levels_fptr[3])();
			break ;
		case 2:
			(this->*levels_fptr[2])();
			(this->*levels_fptr[3])();
			break ;
		case 3:
			(this->*levels_fptr[3])();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		
	}
	return ;
}
