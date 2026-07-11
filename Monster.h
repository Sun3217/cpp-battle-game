#pragma once
#include<iostream>
#include "Character.h"

class Player;
class Monster :public character {
public:
	Monster() :character(50, 5) {}
	Monster(int h, int a) :character(h, a){}

	void attack(Player& target);
	void battleCry()override;
};