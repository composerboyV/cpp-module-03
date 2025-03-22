/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:33:45 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/22 17:58:31 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define    SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
	private:
		std::string name;
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
        void    guardGate();
};

#endif
