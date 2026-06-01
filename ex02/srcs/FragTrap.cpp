/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 14:15:28 by uvadakku          #+#    #+#             */
/*   Updated: 2026/06/01 15:32:27 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap parameterized constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << " FragTrap Copy constructor called for " << _name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << " FragTrap Copy assignment operator called for " << _name << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << " FragTrap destructor called for " << _name << std::endl;
}

void FragTrap::attack(const std::string &target) 
{
	if (_hitPoints == 0)
	{
		std::cout << "FragTrap " << _name << " cannot attack, no hit points left." << std::endl;
		return ;
	}
	
	if (_energyPoints == 0) 
	{
		std::cout << "FragTrap " << _name << " cannot attack, no energy left." << std::endl;
		return ;
	}
	
	--_energyPoints;
	std::cout << "FragTrap " << _name << " attacks " << target 
		<< ", causing " << _attackDamage << " points of damage!"
		<< " (EP left: " << _energyPoints << ")" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << " FragTrap " << _name 
	<< " requests a high five! " << std::endl;
} 
