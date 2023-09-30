//
//  RAM.hpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//

//#ifndef RAM_hpp
//#define RAM_hpp

//#include <stdio.h>
//#include <iostream>
#pragma once

/*#endif*/ /* RAM_hpp */
class RAM
{
    char* model;
    char* company;
    double price;
public:
    RAM();
    ~RAM();
    RAM(const char* m);
    RAM(const char* m, const char* c);
    RAM(const char* m,const char* c, double p);
    
    void Print();
    char* GetModel() const;
    char* GetCompany() const;
    double GetPrice()const;

    void SetModel(const char*);
    void SetCompany(const char*);
    void SetPrice(double);
    RAM(const RAM& b);
};
