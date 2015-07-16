#include <iostream>
#include <string>
#include <Windows.h>
#include <sstream>
#include "Entity.h"

using namespace std;

class User : public Entity{
public:
	vector<Attack> attackList;
	User(){
		Attack memesAttack(40, 60, 100, "Memes", "You attack with dank memes!");
		attackList.push_back(memesAttack);
	}
	
	Attack chooseAttack(){
		string numberString;
		int num;
		istringstream iss(numberString);
		for (int i = 0; i < attackList.size(); i++){

			cout << to_string(i + 1) + ". " + attackList[i].getName() << endl;

		}
		while (true){
			getline(cin, numberString);
			if (!(iss >> num).fail()){
				if (0 <= num && num < attackList.size()) return attackList[num - 1];
			}
			cout << "Please enter a valid value\n";
		}
		return attackList[num - 1];
	}
};