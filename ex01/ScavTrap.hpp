/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:26:29 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/04 19:26:35 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(void);
	    ScavTrap(std::string const &name);
	    ScavTrap(ScavTrap const &copy);
	    ~ScavTrap(void);

	    ScavTrap	&operator=(ScavTrap const &copy);

        void    attack(const std::string& target);
	    void	guardGate(void);
};
