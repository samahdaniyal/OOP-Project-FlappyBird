#include "gamewon.hpp"
#include <iostream>

gamewon::gamewon()
{
    srcRect = {70, 420, 191, 34}; //srcRect for to display game won when player wins
}

void gamewon::fly()
{
    moverRect = {350,150,250,250};
}

gamewon::~gamewon(){} //default destructor