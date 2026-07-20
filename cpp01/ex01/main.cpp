/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 19:14:40 by joloo             #+#    #+#             */
/*   Updated: 2026/04/05 19:02:46 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;

	Zombie *horde = zombieHorde(N, "aa");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete []horde;
	return (0);
}
