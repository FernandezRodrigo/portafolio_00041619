/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rodri
 *
 * Created on 29 de agosto de 2019, 11:19 AM
 */

#include <iostream>
using namespace std;

int multiplicacion(int a,int  b){
    if (b==1){
        return a;
    }else{
        int mul=multiplicacion (a,b-1);
        return mul+a;
    }
}

int main(){
    int a;
    int b;
    
    cout<<"ingrese a: ";
    cin>>a;
    cout<<"ingrese b: ";
    cin>>b;
    cout<<"la respuesta es: "<<multiplicacion(a,b);
    
}