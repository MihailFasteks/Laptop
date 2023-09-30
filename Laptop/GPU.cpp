//
//  GPU.cpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//
#include <iostream>
#include "GPU.hpp"
using namespace std;
GPU::GPU()
{
    model=nullptr;
    company=nullptr;
    price=0;
}
GPU::~GPU()
{
    delete[]model;
    delete[]company;
}
GPU::GPU(const char* m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
}
GPU::GPU(const char* m, const char* c):GPU(m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    company=new char[strlen(c)+1];
    strcpy(company, c);
}
GPU::GPU(const char* m, const char* c, double p):GPU(m, c)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    company=new char[strlen(c)+1];
    strcpy(company, c);
    price=p;
}

void GPU::Print()
{
    cout<<"Model: "<<model<<endl;
    cout<<"Company: "<<company<<endl;
    cout<<"Price: "<<price<<endl;
}

char* GPU::GetModel() const
{
    return model;
}
char* GPU::GetCompany() const
{
    return company;
}
double GPU::GetPrice()
{
    return price;
}

void GPU::SetModel(const char* m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
}
void GPU::SetCompany(const char* c)
{
    company=new char[strlen(c)+1];
    strcpy(company, c);
}
void GPU::SetPrice(double p)
{
    price =p;
}
