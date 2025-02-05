/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:58:21 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 16:58:22 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
    private :
        std::string _name;
    public :

        //constructors
        DiamondTrap(void);
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &src);

        //destructor
        ~DiamondTrap(void);

        //overloaded operators
        DiamondTrap &operator=(DiamondTrap const &src);

        //methods
        void    whoAmI(void);
        //getters
        std::string get_name(void)const;
        //setters
        void        set_name(std::string const &name);
};
