# cpp_03
Traps

To create a derived robot. It is named ScavTrap and will inherit the constructors and destructor from Clap- Trap. However, its constructors, destructor, and attack() will print different messages. After all, ClapTraps are aware of their individuality.
When a ScavTrap is created, the program starts by constructing a ClapTrap. Destruc- tion occurs in reverse order. why?

ScavTrap will use the attributes of ClapTrap (update ClapTrap accordingly) and is initialized with:
• Name, which is passed as a parameter to the constructor 
• Hit points (100), representing the health of the ClapTrap 
• Energy points (50)
• Attack damage (20)
ScavTrap will also have its own special ability:
    void guardGate();
This member function will display a message indicating that ScavTrap is now in Gate keeper mode.
