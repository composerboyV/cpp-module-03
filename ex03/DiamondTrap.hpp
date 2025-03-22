/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:45:51 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/22 17:51:34 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define    DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap
{
private:
    std::string name;
    unsigned int	Hit_point;
	unsigned int	Energy_point;
	unsigned int	Attack_damage;
public :
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap& other);
    DiamondTrap& operator=(const DiamondTrap& obj);
    ~DiamondTrap(void);
    void    whoAmI();
    void    attack(const std::string& target);
};




#endif