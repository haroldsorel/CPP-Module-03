/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:26:23 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/04 19:26:24 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    std::cout << "ScavTrap Default Constructor called" << std::endl;
    this->_name = "Bobette";
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor for " << this->_name << " called" << std::endl;
    this->_name = name;
    this->_hp = 100;
    this->_energy = 50;
    this->_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap Copy Constructor called : a copy of " << copy._name << " was created"<<std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Scavtrap Destructor for " << this->_name << " called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
    if (this == &copy)
    {
        std::cout << this->_name << " is already " << copy._name << std::endl; 
        return (*this);
    }
    std::cout << "ScavTrap Assignation called : " << this->_name << " becomes " << copy._name << std::endl;
    this->_name = copy._name;
    this->_hp = copy._hp;
    this->_energy = copy._energy;
    this->_damage = copy._damage;
    return (*this);
}

void    ScavTrap::attack(std::string const &target)
{
     if (this->_hp > 0 && this->_energy > 0)
    {
        std::cout << "[ScavTrap] " <<this->_name << " attacks " << target << std::endl;
        std::cout << "[ScavTrap] " << target << " : - " << this->_damage << " HP!" <<std::endl;
        this->_energy--;
        std::cout << "[ScavTrap] " << this->_name << " : - " << 1 << " Energy!" << std::endl;
    }
    else
    {
        if (this->_hp < 1)
            std::cout << "[ScavTrap] " << this->_name << " has no more HP!" << std::endl;
        else if (this->_energy < 1)
            std::cout << "[ScavTrap] " << this->_name << " has no more Energy!" << std::endl;
    }
}

void	ScavTrap::guardGate(void)
{
    std::cout << this->_name << " is now in Gate keeper mode!" << std::endl;
}
