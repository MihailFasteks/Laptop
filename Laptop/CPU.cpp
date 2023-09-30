//
//  CPU.cpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//
#include <iostream>
#include "CPU.hpp"
using namespace std;
CPU::CPU()
{
    model=nullptr;
    company=nullptr;
    price=0;
}
CPU::~CPU()
{
    delete[]model;
    delete[]company;
}
CPU::CPU(const char* m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
}
CPU::CPU(const char* m, const char* c):CPU(m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    company=new char[strlen(c)+1];
    strcpy(company, c);
}
CPU::CPU(const char* m, const char* c, double p):CPU(m, c)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    company=new char[strlen(c)+1];
    strcpy(company, c);
    price=p;
}
void CPU::Print()
{
    cout<<"Model: "<<model<<endl;
    cout<<"Company: "<<company<<endl;
    cout<<"Price: "<<price<<endl;
}

char* CPU::GetModel()const
{
    return model;
}
char* CPU::GetCompany()const
{
    return company;
}
double CPU::GetPrice()
{
    return price;
}

void CPU::SetModel(const char* m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
}
void CPU::SetCompany(const char* c)
{
    company=new char[strlen(c)+1];
    strcpy(company, c);
}
void CPU::SetPrice(double p)
{
    price =p;
}

