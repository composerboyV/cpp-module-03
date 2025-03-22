/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:53:48 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/22 18:11:45 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\n===== 각 클래스 생성 및 속성 비교 =====\n";
    ClapTrap clap("[1ClapTrap1]");
    ScavTrap scav("{1ScavTrap1}");
    FragTrap frag("(1FragTrap1)");
    
    std::cout << "\n===== 공격력 비교 =====\n";
    std::cout << "ClapTrap 공격:\n";
    clap.attack("Target");  // 공격력 0
    
    std::cout << "\nScavTrap 공격:\n";
    scav.attack("Target");  // 공격력 20
    
    std::cout << "\nFragTrap 공격:\n";
    frag.attack("Target");  // 공격력 30
    
    std::cout << "\n===== 체력 및 데미지 테스트 =====\n";

    std::cout << "ClapTrap - 높은 데미지 테스트:\n";
    clap.takeDamage(8);  // 10 체력 중 8 감소
    clap.attack("Target");  // 여전히 공격 가능
    clap.takeDamage(5);  // 남은 2 체력보다 많은 데미지 → 체력 0
    clap.attack("Target");  // 체력 없어서 공격 불가능
    
    std::cout << "\nFragTrap - 체력 회복 테스트:\n";
    frag.takeDamage(70);  // 100 체력 중 70 감소
    frag.beRepaired(30);  // 30 체력 회복
    frag.takeDamage(80);  // 남은 60 체력보다 많은 데미지 → 체력 0
    frag.beRepaired(20);  // 체력 없어서 회복 불가능
    
    std::cout << "\n===== 특수 기능 테스트 =====\n";
    std::cout << "ScavTrap 특수 기능:\n";
    scav.guardGate();
    
    std::cout << "\nFragTrap 특수 기능:\n";

    FragTrap frag2("(3FragTrap3)");
    frag2.highFivesGuys();
    
    std::cout << "\n===== 에너지 소진 테스트 =====\n";
    
    std::cout << "짧은 루프로 일부 에너지만 소모:\n";
    for (int i = 0; i < 5; i++) {
        frag2.attack("Target");
    }
    
    std::cout << "\n특수 기능 재사용:\n";
    frag2.highFivesGuys();
    
    std::cout << "\n===== 클래스 간의 기능 독립성 확인 =====\n";

    std::cout << "\n===== 소멸자 호출 순서 확인 =====\n";
    return 0;
}

