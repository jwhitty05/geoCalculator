/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Jon
 *
 * Created on April 3, 2018, 12:20 PM
 */


#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    int length;
    int height;
    int area;
    float triangle_area;
     
       
        cout << "Enter the length of the triangle" << endl;
        cin >> length;
        cout << "Enter the height of a triangle" << endl;
        cin >> height;
        
        triangle_area = length * height /2;
        cout << "triangle=" << triangle_area << endl;
        cout << "The sides of the triangle measure " << length << " and " << height<< ". The area is "<< triangle_area << endl;
        
    return 0;
    
    
    
}


