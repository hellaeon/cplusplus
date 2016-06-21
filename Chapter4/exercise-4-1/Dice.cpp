#include "Dice.h"

Dice::Dice()
{
	// seed random
	srand(time(0));
}

void Dice::Roll(int *die1, int *die2)
{
	*die1 = rand() % 6 + 1;
	*die2 = rand() % 6 + 1;
}

