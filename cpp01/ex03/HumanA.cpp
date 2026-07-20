/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 13:42:50 by joloo             #+#    #+#             */
/*   Updated: 2026/07/20 13:12:10 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &Weapon) : _name(name), _Weapon(Weapon)
{
	// std::cout << "Default Constructor called" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their "
		<< this->_Weapon.getType() << std::endl;
}
