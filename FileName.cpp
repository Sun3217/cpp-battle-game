#include<iostream>
#include<memory>
#include<vector>
#include<map>
#include<string>
#include<fstream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
using namespace std;

int main() {
	Player hero(100,15);

	map<string, Monster>monsters;
	monsters["Slime"] = Monster(50, 5);
	monsters["Orc"] = Monster(100, 12);
	monsters["Drogen"] = Monster(200, 20);

	character nobody;
	character* ptr;

	ptr = &hero;
	ptr->battleCry();
	
	hero.attack(monsters["Drogen"]);
	cout << "Monster HP: " << monsters["Drogen"].hp << endl;

	int beforeHP = monsters["Drogen"].hp;
	hero.attack(monsters["Drogen"]);
	int afterHP = monsters["Drogen"].hp;

	ofstream log("battle_log.txt");
	log << "===Battle log===" << endl;
	log << "Before attack HP: " << beforeHP << endl;
	log << "After attack HP: " << afterHP << endl;
	log << "Damage: " << beforeHP - afterHP << endl;
	log.close();

	cout << "The log has been saved." << endl;

	cout << endl;
	cout << "PlayerHP: " << hero.hp  << endl;
	cout << "PlayerAtk: " << hero.atk << endl;

	cout << "npc: " << nobody.hp << "  " << nobody.atk << endl;

	return 0;
}