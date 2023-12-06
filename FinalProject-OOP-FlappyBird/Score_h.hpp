#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"
#pragma once

class Score_h : public Unit
{
    private:
    int value = 3;

    public:
    void fly();
    void setter(int n);
    void operator +(int n); //operator overloading for ++
    Score_h ();
    ~Score_h ();
};