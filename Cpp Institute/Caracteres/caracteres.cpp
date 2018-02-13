/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   caracteres.cpp
 * Author: CRUEDA
 *
 * Created on 12 de febrero de 2018, 06:22 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char caracter = 'A';

    cout << "Caracteres: " << endl;
    //cout << (char) (caracter+1) << endl;
    for(char i= 'A'; i<='Z'; i++)
        cout << (int) i << " -> " << i << endl;
    
    caracter= '\47'; //47 es el num octal de '
    cout << caracter << endl;
    
    caracter= '\x27'; //27 es el num hex de '
    cout << caracter << endl;
    
    cout << '\a';
    return 0;
}

