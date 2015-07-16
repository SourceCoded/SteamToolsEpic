#include <iostream>
#include <string>
#include "Entity.h"
#include "Attack.h"

using namespace std;

class Enemy : public Entity{

public: 
	string name;
	Enemy(){
	}
	Attack chooseAttack();
	
};

class Anon : public Enemy { //Guy fawkes mask
	
public:
	Anon(){
		Attack doss(10, 15, 70, "Doss", "The interwebs learn your secrets!");
		attackList.push_back(doss);
	}
	Attack chooseAttack(){
		return attackList[0];
		abort();
	}
	
	

};