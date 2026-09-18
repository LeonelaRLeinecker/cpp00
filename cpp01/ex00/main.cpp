#include "Zombie.hpp"

int main()
{
    std::string name;
    std::getline(std::cin, name);
    Zombie zombie(name);
    zombie.announce();
    return 0;  
}