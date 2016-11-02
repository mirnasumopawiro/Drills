//
//  4.cpp
//  Drills
//
//  Created by Mirna Sumopawiro on 11/2/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
using namespace std;

class MyPoint
{
private:
    int x;
    int y;
public:
    MyPoint()
    {
        x = 0;
        y = 0;
    }
    MyPoint (int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getX()
    {
        return x;
    }
    void setX (int x)
    {
        this->x = x;
    }
    int getY()
    {
        return y;
    }
    void setY(int y)
    {
        this->y = y;
    }
    int *getXY()
    {
        int *array = new int[2];
        array[0] = this->x;
        array[1] = this->y;
        return array;
    }
    void setXY(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    string toString()
    {
        return "(" + to_string(x) + "," + to_string(y) + ")\n";
    }
    double distance (int x, int y);//HELP
    double distance (MyPoint another);//HELP
    double distance();//HELP
};





int main ()
{
    MyPoint mp;
    mp.x = 5;
    mp.y = 8;
    
    int *array = mp.getXY();
    
    cout << array[0];
    cout << array[1];
}






































