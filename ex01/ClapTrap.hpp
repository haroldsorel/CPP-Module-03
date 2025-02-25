/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:51:14 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/04 12:51:15 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream> 

class ClapTrap
{
    protected:
        std::string          _name;
        unsigned int         _hp;
        unsigned int         _energy;
        unsigned int         _damage;

    public:

        //constructors
        ClapTrap(void);
        ClapTrap(std::string const &name);
        ClapTrap(ClapTrap const &copy);

        //destructors
        virtual ~ClapTrap(void);

        //operator overload
        ClapTrap &operator=(const ClapTrap &src);

        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //getters
        std::string const &get_name(void)const;
        unsigned const int &get_hp(void)const;
        unsigned const int &get_energy(void)const;
        unsigned const int &get_damage(void)const;

        //setters
        void    set_name(std::string const &name);
        void    set_hp(unsigned const int &value);
        void    set_energy(unsigned const int &value);
        void    set_damage(unsigned const int &value);
};