/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joloo <joloo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:32:42 by joloo             #+#    #+#             */
/*   Updated: 2026/04/06 16:49:33 by joloo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

#include <string>

# define MAX_LEVEL 4

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Harl(void);
	~Harl(void);
	void complain( std::string level );
};

#endif