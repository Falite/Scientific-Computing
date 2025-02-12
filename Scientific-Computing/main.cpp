//
//  main.cpp
//  Scientific-Computing
//
//  Created by Abdoullatif.O pro  on 06/02/2025.
//

#include <iostream>
#include <bitset>
#include "System.hpp"
#define N 100
#define M 1000

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

double cosenzero(double x){
    return 1-cos(x)/2.;
}

int main(int argc, const char * argv[]) {
    int nombre1(1984), nombre2(2018);
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
    cout << "Exercice 1 : système de base 10,3" << endl;
    int x(10200), y(341), z(9800);
    System X(x), Y(y), Z(z);
    cout << " X= " << X << ", Y= " << Y << ", Z= " << Z << endl;
    cout << " (X+Y)+Z= " << (X+Y)+Z << endl;
    
    cout << " X+(Y+Z)= " << X+(Y+Z) << endl;
    
    cout << " X+(Y-Z)= " << X+(Y-Z) << endl;
    
    cout << " (X-Z)+Y= " << (X-Z)+Y << endl;
    
    cout << endl;
    
    cout << "Exercice 2 : on remplace cos par son développement limite en 0 :" << endl;
    double Tests[4]={0.1, 0.05, 0.02, 0.01};
    for(int i=0;i<5;i++){
        cout << "x=" << Tests[i] << "   1-cos(x)=" << 1.-cos(Tests[i]) << "   1-x^2/2=" << 1.-cosenzero(Tests[i]) << endl;
    }
    cout << endl;
    
    
    cout << "Exercice 3 : suite à n=0 : " << suite(0) << endl;
    cout << endl;
    
    for(int i=0;i<N;i++){
        cout << "suite à i=" << i << " : " << suite(i) << "  ";
        
    }
     
    cout << endl;
    cout << endl;
    cout << "Exercice 4 : " << endl;
    System Somme(0.);
    
    for(int i(1);i<=M;i++){
        System terme(1./i);
        Somme=Somme+terme;
        cout << "i=" << i << "  Somme :" << Somme << endl;
        cout << "terme : " << terme << endl;
    }
    
    cout << endl;
    
    System R1(r1(a,b,c));
    cout << "Exercice 5 : calcul de la racine : " << r1(a,b,c) << endl;
    cout << "Conversion en system : " << R1 << endl;
    
    
    return 0;
}
