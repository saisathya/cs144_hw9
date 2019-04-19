#include "PlayerModel.h"

PlayerModel::PlayerModel(){
    srand(time(NULL));
}

PlayerModel::Moves PlayerModel::makeMove(){
    int num = rand() % 3 + 1;
    if (num == 1)
        return PlayerModel::Moves::ROCK;
    else if(num == 2)
        return PlayerModel::Moves::PAPER;
    else return PlayerModel::Moves::SCISSORS;
}

PlayerModel::Moves HumanModel::makeMove(){
    return PlayerModel::makeMove();
}

PlayerModel::Moves ComputerModel::makeMove(){
    return PlayerModel::makeMove();
}
