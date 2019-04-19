#ifndef GAMEMODEL_H_INCLUDED
#define GAMEMODEL_H_INCLUDED

#include <iostream>
#include "PlayerModel.h"
#include "PlayerModel.h"
using namespace std;

class GameModel{
public:
    GameModel();

    ~GameModel();

    enum GameOutcome {WIN, LOSE, DRAW};

    GameOutcome executeRound();
private:
    PlayerModel *player1, *player2;
    int totalRounds = 20, currentRound = 0, wins = 0, ties = 0, loss = 0;

    GameOutcome getOutcome(PlayerModel::Moves p1Move, PlayerModel::Moves p2Move);
};

#endif // GAMEMODEL_H_INCLUDED
