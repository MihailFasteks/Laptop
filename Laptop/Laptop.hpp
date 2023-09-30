//
//  Laptop.hpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//

//#ifndef Laptop_hpp
//#define Laptop_hpp

//#include <stdio.h>
//#include <iostream>
#pragma once
#include "GPU.hpp"
#include "RAM.hpp"
#include "SSD.hpp"
#include "CPU.hpp"
//using namespace std;
/*#endif*/ /* Laptop_hpp */

class Laptop
{
    char* model;
    char* company;
    double price;
    GPU gpu;
    RAM ram;
    SSD ssd;
    CPU cpu;
public:
    static unsigned int count;
    Laptop();
    Laptop(const char* m);
    Laptop(const char* m, const char* c);
    Laptop(const char* m, const char* c, double p);
    Laptop(const char* m, const char* c, const char* gpuModel, const char* gpuCompany, double gpuPrice, const char* ramModel, const char* ramCompany, double ramPrice, const char* ssdModel, const char* ssdCompany, double ssdPrice, const char* cpuModel, const char* cpuCompany, double cpuPrice);
    ~Laptop();
    char* GetModel()const ;
    char* GetCompany()const ;
    double GetPrice();

    void SetModel(const char*);
    void SetCompany(const char*);
    void SetPrice(double);
    
    void Print();
};
