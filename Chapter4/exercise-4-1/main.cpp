/*
	Excercise 4.2 - 'Dice Roll'
	Will simulate a dice roll using both references and pointers
	Im trying to use Unreal Engine 4 coding standards
*/

#include <iostream>
#include <string>
#include "Wager.h"
#include "Dice.h"

int main()
{
	// starting variables
	int StartBalance = 50;
	int MinimumWager = 10;
	Dice Die;
	Wager Bet(StartBalance, MinimumWager);

	bool quit = false;

	// start game loop
	while (!quit)
	{
		int Cash = Bet.GetBalance();
		quit = Bet.RanOutOfCash();

		if ( quit )
			std::cout << "You ran out of cash!" << std::endl << std::endl;
		else
		{
			Bet.AskForWager();
			quit = Bet.DidIQuit();
			if (!quit)
			{
				int Wager = Bet.BetAmount();
		
				// check amount
				if (Wager < 10 || Wager > 100)
					std::cout << "Cannot bet below 10 or above 100..." << std::endl;
				else
				{
					// The whole idea of this excercise is to set values via pointers
					std::string Roll;
					std::cout << "Enter Roll Guess (2-12) or (Q)uit: ";
					std::cin >> Roll;
					int iRoll = atoi(Roll.c_str());

					// check roll guess
					if (iRoll < 2 || iRoll > 12)
						std::cout << "Guess must be between 2 or 12!" << std::endl;
					else
					{
						int iDie1 = 0;
						int iDie2 = 0;						
						Die.Roll(&iDie1,&iDie2);

						std::cout << std::endl << "The roll is : " << iDie1 << " & " << iDie2 << std::endl;

						if ( (iDie1+iDie2) == iRoll)
						{
							// show they won!
							std::cout << "You win " << Wager*iRoll << "!"<< std::endl;
							Bet.AddToBalance(Wager*iRoll);
						}
						else
						{
							// show they lost!
							std::cout << "You lose..." << std::endl;
							Bet.AddToBalance(-Wager);
						}
					}
				}
			}
		}
	}

	return 0;
}


