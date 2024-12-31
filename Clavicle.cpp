//
//  Clavicle.cpp
//  SKELETON
//
//  Created by Owner on 12/29/24.
//
#include <iostream>
#include <vector>
#include <cmath>
#include <thread>
#include <random>
#include <iomanip>
#include "Clavicle.hpp"
using namespace std;


//Print Out The Results Function

void PleasePrintResults(COMPLEX z){
    
    float length=z.length();
    int iter=100,n=1;
    
    while(n<=iter){
        PrintNumber(z);
        cout<<"Length: "<<length<<endl;
        if(length>2){
            break;
        }
        z=T(z);
        length=z.length();
        n++;
    }
    
}



//This is the function to define the Mandlebrot Set on. This will be the function to determine if the sequence of points are bounded or not, depending on the length of the complex number.

COMPLEX T(COMPLEX z){
    COMPLEX C(0,0); //The Madelbrot set is plotting out complex numbers to see whether the sequence z_n = T(z_(n-1)) is bounded or not. The function is defined as T(z) = z^2 + C, where C is a complex number.
    return (z*z)+C;
}


//The Length Of A Complex Number;
float COMPLEX::length(){
    return sqrt(Real*Real+Imaginary*Imaginary);
}




//Print The Complex Number On The Terminal Window
void PrintNumber(COMPLEX z){
    if(z.GetImaginary()<0){
        cout<<fixed<<setprecision(10)<<z.GetReal()<<z.GetImaginary()<<"i"<<endl;
    }
    else{
        cout<<fixed<<setprecision(10)<<z.GetReal()<<"+"<<z.GetImaginary()<<"i"<<endl;

    }
}

//Operators Of Complex Numbers
COMPLEX operator+(COMPLEX z1, COMPLEX z2){
    float RealResult=z1.GetReal()+z2.GetReal();
    float ImResult=z1.GetImaginary()+z2.GetImaginary();
    
    COMPLEX result(RealResult, ImResult);
    
    return result;
}
COMPLEX operator-(COMPLEX z1, COMPLEX z2){
    float RealResult=z1.GetReal()-z2.GetReal();
    float ImResult=z1.GetImaginary()-z2.GetImaginary();
    
    COMPLEX result(RealResult, ImResult);
    
    return result;
}

COMPLEX operator*(COMPLEX z1, COMPLEX z2){
    float RealResult=z1.GetReal()*z2.GetReal()-z1.GetImaginary()*z2.GetImaginary();
    float ImResult=z1.GetReal()*z2.GetImaginary()+z1.GetImaginary()*z2.GetReal();
    COMPLEX result(RealResult, ImResult);
    return result;
}

COMPLEX operator/(COMPLEX z1, COMPLEX z2){
    float abs_z2_squared=z2.GetReal()*z2.GetReal()+z2.GetImaginary()*z2.GetImaginary();
    float RealResult= (z1.GetReal()*z2.GetReal()+z1.GetImaginary()*z2.GetImaginary())/abs_z2_squared;
    float ImResult=(z1.GetImaginary()*z2.GetReal()-z1.GetReal()*z2.GetImaginary())/abs_z2_squared;
    COMPLEX result(RealResult, ImResult);
    return result;
}
