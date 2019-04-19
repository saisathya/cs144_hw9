#ifndef PLAYERMODEL_H_INCLUDED
#define PLAYERMODEL_H_INCLUDED

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

class PlayerModel{
public:
    PlayerModel();

    enum Moves {ROCK, PAPER, SCISSORS};

    virtual Moves makeMove();
};

class HumanModel : public PlayerModel{
public:
    HumanModel(): PlayerModel(){};

    virtual Moves makeMove();
};

class ComputerModel : public PlayerModel{
public:
    ComputerModel(): PlayerModel(){};

    virtual Moves makeMove();
private:
    int sequenceLength;
    vector<PlayerModel::Moves> humanSequence;
};
#endif // PLAYERMODEL_H_INCLUDED
