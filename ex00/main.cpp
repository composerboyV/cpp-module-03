/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:53:48 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/14 14:13:54 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main() {
    ClapTrap clap1("CL4P-TP");
    ClapTrap clap2("FR4G-TP");
    
    std::cout << "\n Nomal Attack :\n";
    clap1.attack("FR4G-TP");
    clap2.takeDamage(0);  // ClapTrap의 초기 공격력은 0
    
    std::cout << "\n Take Damage : \n";
    // 데미지 테스트
    clap1.takeDamage(5);
    
    std::cout << "\n be Repaired : \n";
    clap1.beRepaired(3);
    
    std::cout << "\n Not have Energy point : \n";

    for (int i = 0; i < 10; i++) {
        clap2.attack("[Target]");
    }
    clap2.attack("[Target]");
    std::cout << "\n Not have Energy point : \n";
    clap1.takeDamage(8);
    clap1.attack("if dont have Energy point : ");
    clap1.beRepaired(5);
    
    return (0);
}