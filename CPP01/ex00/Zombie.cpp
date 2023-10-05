#include "Zombie.hpp"

Zombie::Zombie(std::string _name) : name ( _name ) {}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": i'm dyyyyiiiiiing" << std::endl;
}
