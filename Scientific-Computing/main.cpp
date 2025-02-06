//
//  main.cpp
//  Scientific-Computing
//
//  Created by Abdoullatif.O pro  on 06/02/2025.
//

#include <iostream>
#include <bitset>
#include "System.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
    int nombre1(1984);
    int nombre2(2018);
    bitset<16> binaire1(nombre1);
    bitset<16> binaire2(nombre2);
    cout << nombre1 << " vaut " << binaire1 << " en binaire de 16 bits" << endl;
    cout << nombre2 << " vaut " << binaire2 << " en binaire de 16 bits " << endl;
    
    bitset<16> ET = binaire1 & binaire2;
    bitset<16> OU = binaire1 | binaire2;
    bitset<16> XOU = binaire1 ^ binaire2;
    cout << endl;
    cout << " ET : " << ET << endl;
    cout << " OU : " << OU << endl;
    cout << " XOU : " << XOU << endl;
    cout << endl;
    
    System X(10200);
    cout << X << endl;
    return 0;
}
