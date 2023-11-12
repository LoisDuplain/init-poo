#include "entity.hpp"

class Soldier : public Entity {
public:
    Soldier(std::string name);

    void Attack(Entity& target);
};


