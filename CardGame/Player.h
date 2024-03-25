#pragma once

#ifndef PLAYER_H
#define PLAYER_H
#include "Action.h"
#include "Controler.h"
#include "Deck.h"


class Player {
public:
	Player();

	Controler GetControler() { return controler_; };
	std::string GetName() { return name_; };
	Deck GetHand() { return hand_; };

	void SetControler(Controler controler_);
	void SetName(std::string name_);
	void SetHand(Deck hand_);



private:
	std::string name_;
	Controler controler_;
	Deck hand_;


};

#endif  PLAYER_H