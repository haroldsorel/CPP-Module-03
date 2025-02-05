/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:51:09 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/04 12:51:10 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Bob"), _hp(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name) : _name(name), _hp(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap Constructor for " << this->_name << " called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy) : _name(copy._name), _hp(copy._hp), _energy(copy._energy), _damage(copy._damage)
{
    std::cout << "ClapTrap Copy Constructor called : a copy of " << copy._name << " was created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor for " << _name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    if (this == &src)
        return (*this);

    std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_damage = src._damage;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hp > 0 && this->_energy > 0)
    {
        std::cout << this->_name << " attacks " << target << std::endl;
        std::cout << target << " : - " << this->_damage << " HP!" <<std::endl;
        this->_energy--;
        std::cout << this->_name << " : - " << 1 << " Energy!" << std::endl;
    }
    else
    {
        if (this->_hp < 1)
            std::cout << this->_name << " has no more HP!" << std::endl;
        else if (this->_energy < 1)
            std::cout << this->_name << " has no more Energy!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hp > 0 && amount <= this->_hp)
    {
        std::cout << this->_name << " takes damage" << std::endl;
        std::cout << this->_name << " : - " << amount << " HP!" << std::endl;
        this->_hp = this->_hp - amount;
    }
    else if (this->_hp > 0 && amount > this->_hp)
    {
        std::cout << this->_name << " takes damage" << std::endl;
        std::cout << this->_name << " : - " << this->_hp << " HP!" << std::endl;
        this->_hp = 0;
    }
    else
    {
        std::cout << this->_name << " has no more HP!" << std::endl;
        return ;
    }
    std::cout << this->_name << " has " << this->_hp << " HP left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hp > 0 && this->_energy > 0)
    {
        std::cout << this->_name << " healed by " << amount << " HP" << std::endl;
        this->_hp = this->_hp + amount;
        if (this->_hp > 10)
            this->_hp = 10;
        std::cout << this->_name << " : + " << amount << " HP!" << std::endl;
        std::cout << this->_name << " : - " << 1 << " Energy!" << std::endl;
        this->_energy--;
        std::cout << this->_name << " has " << this->_hp << " HP left!" << std::endl;
    }
    else
    {
        if (this->_hp < 1)
            std::cout << this->_name << " has no more HP!" << std::endl;
        else if (this->_energy < 1)
            std::cout << this->_name << " has no more Energy!" << std::endl;
    }
}

std::string const &ClapTrap::get_name(void)const
{
    return (this->_name);
}

unsigned const int &ClapTrap::get_energy(void)const
{
    return (this->_energy);
}

unsigned const int &ClapTrap::get_hp(void)const
{
    return (this->_hp);
}

unsigned const int &ClapTrap::get_damage(void)const
{
    return (this->_damage);
}

void    ClapTrap::set_name(std::string const &name)
{
    this->_name = name;
}
void    ClapTrap::set_hp(unsigned const int &value)
{
    this->_hp = value;
}
void    ClapTrap::set_energy(unsigned const int &value)
{
     this->_energy = value;
}
void    ClapTrap::set_damage(unsigned const int &value)
{
     this->_damage = value;
}