#include "Character.h"

character::character() {
	hp = 50;
	atk = 5;
}

character::character(int h, int a) {
	hp = h;
	atk = a;
}

character::character(const character& hero) {
	hp = hero.hp;
	atk = hero.atk;
}

void character :: battleCry() {
	cout << "..." << endl;
}