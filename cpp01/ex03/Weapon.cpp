/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 13:42:17 by joloo             #+#    #+#             */
/*   Updated: 2026/07/20 13:12:10 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	// std::cout << "Default Constructor called" << std::endl;
	return ;
}

Weapon::~Weapon(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

std::string const &Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}