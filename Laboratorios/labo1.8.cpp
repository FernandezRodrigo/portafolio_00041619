/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rodri
 *
 * Created on 6 de septiembre de 2019, 05:46 PM
 */

#include <iostream> //ejercicio 8
using namespace std;

int numero = 1;

int conteo(int n) {
    if (numero == n) {
        if(n==1){
        cout << n;
    } else {
        cout << numero << endl;
        numero--;
        conteo(n-1);
    }
} else {
    cout << numero << endl;
    numero++;
    conteo(n);
}
}

int main() {
    int num;
    cout << "Numero que desea contar: ";
    cin>>num;
    conteo(num);
    return 0;
}