#include"entity.hpp"

class tank : public Entity {
public:
    tank(std::string name);

    void Attack(Entity& target);
};

