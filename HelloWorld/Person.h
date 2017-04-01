//
//  Person.h
//  HelloWorld
//
//  Created by fancy on 15/6/8.
//  Copyright (c) 2015年 fancy. All rights reserved.
//

#ifndef __HelloWorld__Person__
#define __HelloWorld__Person__

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Time
{private: int hours;
    int minutes;
public:
    Time();
    Time(int h,int m=0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h=0,int m=0);
    Time Sum(const Time &t );
    void Show() const;
    friend Time operator*(double m,const Time &t);
};

#endif /* defined(__HelloWorld__Person__) */
