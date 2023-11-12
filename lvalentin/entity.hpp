#include <iostream>
#include <string>
#include <cstring>
using namespace std;
using String = std::string;

class  Entity
{
private:
	String Name;
	uint16_t MaxHealth;
	bool IsDead;
	uint16_t Health;



public:
	Entity() : Name("Unkown") {}
	Entity(const String& name, uint16_t maxHealth) :
		Name(name), MaxHealth(maxHealth), Health(maxHealth), IsDead(false) {}

	bool IsEntityDead() {
		return IsDead;
	}
	string getName() const {
		return Name;
	}

	void takeDamage(Entity damager, uint16_t damages) {
		if (!IsDead) {
			Health -= damages;
			cout << "why did you touch me? " << Name << "( you take " << damages << " damage from " << damager.getName() << " )" << endl;
			if (Health <= 0) {
				Health = 0;
				IsDead = true;
			}
		}
	}

	void attack(Entity& target) {
		if (!IsDead && !target.IsDead)
			target.takeDamage(*this, 10);
		cout << Name << " attack" << target.Name << endl;
	}

	void Heal(Entity& healer, uint16_t hp) {
		if (!IsDead && !healer.IsDead) {
			if (healer.Health >= hp) {
				Health += hp;
				healer.Health -= hp;
				cout << healer.Name << " heal" << Name << " from " << hp << endl;
			}
			else {
				cout << healer.Name << " can't heal " << Name << endl;
			}
		}
	}


};