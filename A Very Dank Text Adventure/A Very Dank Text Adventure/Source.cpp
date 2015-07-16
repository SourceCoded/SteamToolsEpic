#include <iostream>
#include <string>
#include <Windows.h>
#include "utf8.h"
#include "Enemy.h"
#include "Fight.h"
#include "User.h"
//#include "Entity.h"
//#include "Attack.h"

using namespace std;

int main(){
	bool keyPressed = false;
	User player();
	Anon haxer();
	bool isKill = false;
	cout << "A Very Dank Text Adventure. Press enter to continue\n";
	while (keyPressed == false){

		if (GetAsyncKeyState(VK_RETURN)){
			keyPressed = true;
		}

	}
	MessageBox(NULL, L"██████▓█████▓▓╬╬╬╬╬╬╬╬▓███▓╬╬╬╬╬╬╬▓╬╬▓████▓▓▓▓╬╬▓█████╬╬╬╬╬╬███▓╬╬╬╬╬╬╬╬╬╬╬╬╬█\n███▓▓▓▓╬╬╬╬╬╬▓██╬╬╬╬╬╬▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█\n████▓▓▓╬╬╬╬╬╬╬▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█\n███▓█▓███████▓▓███▓╬╬╬╬╬╬▓███████▓╬╬╬╬▓█\n████████████████▓█▓╬╬╬╬╬▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬█\n███▓▓▓▓▓▓▓▓▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█\n████▓▓▓▓▓▓▓▓▓▓▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█\n███▓█▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█\n█████▓▓▓▓▓▓▓▓█▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█\n█████▓▓▓▓▓▓▓██▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██\n█████▓▓▓▓▓████▓▓▓█▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██\n████▓█▓▓▓▓██▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬██\n████▓▓███▓▓▓▓▓▓▓██▓╬╬╬╬╬╬╬╬╬╬╬╬█▓╬▓╬╬▓██\n█████▓███▓▓▓▓▓▓▓▓████▓▓╬╬╬╬╬╬╬█▓╬╬╬╬╬▓██\n█████▓▓█▓███▓▓▓████╬▓█▓▓╬╬╬▓▓█▓╬╬╬╬╬╬███\n██████▓██▓███████▓╬╬╬▓▓╬▓▓██▓╬╬╬╬╬╬╬▓███\n███████▓██▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬████\n███████▓▓██▓▓▓▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓████\n████████▓▓▓█████▓▓╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬╬▓█████\n█████████▓▓▓█▓▓▓▓▓███▓╬╬╬╬╬╬╬╬╬╬╬▓██████\n██████████▓▓▓█▓▓▓▓▓██╬╬╬╬╬╬╬╬╬╬╬▓███████\n███████████▓▓█▓▓▓▓███▓╬╬╬╬╬╬╬╬╬▓████████\n██████████████▓▓▓███▓▓╬╬╬╬╬╬╬╬██████████\n███████████████▓▓▓██▓▓╬╬╬╬╬╬▓███████████\n Get gud scrub", L"a mEsSaGe fRoM aNoN", NULL);
	cout << "Anon sez you have to fight them.\n";
	Sleep(1500);
	cout << "You say no.\n";
	Sleep(1500);
	cout << "They insult your mother.\n";
	Sleep(1500);
	cout << "You must do it. ENGAGE!\n";
	Sleep(1500);
	//Fight firstFight(player(), haxer()); //this is what we had issues with before 
	//int winner = firstFight.startFight();

	return 0;

}