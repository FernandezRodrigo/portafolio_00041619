/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rodri
 *
 * Created on 13 de septiembre de 2019, 06:08 PM
 */

#include <iostream>
using namespace std;
int num=0;
int digitos(int n){
    if(n==0){ 
        return num;
    }
    else{ 
        digitos((n/10)); 
        num++;
    }
}

int main() {
    int x;
    cout<<"ingresa un numero: ";
    cin>>x;
   cout<< digitos(x);
    return 0;
}