/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 13:42:48 by joloo             #+#    #+#             */
/*   Updated: 2026/07/20 15:51:49 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name)
{
	// std::cout << "Constructor called" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->_Weapon = &Weapon;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their "
		<< this->_Weapon->getType() << std::endl;
}
