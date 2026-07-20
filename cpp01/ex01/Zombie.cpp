/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 17:09:08 by joloo             #+#    #+#             */
/*   Updated: 2026/04/06 13:59:40 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	// std::cout << "constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": destructor called" << std::endl;
	return ;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

// should have const type
void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
