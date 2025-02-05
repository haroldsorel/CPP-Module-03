/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haroldsorel <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:35:45 by haroldsorel       #+#    #+#             */
/*   Updated: 2025/02/05 16:35:46 by haroldsorel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public :
        FragTrap(void);
	    FragTrap(std::string const &name);
	    FragTrap(FragTrap const &copy);
	    virtual ~FragTrap(void);

	    FragTrap	&operator=(FragTrap const &copy);

	    void	highFivesGuys(void);
};
