/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 09:33:56 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/22 18:02:20 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {}

ScavTrap::ScavTrap(std::string name_) : ClapTrap(name_)
{
    this->name = name_;
    ScavTrap::Hit_point = 100;
    ScavTrap::Energy_point = 50;
    ScavTrap::Attack_damage = 20;
    std::cout << "[ScavTrap] Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        name = other.name;
        Hit_point = other.Hit_point;
        Energy_point = other.Energy_point;
        Attack_damage = other.Attack_damage;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "[ScavTrap] Destructor called" <<std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    std::cout << "[ScavTrap] ";
    if (Hit_point  <= 0)
    {
        std::cout << "Not Enough Of Hit Point" << std::endl;
        return ;
    }
    if (Energy_point <= 0)
    {
        std::cout << "Not Enough Of Energy Point" << std::endl;
        return ;
    }
    std::cout << name << " Attacks " << target << "Causing " << Attack_damage << " Point Of Damage!" << std::endl;
    Energy_point--;
}

void    ScavTrap::takeDamage(unsigned int amount)
{   
    std::cout << "[ScavTrap] ";
    std::cout << name << " Take Damage " << amount << "Points!" << std::endl;   
    if (amount >= Hit_point)
        Hit_point = 0;
    else
        Hit_point -= amount;
}
void	ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "[ScavTrap] ";
    if (Hit_point <= 0)
    {
        std::cout << "Not Enough of Hit Point" << std::endl;
        return ;
    }
    if (Energy_point <= 0)
    {
        std::cout << "Not Enough Of Energy Point" << std::endl;
        return ;
    }
    std::cout << name << " Repaired " << amount << " Point! " << std::endl;
    Energy_point--;
    Hit_point += amount;
}

void    ScavTrap::guardGate()
{
    if (Hit_point <= 0)
    {
        std::cout << "Not Enough Of Hit Point" << std::endl;
        return ;
    }
    if (Energy_point <= 0)
    {
        std::cout << "Not Enough Of Energy Point" << std::endl;
        return ;
    }
    std::cout << " [ScavTrap] ";
    std::cout << "GuardGate!" <<std::endl;
}