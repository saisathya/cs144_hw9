#ifndef GAMEMODEL_H_INCLUDED
#define GAMEMODEL_H_INCLUDED

#include <iostream>
#include "PlayerModel.h"

class GameModel{
public:
    GameModel();

    ~GameModel();

    enum GameOutcome {WIN, LOSE, DRAW};

    void executeRound();
private:
    PlayerModel player1, player2;
    int totalRounds, currentRound, wins, ties, loss;
}

#endif // GAMEMODEL_H_INCLUDED
