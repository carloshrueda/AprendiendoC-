/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   prepostincremento.cpp
 * Author: CRUEDA
 *
 * Created on 30 de enero de 2018, 09:08 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    /*
     Look carefully at this program. Let’s trace its execution step by step.
     * 
     * 1. The i variable is assigned the value of 4;
     * 2. We take the original value of i (4), multiply it by 2, assign the 
     * result (8) to j and eventually (post-)increment the i variable (it’s now equal to 5);
     * 3. We (pre-)decrement the value of j (it's now equal to 7), this reduced 
     * value is taken and multiplied by 2, and the result (14) is assigned to the variable i.
     */

    int i, j;

    i = 4;
    j = 2 * i++; //j=8 || i=5
    i = 2 * --j; //j=7 || i=14
    
    cout << "i: " << i << endl;
    cout << "j: " << j << endl;

    return 0;
}

