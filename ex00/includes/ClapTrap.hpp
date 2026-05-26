/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uvadakku <uvadakku@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 07:56:50 by uvadakku          #+#    #+#             */
/*   Updated: 2026/05/26 08:23:58 by uvadakku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

public:
	  ClapTrap();
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap& other);
			ClapTrap &operator=(const ClapTrap &other);
		 ~ClapTrap();
			
		void attack(const std::string& target); 
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		bool isOperational() const { return _hitPoints > 0; }
	};

#endif