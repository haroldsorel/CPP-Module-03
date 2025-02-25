/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:43:06 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 11:43:07 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

    /* CONSTRUCTORS*/
    std::cout << "CONSTRUCTING..." << std::endl;
    std::cout << std::endl;
    ScavTrap a("Jean");
    ScavTrap b("Didier");
    ScavTrap c(b);
    ScavTrap d;
    ClapTrap e("Bro");
    std::cout << std::endl;

     /* VALUE CHECKS*/
    std::cout << "VALUE CHECKS" << std::endl;
    std::cout << std::endl;
    std::cout << a.get_name() << " " << a.get_hp() << " " << a.get_energy() << " " << a.get_damage() << std::endl;
    std::cout << b.get_name() << " " << b.get_hp() << " " << b.get_energy() << " " << b.get_damage() << std::endl;
    std::cout << c.get_name() << " " << c.get_hp() << " " << c.get_energy() << " " << c.get_damage() << std::endl;
    std::cout << d.get_name() << " " << d.get_hp() << " " << d.get_energy() << " " << d.get_damage() << std::endl;
    d = a;
    a = a;
    std::cout << d.get_name() << " " << d.get_hp() << " " << d.get_energy() << " " << d.get_damage() << std::endl;
    std::cout << "printing, modifying c and printing again..." << std::endl;
    std::cout << c.get_name() << " " << c.get_hp() << " " << c.get_energy() << " " << c.get_damage() << std::endl;
    c.set_name("Harold");
    c.set_hp(0);
    c.set_energy(0);
    c.set_damage(0);
    std::cout << c.get_name() << " " << c.get_hp() << " " << c.get_energy() << " " << c.get_damage() << std::endl;
    std::cout << std::endl;

     /*METHODS CHECK*/
    std::cout << "METHODS CHECK" << std::endl;
    std::cout << std::endl;
    std::cout << e.get_name() << " Before : " << e.get_hp() << " HP " << e.get_energy() << " Energy" << std::endl;
    std::cout << b.get_name() << " Before : " << b.get_hp() << " HP " << b.get_energy() << " Energy" << std::endl;
    e.attack("Random boi");
    b.attack("Random boi");
    e.takeDamage(10);
    b.takeDamage(10);
    e.beRepaired(10);
    b.beRepaired(10);
    std::cout << e.get_name() << " After : " << e.get_hp() << " HP " << e.get_energy() << " Energy" << std::endl;
    std::cout << b.get_name() << " After : " << b.get_hp() << " HP " << b.get_energy() << " Energy" << std::endl;
    std::cout << std::endl;
    a.guardGate();
    b.guardGate();
    c.guardGate();
    d.guardGate();

    std::cout << std::endl;
    std::cout << "DESTRUCTING..." << std::endl;
    std::cout << std::endl;
    return (0);
}