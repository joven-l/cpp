/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:38:47 by joloo             #+#    #+#             */
/*   Updated: 2026/04/06 16:55:20 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl harl;

	std::cout << "debug" << std::endl;
	harl.complain("DEBUG");
	std::cout << "info" << std::endl;
	harl.complain("INFO");
	std::cout << "warning" << std::endl;
	harl.complain("WARNING");
	std::cout << "error" << std::endl;
	harl.complain("ERROR");
	harl.complain("IVALID");
}
