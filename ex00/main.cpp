/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:51:29 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/04 12:51:30 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ClapTrap.hpp"

int main()
{
	{
		ClapTrap a("Bro1");
		ClapTrap b("Bro2");
		ClapTrap c(a);
		ClapTrap d;
        std::cout << std::endl;

		a.attack("Bro2");
        std::cout << std::endl;

		b.takeDamage(8);
        std::cout << std::endl;

		b.beRepaired(5);
        std::cout << std::endl;

		a.attack("Bro2");
        std::cout << std::endl;

        b.takeDamage(10);
        std::cout << std::endl;

		b.beRepaired(10);
        std::cout << std::endl;

	}
	return (0);
}
