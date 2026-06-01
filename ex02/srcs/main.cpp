/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 07:31:45 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/31 16:50:09 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void testAttack(FragTrap &frag, ScavTrap &scav, ClapTrap &clap)
{
	std::cout << "\n-- Attack action --\n";
	frag.attack("an witch");
	scav.attack("intruder");
	clap.attack("target");
}

void testTakeDamage(FragTrap &frag, ScavTrap &scav, ClapTrap &clap)
{
	std::cout << "\n-- Take damage action --\n";
	frag.takeDamage(20);
	scav.takeDamage(15);
	clap.takeDamage(5);
}

void testRepair(FragTrap &frag, ScavTrap &scav, ClapTrap &clap)
{
	std::cout << "\n-- Repair action --\n";
	frag.beRepaired(10);
	scav.beRepaired(8);
	clap.beRepaired(3);
}

void testSpecialActions(FragTrap &frag, ScavTrap &scav)
{
	std::cout << "\n-- Special actions --\n";
	frag.highFivesGuys();
	scav.guardGate();
}

int main()
{
	std::cout << "=== FragTrap/ScavTrap/ClapTrap comprehensive tester ===\n\n";
	{
		std::cout << "-- Construction chaining (observe order) --\n";
		FragTrap frag("Ron");
		ScavTrap scav("Harry");
		ClapTrap clap("Hermoine");
		testAttack(frag, scav, clap);
		testTakeDamage(frag, scav, clap);
		testRepair(frag, scav, clap);
		testSpecialActions(frag, scav);
		std::cout << "\n-- Copy & assignment --\n";
		std::cout << "\nFragTrap copy & assignment:\n";
		FragTrap fragCopy(frag);
		FragTrap fragAssigned;
		fragAssigned = frag;
		std::cout << "\nScavTrap copy & assignment:\n";
		ScavTrap scavCopy(scav);
		ScavTrap scavAssigned;
		scavAssigned = scav;
		std::cout << "\nClapTrap copy & assignment:\n";
		ClapTrap clapCopy(clap);
		ClapTrap clapAssigned;
		clapAssigned = clap;
		std::cout << "\n-- Energy exhaustion test (will run many attacks) --\n";
		for (int i = 0; i < 105; ++i)
			frag.attack("training dummy");
		std::cout << "\n-- Death and repair prevention --\n";
		fragCopy.takeDamage(200);
		fragCopy.beRepaired(10);
		std::cout << "\n-- End of local scope: destructors for frag, scav, clap will run (check order) --\n";
	}
	std::cout << "\n=== Tester finished ===\n";
	return 0;
}

