//
//  System.cpp
//  Scientific-Computing
//
//  Created by Abdoullatif.O pro  on 06/02/2025.
//

#include "System.hpp"

System::System(int n):nombre(n){
    calculExposantMantisse();
}

System::System(System &X){
    nombre=X.nombre;
    exposant=X.exposant;
    mantisse=X.mantisse;
}

System::~System(){}

System& System::operator=(System const& X){
    if(this!= &X){
        this->nombre=X.nombre;
        this->exposant=X.exposant;
        this->mantisse=X.mantisse;
    }
    return *this;
}

System operator+(System const& X, System const& Y){
    double z;
    //v2
    if(X.exposant > Y.exposant){
        z=X.mantisse + Y.mantisse/std::pow(10,X.exposant-Y.exposant);
        z*=pow(10,X.exposant);
    }
    else{z=X.mantisse/std::pow(10,Y.exposant-X.exposant)+Y.mantisse;
        z*=pow(10,Y.exposant);}
    System Z(z);
    return Z;
    //v1
    /*
    if(X.exposant > Y.exposant){
        Z.exposant=X.exposant;
        Z.mantisse=X.mantisse + Y.mantisse/std::pow(10,X.exposant-Y.exposant);
    }
    else{
        Z.exposant=Y.exposant;
        Z.mantisse=X.mantisse/std::pow(10,Y.exposant-X.exposant)+Y.mantisse;
    }
    //normalisation
    while(Z.mantisse>=10){
        Z.mantisse/=10;
        Z.exposant++;
    }
    Z.nombre=Z.mantisse*std::pow(10,Z.exposant);
    return Z;
     */
}

System operator-(System const& X, System const& Y){
    double z;
    if(X.exposant > Y.exposant){
        z=X.mantisse - Y.mantisse/std::pow(10,X.exposant-Y.exposant);
        z*=pow(10,X.exposant);
    }
    else{z=X.mantisse/std::pow(10,Y.exposant-X.exposant) - Y.mantisse;
        z*=pow(10,Y.exposant);}
    System Z(z);
    return Z;
}


std::ostream& operator<<(std::ostream &flux, System const& X){
    flux << X.mantisse << "*10^" << X.exposant;
    return flux;
}
