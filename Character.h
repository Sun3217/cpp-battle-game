#pragma once
#include<iostream>
using namespace std;

class character {
public:
	int hp;
	int atk;

	character();
	character(int h, int a);
	character(const character& hero);

	virtual void battleCry();
};
