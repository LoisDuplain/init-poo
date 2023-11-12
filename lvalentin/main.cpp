#include <iostream>
#include <string>
#include <cstring>
#include "entity.hpp"
#include "Soldier.hpp"
#include "tank.hpp"


using namespace std;
using String = std::string;



int main() {
    // Combat 2 Entity
    Entity entity1("Entity_1", 50);
    Entity entity2("Entity_2", 60);

    entity1.attack(entity2);

    // Combat 2 Soldat/Entity
    Soldier soldier1("Soldat_1");
    Soldier soldier2("Soldat_2");
    Entity entity3("Entity_3", 80);

    soldier1.Attack(entity3);
    soldier2.Attack(entity3);

    //Combat Tank/Entity
    Tank tank1("Tank_1");
    Entity entity4("Entity_4", 150);

    tank1.Attack(entity4);

    return 0;
}