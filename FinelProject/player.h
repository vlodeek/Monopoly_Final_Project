#ifndef PLAYER_H
#define PLAYER_H
#include"Header.h"

class Player
{
private:
    QString password;
    QString email;
    int playedgames;
    int dicerolled;
    long int distancetraveled;

protected:
    QString id;
    QString name;
public:
    Player();



};

#endif // PLAYER_H
