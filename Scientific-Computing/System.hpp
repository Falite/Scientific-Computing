//
//  System.hpp
//  Scientific-Computing
//
//  Created by Abdoullatif.O pro  on 06/02/2025.
//

#ifndef System_hpp
#define System_hpp

#include <stdio.h>
#include <iostream>
#include <cmath>

class System{
protected:
    double mantisse;
    int exposant;
    int nombre;
    void calculExposantMantisse(){
        if(nombre==0){exposant=0;
            mantisse=0;
        }else{
            exposant= static_cast<int>(std::log10(std::abs(nombre)));
            mantisse = static_cast<double>(nombre)/std::pow(10,exposant);
            mantisse = std::round(mantisse * 1000)/1000;
            if(mantisse>=10){mantisse/=10;
                exposant++;}
        };
    }
    
public:
    System(int n=0);
    ~System();
    System(System &X);
    
    System& operator=(System const& X);
    friend System operator+(System const& X, System const& Y);
    friend System operator-(System const& X, System const& Y);
    friend std::ostream& operator<<(std::ostream &flux, System const& X);
};

#endif /* System_hpp */
