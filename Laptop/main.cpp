//
//  main.cpp
//  Laptop
//
//  Created by Michalis on 27.09.2023.
//

#include <iostream>
#include "Laptop.hpp"
//#include "GPU.hpp"
//#include "RAM.hpp"
//#include "SSD.hpp"
//#include "CPU.hpp"
using namespace std;

int main() {
    Laptop lap1("FR1085", "Lenovo", "Axpdrf1013", "Intel", 10000, "aPPoIUn4444", "Intel", 13000, "FFtYjj4675", "Intel", 5000, "YuYuJooo111", "Corax", 3000);
    lap1.Print();
    Laptop lap2=lap1;
    lap2.Print();
    
    

    return 0;
}
