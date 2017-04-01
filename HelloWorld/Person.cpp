//
//  Person.cpp
//  HelloWorld
//
//  Created by fancy on 15/6/8.
//  Copyright (c) 2015年 fancy. All rights reserved.
//

#include "Person.h"
Time::Time()
{hours=0;
    minutes=0;}

Time::Time(int h,int m)
{hours=h;
    minutes=m;
}

void Time::AddMin(int m)
{this->minutes+=m;
    if (minutes>59)
    {minutes=minutes% 60;
        AddHr(1);}
        
}

void Time::AddHr(int h)
{hours+=h;}

Time Time::Sum(const Time &t )
{ AddMin(t.minutes);
    AddHr(t.hours);
    return *this;
}
void Time::Show() const
{cout<<hours<<":"<<minutes;
}
Time operator*(double m,const Time &t)
{Time result;
    
    result.minutes=t.hours*m;
    return result;

}

