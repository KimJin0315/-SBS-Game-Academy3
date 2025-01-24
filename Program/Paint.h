#pragma once
#include <iostream>

using namespace std;

class Paint
{
protected:
    float thickness;

public:
    Paint();

    virtual void Draw() = 0;

    ~Paint();
};


