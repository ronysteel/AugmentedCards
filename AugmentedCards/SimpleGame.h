#pragma once

#include <iostream>
#include <vector>
#include "Card.h"
#include "CardGame.h"

using namespace std;

class SimpleGame : public CardGame
{
private:
	virtual int getCardValue(Card card);

public:
	SimpleGame();
	~SimpleGame();
	virtual int evaluateGame(vector<Card> move);
};
