#include "Wager.h"

Wager::Wager(int StartBalance, int MinimumWager)
{
	iBalance = StartBalance;
	iMinimumWager = MinimumWager;
	bQuitGame = false;
}

int Wager::GetBalance()
{
	return iBalance;
}

void Wager::SetStartBalance(int amount)
{
	iBalance = amount;
}

void Wager::AddToBalance(int amount)
{
	iBalance += amount;
}

void Wager::AskForWager()
{
	std::string Wager;
	std::cout << "Cash: $" << iBalance << std::endl;
	std::cout << "Enter Bet ($10-$100) or (Q)uit: ";
	std::cin >> Wager;

	// quit?
	if (Wager == "q" || Wager == "Q")
		bQuitGame = true;

	iWager = atoi(Wager.c_str());
}

bool Wager::RanOutOfCash()
{
	return iBalance < iMinimumWager ? true : false;
}

bool Wager::DidIQuit()
{
	return bQuitGame;
}

int Wager::BetAmount()
{
	return iWager;
}
