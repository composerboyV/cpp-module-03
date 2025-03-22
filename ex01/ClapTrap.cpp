/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:54:04 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/22 18:01:39 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        Hit_point = other.Hit_point;
        Energy_point = other.Energy_point;
        Attack_damage = other.Attack_damage;
    }
    return (*this);
}

ClapTrap::ClapTrap(std::string name_)
{
    name = name_;
    Hit_point = 10;
    ClapTrap::Energy_point = 10;
    ClapTrap::Attack_damage = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

void    ClapTrap::attack(const std::string& target)
{
    if (Hit_point <= 0) {
        std::cout << "Not have Hit_point" << std::endl;
        return ;
    }
    else if (Energy_point <= 0) {
        std::cout << "Not have Energy_point" << std::endl;
        return ;
    }
    std::cout << "ClapTrap";
    std::cout << name << " Attacks " << target << "Causing " << Attack_damage << "Point Of Damage!" << std::endl;
    Energy_point--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap ";
    std::cout << name << " Take Damage " << amount << "Points!" << std::endl; 
    if (amount > Hit_point)
        Hit_point = 0;
    else
        Hit_point -= amount;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_point <= 0) {
        std::cout << "Not have Hit_point" << std::endl;
        return ;
    }
    if (Energy_point <= 0) {
        std::cout << "Not have Energy_point" << std::endl;
    }
    std::cout << "ClapTrap ";
    std::cout << name << " Repaired " << amount << " Point! " << std::endl;
    Energy_point--;
    Hit_point += amount;
}