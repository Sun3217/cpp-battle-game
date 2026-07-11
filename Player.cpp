#include "Player.h"
#include "Monster.h"

void Player::attack(Monster& target) {
	cout << "Player Attack!" << endl;
	target.hp = target.hp - atk;
}

void Player::defence(Monster& attacker) {
	cout << "Player Defence!" << endl;
	hp = hp - attacker.atk / 2;
}

void Player::battleCry() {
	cout << "For justice!" << endl;
}