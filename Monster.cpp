#include "Player.h"
#include "Monster.h"

void Monster::attack(Player& target) {
	cout << "Monster Attack!" << endl;
	target.hp = target.hp - atk;
}

void Monster::battleCry() {
	cout << "howl!!!" << endl;
}