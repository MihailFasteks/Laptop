//
//  Laptop.cpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//
#include <iostream>
#include "Laptop.hpp"
#include "GPU.hpp"
#include "RAM.hpp"
#include "SSD.hpp"
#include "CPU.hpp"
using namespace std;
unsigned int Laptop::count = 0U;
Laptop::Laptop()
{
    
}
Laptop::Laptop(const char* m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    count++;
}
Laptop::Laptop(const char* m, const char* c):Laptop(m)
{
    company=new char[strlen(c)+1];
    strcpy(model, c);
}
Laptop::Laptop(const char* m, const char* c, double p):Laptop(m, c)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    company=new char[strlen(c)+1];
    strcpy(model, c);
    price=p;
}
Laptop::Laptop(const char* m, const char* c, const char* gpuModel, const char* gpuCompany, double gpuPrice, const char* ramModel, const char* ramCompany, double ramPrice, const char* ssdModel, const char* ssdCompany, double ssdPrice, const char* cpuModel, const char* cpuCompany, double cpuPrice):gpu(gpuModel, gpuCompany, gpuPrice), ram(ramModel, ramCompany, ramPrice), ssd(ssdModel, ssdCompany, ssdPrice), cpu(cpuModel, cpuCompany, cpuPrice)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
    company=new char[strlen(c)+1];
    strcpy(company, c);
    price += cpuPrice += gpuPrice += ramPrice += ssdPrice;
    count++;
}
Laptop::~Laptop()
{
    delete[]model;
    delete[]company;
    count--;
}
void Laptop::Print()
{
    cout<<"Laptop model: "<<model<<endl;
    cout<<"Laptop company: "<<company<<endl;
    cout<<"Laptop price: "<<price<<endl;
    cout<<"CPU: "<<endl;
    cpu.Print();
    cout<<endl;
    cout<<"GPU: "<<endl;
    gpu.Print();
    cout<<endl;
    cout<<"RAM: "<<endl;
    ram.Print();
    cout<<endl;
    cout<<"SSD: "<<endl;
    ssd.Print();
    cout<<endl;
}
char* Laptop::GetModel()const
{
    return model;
}
char* Laptop::GetCompany()const
{
    return company;
}


void Laptop::SetModel(const char* m)
{
    model=new char[strlen(m)+1];
    strcpy(model, m);
}
void Laptop::SetCompany(const char* c)
{
    company=new char[strlen(c)+1];
    strcpy(company, c);
}
Laptop::Laptop(const Laptop& b):gpu(b.gpu.GetModel(), b.gpu.GetCompany(), b.gpu.GetPrice()), ram(b.ram.GetModel(), b.ram.GetCompany(), b.ram.GetPrice()), ssd(b.ssd.GetModel(), b.ssd.GetCompany(), b.ssd.GetPrice()), cpu(b.cpu.GetModel(), b.cpu.GetCompany(), b.cpu.GetPrice())
{
    model=new char[strlen(b.model)+1];
    strcpy(model, b.model);
    company=new char[strlen(b.company)+1];
    strcpy(company, b.company);
    price=b.price;
    
}


