#include "tank.cpp"
#include"entity.hpp"

tank::tank(std::string name) : Entity(name, 200) {}

void Soldier::Attack(Entity& target) {
    
    std::cout << getName() << " attack " << target.getName() << " with a special attack!" << std::endl;
}
#pragma once
