/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:29:36 by junkwak           #+#    #+#             */
/*   Updated: 2025/03/22 17:58:24 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define    FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(const FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap(void);
        void    highFivesGuys(void);
        void    attack(const std::string& target);
};


#endif