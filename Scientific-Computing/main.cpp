//
//  main.cpp
//  Scientific-Computing
//
//  Created by Abdoullatif.O pro  on 06/02/2025.
//

#include <iostream>
#include <bitset>
#include "System.hpp"
#define N 400

#define a 1.
#define b 111.11
#define c 1.2121



using namespace std;

double suite(int n){
    if(n==0){return 1./3.;}
    else{return (1.-2.*suite(n-1));}
}

double r1(double x,double y,double z){
    double R= (-y+sqrt(pow(y,2)-4*x*z))/(2*x);
    return R;
}

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
    
    cout <<"Exercice 3 : suite à n=0 : " << suite(0) << endl;
    cout << endl;
    for(int i=0;i<N;i++){
        cout << "suite à i=" << i << " : " << suite(i) << "  ";
        
    }
    cout << endl;
    cout << "Exercice 5 : calcul de la racine : " << r1(a,b,c) << endl;
    return 0;
}
