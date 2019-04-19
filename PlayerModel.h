#ifndef PLAYERMODEL_H_INCLUDED
#define PLAYERMODEL_H_INCLUDED

#include <iostream>
#include <vector>
using namespace std;

class PlayerModel{
public:
    PlayerModel();
    ~PlayerModel();

    enum Moves {ROCK, PAPER, SCISSORS};

    virtual Moves makeMove();
};

class HumanModel : public PlayerModel{
public:
    HumanModel();
    ~HumanModel();

    virtual Moves makeMove();
};

class ComputerModel : public PlayerModel{
public:
    ComputerModel();
    ~ComputerModel();

    virtual Moves makeMove();
private:
    int sequenceLength;
    vector<Moves> humanSequence;
};
#endif // PLAYERMODEL_H_INCLUDED
