#include "Soldier.cpp"
#include"entity.hpp"

Soldier::Soldier(std::string name) : Entity(name, 100) {}

void Soldier::Attack(Entity& target) {
    target.takeDamage(*this, 15);
    std::cout << getName() << " attack " << target.getName() << " with a special attack!" << std::endl;
}
