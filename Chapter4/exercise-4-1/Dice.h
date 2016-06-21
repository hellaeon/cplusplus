#pragma once
#ifndef DICE_H
#define DICE_H
#include <cstdlib>
#include <ctime>

class Dice {
public:
	Dice();
	void Roll(int *die1, int *die2);
};
#endif
