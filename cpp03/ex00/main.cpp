/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clorcery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:00:03 by clorcery          #+#    #+#             */
/*   Updated: 2023/02/10 18:14:45 by clorcery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Bob("Boby");
	ClapTrap Julie("Juju");

	Bob.attack(Julie.getName());
	Julie.takeDamage(Bob.getAttackDamage());
	Julie.beRepaired(5);

	return 0;
}