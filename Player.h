#pragma once
#include<iostream>
#include "Character.h"
using namespace std;

class Monster;
class Player :public character {
public:
	Player(int h, int a) :character(h, a){}

	void attack(Monster& target);
	void defence(Monster& attacker);
	void battleCry()override;
};