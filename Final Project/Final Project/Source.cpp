//BACKPACK API KEY 55a6a988b98d88ac668b470a
//STEAM API KEY 579A82EE7123A3C52702BB22A24059D2


#include <iostream>
#include <string>
#include "rapidxml.hpp"
#include "rapidxml_print.hpp"
#include "rapidxml_utils.hpp"
#include "rapidxml_iterators.hpp"
#include <stdlib.h>
#include "Item.h";
#include <vector>




using namespace std;





int main(){
	string STEAM_API_KEY = "579A82EE7123A3C52702BB22A24059D2";
	string id;
	string username;
	vector<Item> userItemList;
	const char *id_char;
	cout << "Welcome to SteamTools! Please enter your steam username!\n";
	top:
	getline(cin, username);
	string url_str("http://api.steampowered.com/ISteamUser/ResolveVanityURL/v0001/?key=" + STEAM_API_KEY + "&vanityurl=" + username + "&format=xml");
	//cout << url_str << endl;
	//wstring wurl = s2ws(url_str);
	//LPCWSTR url = wurl.c_str();
	//URLDownloadToFile(NULL, url, L"C:\\Users\\student\\Desktop\\Nicky B\\Final Project\\Final Project\\playerid.xml", 0, NULL);
	rapidxml::file<> playerIdFile("C:\\Users\\student\\Desktop\\Nicky B\\Final Project\\Final Project\\playerid.xml");
	rapidxml::xml_document<> playerId;
	playerId.parse<0>(playerIdFile.data());
	rapidxml::xml_node<> * rootNode = playerId.first_node("response");
	rapidxml::xml_node<> * idNode = rootNode->first_node("steamid");
	if (idNode == 0){
		cout << "Please enter a valid steam username!\n";
		goto top;
	}
	id = idNode->value();
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	url_str = "http://api.steampowered.com/ISteamUser/GetPlayerSummaries/v0002/?key=" + STEAM_API_KEY + "&steamids=" + id + "&format=xml";
	//wurl = s2ws(url_str);
	//url = wurl.c_str();
	//URLDownloadToFile(NULL, url, L"C:\\Users\\student\\Desktop\\Nicky B\\Final Project\\Final Project\\playerdata.xml", 0, NULL);
	rapidxml::file<> playerDataFile("C:\\Users\\student\\Desktop\\Nicky B\\Final Project\\Final Project\\playerdata.xml");
	rapidxml::xml_document<> playerData;
	playerData.parse<0>(playerDataFile.data());
	rapidxml::xml_node<> * firstNode = playerData.first_node("response");
	rapidxml::xml_node<> * secondNode = firstNode->first_node("players");
	rootNode = secondNode->first_node("player");
	//print(cout, playerData, 0);
	rapidxml::xml_node<> * playerName = rootNode->first_node("personaname");
	string name = playerName->value();
	//print(cout, *playerName, 0);
	cout << "Welcome to SteamTools, " << name << "!\n";

	url_str = "http://api.steampowered.com/IEconItems_440/GetPlayerItems/v0001/?key=" + STEAM_API_KEY + "&steamid=" + id + "&format=xml";
	//wurl = s2ws(url_str);
	//url = wurl.c_str();
	//URLDownloadToFile(NULL, url, L"C:\\Users\\student\\Desktop\\Nicky B\\Final Project\\Final Project\\playeritems.xml", 0, NULL);
	rapidxml::file<> playerItemsFile("C:\\Users\\student\\Desktop\\Nicky B\\Final Project\\Final Project\\playeritems.xml");
	rapidxml::xml_document<> playerItems;
	playerItems.parse<0>(playerItemsFile.data());
	firstNode = playerItems.first_node("result");
	rootNode = firstNode->first_node("items");
	rapidxml::xml_node<> * itemIdNode;
	rapidxml::xml_node<> * itemQualityNode;
	rapidxml::xml_node<> * itemLevelNode;
	for (rapidxml::xml_node<> * itemNode = rootNode->first_node("item"); itemNode; itemNode = itemNode->next_sibling()){

		itemIdNode = itemNode->first_node("defindex");
		itemLevelNode = itemNode->first_node("level");
		itemQualityNode = itemNode->first_node("quality");
		userItemList.push_back(Item(itemIdNode->value(), itemQualityNode->value(), itemLevelNode->value()));
		cout << "Item found! Id of " << itemIdNode->value() << " with level " << itemLevelNode->value() << " and quality " << itemQualityNode->value() << endl;
	}
	cout << "done!\n";
	return 0;
}

