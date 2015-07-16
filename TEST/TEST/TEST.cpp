#include <iostream>
#include "DogALog.h"
#include <string>
#include <Windows.h>
#include "utf8.h"

int main(){
	string name;
	string engage;
	int answerChoice;
	bool isEngage = false;
	bool trueName = false;
	cout << "DOG A LOG 3MILLION A TRON\n";
	cout << "ENTER DOG A LOG NAME\n";
	while (trueName == false){
		getline(cin, name);
		if (name != "Gerald B. Walsherburger the third, son of Howard H. Walsherburger and prime dog a log 3million"){  //Gerald B. Walsherburger the third, son of Howard H. Walsherburger and prime dog a log 3million
			cout << "ERROR, NOT TRUE DOG A LOG NAME. TRY AGAIN. ERROR CODE 808: NAME NOT DANK ENOUGH\n";
		}
		else{
			trueName = true;
			
		}
	}
	dogALog logADog(name);
	cout << "GOOD NAME CHOICE\n";
	cout << "ARE YOU PREPARED TO ENGAGE MAX DOG\n";

	while (isEngage == false){

		getline(cin, engage);

		if (engage == "Yes"){
			logADog.engageMaxDog();
		}

		else if (engage == "No"){
			answerChoice = rand() % 5;
			switch (answerChoice){
				case 0:
					cout << "ARE YOU A MAN OR A MOUSE?\n";
					break;
				case 1:
					cout << "BELIEVE IN YOUR DREAMS!\n";
					break;
				case 2:
					cout << "WRONG ANSWER!\n";
					break;
				case 3:
					cout << "FO DRIZZLE? DO IT!\n";
					break;
				case 4:
					cout << "YOU CAN CHANGE THE WORLD IF YOU ENGAGE THE DOG A LOG.\n";
					break;
			}
		}
		else{
			cout << "ENGLISH\nDO YOU SPEAK IT\n";
		}
		
	}
	return 0;

}