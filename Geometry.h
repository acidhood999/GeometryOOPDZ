#pragma once

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class StaticGeom
{     
public:
    static int x;
    static int y;
    static int z;
    static int Count;
    static long long ploshad;

    static void Kvadrat(int x1)
    {
        x = x1;
        ploshad = x*x;
        Count++;
    }
    static void Pryamoygilnik(int x1, int y2)
    {
        x = x1;
        y = y2;
        ploshad = x*y;
        Count++;
    }
    static void Treygolnik(int x1, int y2,int z2)
    {
        x = x1;
        y = y2;
        z = z2;
        ploshad = (x*y*z)/2;
        Count++;
    }
    static void Romb(int x1, int y2)
    {
        x = x1;
        y = y2;
        ploshad = x * y;
        Count++;
    }
    static int getCount() { return Count; }
};
