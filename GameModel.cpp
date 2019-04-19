#include "GameModel.h"

GameModel::GameModel(){
    player1 = new HumanModel();
    player2 = new ComputerModel();
}

GameModel::~GameModel(){
    delete player1;
    delete player2;
}

GameModel::GameOutcome GameModel::executeRound(){
    PlayerModel::Moves playerOneMove = player1.makeMove();
    PlayerModel::Moves playerTwoMove = player2.makeMove();

    GameModel::GameOutcome outcome = getOutcome(playerOneMove, playerTwoMove);

    if(outcome == GameModel::GameOutcome::WIN)
        win++;
    else if(outcome == GameModel::GameOutcome::LOSE)
        loss++;
    else ties++;

    return outcome;
}

GameModel::GameOutcome GameModel::getOutcome(PlayerModel::Moves p1Move, PlayerModel::Moves p2Move){
    if(p1Move == p2Move) return GameModel::GameOutcome::DRAW;

    else if((p1Move == PlayerModel::Moves::ROCK && p2Move == PlayerModel::Moves::PAPER) ||
            (p1Move == PlayerModel::Moves::PAPER && p2Move == PlayerModel::Moves::SCISSORS) ||
            (p1Move == PlayerModel::Moves::SCISSORS && p2Move == PlayerModel::Moves::ROCK)
            { return GameModel::GameOutcome::LOSE; }

    return GameModel::GameOutcome::WIN;
}


