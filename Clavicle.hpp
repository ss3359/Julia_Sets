//
//  Clavicle.hpp
//  SKELETON
//
//  Created by Owner on 12/29/24.
//

#ifndef Clavicle_hpp
#define Clavicle_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <thread>
#include <random>
#include <iomanip>

using namespace std;


class COMPLEX{
    /*
     We are going to program the Mandlebrot and Julia Sets in C++. We may need some software to achieve this.
*/
private:
    float Real;
    float Imaginary;
    
    
public:
    COMPLEX(float a, float b){
        Real=a; Imaginary=b;
        
    }
    float GetReal(){return Real;}
    float GetImaginary(){return Imaginary;}
    
    float length();
    COMPLEX T(COMPLEX z); //This will be the function to use when describing the Madlebrot Set or other Julia Sets.
    
};

COMPLEX T(COMPLEX z); //This will be the function to use when describing the Madlebrot Set or other Julia Sets.

void PrintNumber(COMPLEX z); //Print The Complex Number


//Print Out The Complex Numbers with their corresponding lengths to observe z_n=T(z_(n-1)) is a bounded sequence or not.

void PleasePrintResults(COMPLEX z); 

//Operator Functions For COMPLEX Class.
COMPLEX operator+(COMPLEX z1, COMPLEX z2);
COMPLEX operator-(COMPLEX z1, COMPLEX z2);
COMPLEX operator*(COMPLEX z1, COMPLEX z2);
COMPLEX operator/(COMPLEX z1, COMPLEX z2);



#endif /* Clavicle_hpp */
