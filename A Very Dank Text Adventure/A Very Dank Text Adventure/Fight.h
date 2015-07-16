#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>
#include "User.h"

class Fight{

public:
	User player;
	Enemy enemy;
	Fight(){

	}
	Fight(User& a, Enemy& b){
		a = player;
		b = enemy;
	}
	int startFight(){
		cout << "You have engaged " + enemy.name + "!\n";
		while (player.isDead() != true && enemy.isDead() != true){
			cout << "Your HP: " + to_string(player.HP) + " Opponent HP: " + to_string(enemy.HP) << endl;
			if (player.getSpeed() < enemy.getSpeed()){
				enemy.chooseAttack().doAttack(enemy, player);
				cout << "Your HP: " + to_string(player.HP) + " Opponent HP: " + to_string(enemy.HP) << endl;

			}
			player.chooseAttack().doAttack(player, enemy);
			if (player.getSpeed() < enemy.getSpeed()) continue;
			enemy.chooseAttack().doAttack(enemy, player);
		}
		if (player.isDead()) return 0;
		return 1;
	}

};

