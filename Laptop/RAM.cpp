//
//  RAM.cpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//
#include <iostream>
#include "RAM.hpp"
using namespace std;
RAM::RAM()
{
    model=nullptr;
    company=nullptr;
    price=0;
}
RAM::~RAM()
{
    delete[]model;
    delete[]company;
}
RAM::RAM(const char* m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
}
RAM::RAM(const char* m, const char* c):RAM(m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    company=new char[strlen(c)+1];
    strcpy(company, c);
}
RAM::RAM(const char* m, const char* c, double p):RAM(m, c)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    company=new char[strlen(c)+1];
    strcpy(company, c);
    price=p;
}

void RAM::Print()
{
    cout<<"Model: "<<model<<endl;
    cout<<"Company: "<<company<<endl;
    cout<<"Price: "<<price<<endl;
}
char* RAM::GetModel()const
{
    return model;
}
char* RAM::GetCompany()const
{
    return company;
}
double RAM::GetPrice()const
{
    return price;
}

void RAM::SetModel(const char* m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
}
void RAM::SetCompany(const char* c)
{
    company=new char[strlen(c)+1];
    strcpy(company, c);
}
void RAM::SetPrice(double p)
{
    price =p;
}
RAM::RAM(const RAM& b)
{
    model=new char[strlen(b.model)+1];
    strcpy(model, b.model);
    company=new char[strlen(b.company)+1];
    strcpy(company, b.company);
    price=b.price;;
}
