#pragma once
#ifndef WAGER_H
#define WAGER_H

#include <iostream>
#include <string>

class Wager {
public:
	Wager(int StartBalance, int MinimumWager);
	int GetBalance();
	void SetStartBalance(int amount);
	void AddToBalance(int amount);
	void AskForWager();
	bool RanOutOfCash();
	bool DidIQuit();
	int BetAmount();

private:
	int iBalance;
	int iWager;
	int iMinimumWager;
	bool bQuitGame;

};

#endif // !WAGER_H
