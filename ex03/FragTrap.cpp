/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:29:27 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/22 17:55:12 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {}

FragTrap& FragTrap::operator=(const FragTrap& other)
{   
    if (this != &other) {
        name = other.name;
        Hit_point = other.Hit_point;
        Energy_point = other.Energy_point;
        Attack_damage = other.Attack_damage;
    }
    return (*this);
}

FragTrap::FragTrap(const FragTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

FragTrap::FragTrap(std::string name_) : ClapTrap(name_)
{
    name = name_;
    Hit_point = 100;
    ClapTrap::Energy_point = 100;
    ClapTrap::Attack_damage = 30;
    std::cout << "{FragTrap} Default constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
     std::cout << "{FragTrap} Destructor called" <<std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (Hit_point <= 0) {
        std::cout <<"{FragTrap} Not Enough Of Hit Point" << std::endl;
        return ;
    }
    if (Energy_point <= 0) {
        std::cout << "{FragTrap} Not Enough Of Energy Point" << std::endl;
        return ;
    }
    std::cout << "{FragTrap} highFives Guys!" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (Hit_point <= 0) {
        std::cout << "{FragTrap} Not have Hit_point" << std::endl;
        return ;
    }
    if (Energy_point <= 0) {
        std::cout << "{FragTrap} Not have Energy_point" << std::endl;
    }
    std::cout << "{FragTrap} " << name << " Attack " << target << " Causing " << Attack_damage << " Point of Damage!" << std::endl;
    Energy_point--;
}