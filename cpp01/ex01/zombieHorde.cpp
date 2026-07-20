/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 18:43:28 by joloo             #+#    #+#             */
/*   Updated: 2026/04/05 18:54:31 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*newHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		newHorde[i].set_name(name);
	}
	return (newHorde);
}
