/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:54:00 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/14 15:29:13 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define	CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	protected :
		std::string name;
		unsigned int	Hit_point;
		unsigned int	Energy_point;
		unsigned int	Attack_damage;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		virtual ~ClapTrap();
		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};



#endif