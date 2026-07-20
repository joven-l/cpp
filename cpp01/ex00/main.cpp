/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:14:40 by joloo             #+#    #+#             */
/*   Updated: 2026/04/05 18:42:29 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *one = newZombie("one");
	Zombie *two = newZombie("two");
	randomChump("chump");
	one->announce();
	two->announce();
	delete (one);
	delete (two);
	return (0);
}
