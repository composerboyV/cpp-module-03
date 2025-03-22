/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:53:48 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/14 14:35:33 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\n===== 각 클래스 생성 및 속성 비교 =====\n";
    ClapTrap clap("CL4P-TP");
    ScavTrap scav("SC4V-TP");
    FragTrap frag("FR4G-TP");
    
    std::cout << "\n===== 공격력 비교 =====\n";
    std::cout << "ClapTrap 공격:\n";
    clap.attack("타겟");  // 공격력 0
    
    std::cout << "\nScavTrap 공격:\n";
    scav.attack("타겟");  // 공격력 20
    
    std::cout << "\nFragTrap 공격:\n";
    frag.attack("타겟");  // 공격력 30
    
    std::cout << "\n===== 체력 및 데미지 테스트 =====\n";
    // 각 클래스의 체력 차이 확인 (ClapTrap: 10, ScavTrap: 100, FragTrap: 100)
    std::cout << "ClapTrap - 높은 데미지 테스트:\n";
    clap.takeDamage(8);  // 10 체력 중 8 감소
    clap.attack("타겟");  // 여전히 공격 가능
    clap.takeDamage(5);  // 남은 2 체력보다 많은 데미지 → 체력 0
    clap.attack("타겟");  // 체력 없어서 공격 불가능
    
    std::cout << "\nFragTrap - 체력 회복 테스트:\n";
    frag.takeDamage(70);  // 100 체력 중 70 감소
    frag.beRepaired(30);  // 30 체력 회복
    frag.takeDamage(80);  // 남은 60 체력보다 많은 데미지 → 체력 0
    frag.beRepaired(20);  // 체력 없어서 회복 불가능
    
    std::cout << "\n===== 특수 기능 테스트 =====\n";
    std::cout << "ScavTrap 특수 기능:\n";
    scav.guardGate();
    
    std::cout << "\nFragTrap 특수 기능:\n";
    // 새 FragTrap 생성 (이전 것은 체력이 소진됨)
    FragTrap frag2("FR4G2-TP");
    frag2.highFivesGuys();
    
    std::cout << "\n===== 에너지 소진 테스트 =====\n";
    // FragTrap의 에너지는 100
    std::cout << "짧은 루프로 일부 에너지만 소모:\n";
    for (int i = 0; i < 5; i++) {
        frag2.attack("타겟");
    }
    
    std::cout << "\n특수 기능 재사용:\n";
    frag2.highFivesGuys();  // 여전히 에너지 충분
    
    std::cout << "\n===== 클래스 간의 기능 독립성 확인 =====\n";
    // 각 클래스의 특수 기능 호출 (컴파일 오류 확인용 주석)
    // clap.guardGate();  // 컴파일 오류 - ClapTrap에는 이 기능 없음
    // clap.highFivesGuys();  // 컴파일 오류 - ClapTrap에는 이 기능 없음
    // scav.highFivesGuys();  // 컴파일 오류 - ScavTrap에는 이 기능 없음
    
    std::cout << "\n===== 소멸자 호출 순서 확인 =====\n";
    return 0;
}

