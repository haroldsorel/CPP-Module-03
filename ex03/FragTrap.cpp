/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:35:29 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 16:35:30 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    std::cout << "FragTrap Default Constructor called" << std::endl;
    this->_name = "Bobette";
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
    std::cout << "FragTrap Constructor for " << this->_name << " called" << std::endl;
    this->_name = name;
    this->_hp = 100;
    this->_energy = 100;
    this->_damage = 30;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap Copy Constructor called : a copy of " << copy._name << " was created"<<std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor for " << this->_name << " called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
    if (this == &copy)
    {
        std::cout << this->_name << " is already " << copy._name << std::endl; 
        return (*this);
    }
    std::cout << "FragTrap Assignation called : " << this->_name << " becomes " << copy._name << std::endl;
    this->_name = copy._name;
    this->_hp = copy._hp;
    this->_energy = copy._energy;
    this->_damage = copy._damage;
    return (*this);
}

void	FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << " : BROOOOOOOOO HIGH FIVE!!" << std::endl;
}

