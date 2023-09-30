//
//  SSD.cpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//
#include <iostream>
#include "SSD.hpp"
using namespace std;
SSD::SSD()
{
    model=nullptr;
    company=nullptr;
    price=0;
}
SSD::~SSD()
{
    delete[]model;
    delete[]company;
}
SSD::SSD(const char* m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
}
SSD::SSD(const char* m, const char* c):SSD(m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    company=new char[strlen(c)+1];
    strcpy(company, c);
}
SSD::SSD(const char* m, const char* c, double p):SSD(m, c)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    company=new char[strlen(c)+1];
    strcpy(company, c);
    price=p;
}
void SSD::Print()
{
    cout<<"Model: "<<model<<endl;
    cout<<"Company: "<<company<<endl;
    cout<<"Price: "<<price<<endl;
}

char* SSD::GetModel()const
{
    return model;
}
char* SSD::GetCompany()const
{
    return company;
}
double SSD::GetPrice()const
{
    return price;
}

void SSD::SetModel(const char* m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
}
void SSD::SetCompany(const char* c)
{
    company=new char[strlen(c)+1];
    strcpy(company, c);
}
void SSD::SetPrice(double p)
{
    price =p;
}
SSD::SSD(const SSD& b)
{
    model=new char[strlen(b.model)+1];
    strcpy(model, b.model);
    company=new char[strlen(b.company)+1];
    strcpy(company, b.company);
    price=b.price;;
}
