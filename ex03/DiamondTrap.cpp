/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:45:43 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/22 17:55:22 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name) , FragTrap(name)
{
    this->name = name;
    Hit_point = FragTrap::Hit_point;
    Energy_point = ScavTrap::Energy_point;
    this->Attack_damage = FragTrap::Attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        name = other.name;
        this->Hit_point = other.Hit_point;
        this->Energy_point = other.Energy_point;
        this->Attack_damage = other.Attack_damage;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond Destructor called" <<std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "I am " << name << ", and my clapTrap name is " << ClapTrap::name << std::endl;
}

void    DiamondTrap::attack(const std::string &target)
{    
    ScavTrap::attack(target);
}