/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 07:17:46 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/30 09:51:20 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

FlagTrap :: FlagTrap()
{
	_name = "default";
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std:cout << " default constructor called " << _name << std::cout;
}

FLagTrap :: FlagTrap(std::string _name)
{
	_name = _name;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std:cout << " parametrized constructor called " << _name << std::cout;
}

FlagTrap :: FlagTrap(const FlagTrap &other) : ClapTrap(&other)
{
	std:cout << " copy constructor called " << _name << std::cout;
}

FlagTrap FlagTrap &operator=(const FlagTrap &other)
{
	if (this != other)
	{
		_hitPoint = other.hitPoint;
		_energyPoint = other.energyPoint;
		_attackDamage = other.attackDamage;
	}
	std:cout << " copy assignment operator called " << _name << std::cout;
	return (*this);
}

FlagTrap 
