/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/22 17:28:06 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/22 18:12:59 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main()
{
    // ClapTrap 객체 생성 및 테스트
    std::cout << "\n----- ClapTrap 테스트 -----\n" << std::endl;
    ClapTrap clap("[1ClapTrap1]");
    clap.attack("Target");
    clap.takeDamage(5);
    clap.beRepaired(3);

    // ScavTrap 객체 생성 및 테스트
    std::cout << "\n----- ScavTrap 테스트 -----\n" << std::endl;
    ScavTrap scav("{1ScavTrap1}");
    scav.attack("Target");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    // FragTrap 객체 생성 및 테스트
    std::cout << "\n----- FragTrap 테스트 -----\n" << std::endl;
    FragTrap frag("(1FragTrap1)");
    frag.attack("Target");
    frag.takeDamage(25);
    frag.beRepaired(15);
    frag.highFivesGuys();

    // DiamondTrap 객체 생성 및 테스트
    std::cout << "\n----- DiamondTrap 테스트 -----\n" << std::endl;
    DiamondTrap diamond("*1Diamond1*");
    
    // 기본 속성 확인
    std::cout << "\n기본 공격으로 속성 확인" << std::endl;
    diamond.attack("Target");
    diamond.takeDamage(30);
    diamond.beRepaired(20);
    
    // 상속받은 특수 능력 확인
    std::cout << "\n상속받은 특수 능력 확인" << std::endl;
    diamond.guardGate();
    diamond.highFivesGuys();
    
    // DiamondTrap 고유 기능 확인
    std::cout << "\nDiamondTrap 고유 기능 확인" << std::endl;
    diamond.whoAmI();

    std::cout << "\n----- 모든 객체 소멸자 호출 -----\n" << std::endl;
    return 0;
}