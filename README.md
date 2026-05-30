# cpp_03
Traps

A class called ClapTrap have the following private attributes initialized to the values specified in brackets:
• Name, which is passed as a parameter to the constructor • Hit points (10), representing the health of the ClapTrap • Energy points (10)
• Attack damage (0)
It has the following public member functions so that the ClapTrap behaves more realistically:
• void attack(const std::string& target); • void takeDamage(unsigned int amount);
• void beRepaired(unsigned int amount);
When ClapTrap attacks, it causes its target to lose <attack damage> hit points. 
When ClapTrap repairs itself, it regains <amount> hit points. 
Attacking and repairing each cost 1 energy point. Of course, ClapTrap can’t do anything if it has no hit points or energy points left.
The ClapTrap instances should not interact directly with one another, and the parameters will not refer to another instance of ClapTrap...