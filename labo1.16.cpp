/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rodri
 *
 * Created on 6 de septiembre de 2019, 05:49 PM
 */

#include <iostream> 
using namespace std; 
int main() {
    int arreglo[10],suma=0;
    double promedio=0;
    for(int i=0;i<10;i++){
        cout<<"Ingrese numero : ";
        cin>>arreglo[i];
        suma+=arreglo[i];
    }
    promedio =(suma/10);
    cout<<"la suma es: "<<suma<<endl;
    cout<<"El promedio es : "<<promedio<<endl;
    return 0;
} 