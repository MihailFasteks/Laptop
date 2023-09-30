//
//  CPU.hpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//

//#ifndef CPU_hpp
//#define CPU_hpp


//#include <stdio.h>
//#include <iostream>
#pragma once
//using namespace std;
/*#endif*/ /* CPU_hpp */
class CPU
{
    char* model;
    char* company;
    double price;
public:
    CPU();
    ~CPU();
    CPU(const char* m);
    CPU(const char* m, const char* c);
    CPU(const char* m, const char* c, double p);
    void Print();
    
    
    char* GetModel()const ;
    char* GetCompany()const ;
    double GetPrice();

    void SetModel(const char*);
    void SetCompany(const char*);
    void SetPrice(double);
};
