#ifndef PLAYERMODEL_H_INCLUDED
#define PLAYERMODEL_H_INCLUDED

#include <iostream>
using namespace std;

class PlayerModel{
public:
    PlayerModel();
    ~PlayerModel();

    enum Moves {ROCK, PAPER, SCISSORS};

    virtual Moves makeMove();
};

class HumanModel : public PlayerModel{
    HumanModel();
    ~HumanModel();

    virtual Moves makeMove();
};

class ComputerModel : public PlayerModel{
    ComputerModel();
    ~ComputerModel();

    virtual Moves makeMove();
};
#endif // PLAYERMODEL_H_INCLUDED
