//
//  GPU.hpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//

//#ifndef GPU_hpp
//#define GPU_hpp


#pragma once

//#endif /* GPU_hpp */
class GPU
{
    char* model;
    char* company;
    double price;
    
public:
    GPU();
    ~GPU();
    GPU(const char* m);
    GPU(const char* m, const char* c);
    GPU(const char* m, const char* c, double p);
    
    void Print();
    char* GetModel() const;
    char* GetCompany() const;
    double GetPrice()const;

    void SetModel(const char*);
    void SetCompany(const char*);
    void SetPrice(double);
    GPU(const GPU& b);
};
