/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   baseconverter.cpp
 * Author: CRUEDA
 *
 * Created on 22 de febrero de 2018, 08:51 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char **argv) {
    int n, b;
    int lenvr = -1;
    char vr[66];

    char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                  'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                  'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    cin >> n;
    cin >> b;

    if (n >= b) {
        int r;

        while (n >= b) {
            r = n % b;
            vr[++lenvr] = num[r];

            n = n / b;
        }
    }

    //imprimir
    cout << num[n];
    if (lenvr > -1) {
        for (int i = lenvr; i >= 0; i--) {
            cout << vr[i];
        }
    }
    cout << endl;

    return 0;
}

