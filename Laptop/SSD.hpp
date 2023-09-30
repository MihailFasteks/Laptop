//
//  SSD.hpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//

//#ifndef SSD_hpp
//#define SSD_hpp

//#include <stdio.h>
//#include <iostream>
#pragma once
//using namespace std;
//#endif /* SSD_hpp */
class SSD
{
    char* model;
    char* company;
    double price;
public:
    SSD();
    ~SSD();
    SSD(const char* m);
    SSD(const char* m, const char* c);
    SSD(const char* m, const char* c, double p);
    void Print();
    
    char* GetModel()const ;
    char* GetCompany()const ;
    double GetPrice();

    void SetModel(const char*);
    void SetCompany(const char*);
    void SetPrice(double);
};
