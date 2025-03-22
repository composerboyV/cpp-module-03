/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:53:48 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/14 14:18:57 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\n===== ClapTrap 생성 및 테스트 =====\n";
    ClapTrap clap("CL4P-TP");
    
    std::cout << "\n===== ScavTrap 생성 =====\n";
    ScavTrap scav("SC4V-TP");
    
    std::cout << "\n===== 기본 공격 비교 =====\n";
    clap.attack("적");
    scav.attack("적");
    
    std::cout << "\n===== 데미지 테스트 =====\n";
    clap.takeDamage(5);
    scav.takeDamage(30);
    
    std::cout << "\n===== 수리 테스트 =====\n";
    clap.beRepaired(3);
    scav.beRepaired(20);
    
    std::cout << "\n===== ScavTrap 특수 기능 =====\n";
    scav.guardGate();
    
    std::cout << "\n===== 에너지 소진 테스트 =====\n";
    // ScavTrap의 에너지는 50이므로 반복문으로 모두 소진시킴
    for (int i = 0; i < 50; i++) {
        scav.attack("타겟");
    }
    // 에너지 소진 후 액션 시도
    scav.attack("타겟");
    scav.beRepaired(10);
    
    std::cout << "\n===== 체력 소진 테스트 =====\n";
    // ScavTrap의 체력은 100이고 이미 30 데미지를 받았으므로 70 이상 더 받으면 소진됨
    scav.takeDamage(70);
    // 체력 소진 후 액션 시도
    scav.attack("타겟");
    scav.beRepaired(10);
    scav.guardGate();
    
    std::cout << "\n===== 소멸자 호출 순서 확인 =====\n";
    return 0;
}