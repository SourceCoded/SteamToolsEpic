#include <string>
#include "Entity.h"
#include <time.h>

using namespace std;
class Attack{
	friend class Entity;
	int damageMin; //MIN SMALLER THAN MAX.
	int damageMax;
	int dodgeChance; //100 is impossible, 0 is definate. For each point of player DEX,  dodge chance goes down by 4.
	string flavor; //Flavor!
	string name; //Attack name
public:


	Attack(){

	}
	Attack(int a, int b, int c, string e, string d){
		damageMin = a;
		damageMax = b;
		dodgeChance = c;
		name = e;
		flavor = d;
	}

	void doAttack(Entity& attacker, Entity& defender){
		int damage = 0;
		int spread = damageMax - damageMin;
		srand(time(NULL));
		int random = rand() % (spread + 1); //Determines the damage from min and max
		damage = (damageMin + random) * ((attacker.STR / 40) + 1); //Damage multiplyer
		int finalEvade = dodgeChance - (defender.DEX * 0.3);
		random = rand() % 101; //Random between 0 and 100
		cout << attacker.name + " uses " + name + "!\n";
		if (random > finalEvade){ // If random is greater. The lower the evade, the higher chance of random being higher.
			cout << "The attack missed!\n";
		}
		else{
			cout << flavor << endl;
			defender.CHP -= damage - (defender.DEF * 0.8);
			cout << "You took " + to_string(damage - (defender.DEF * 0.8)) + "damage!\n";
		}
	}
	string getName(){
		return name;
	}
};