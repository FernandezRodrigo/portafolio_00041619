/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rodri
 *
 * Created on 13 de septiembre de 2019, 06:17 PM
 */

#include <iostream>
using namespace std;

void Hanoi(int n, int inicio,int aux,int fin){
    if(n==1){
     cout<<"Disco numero: "<<n<<" se movio de "<< inicio <<" hacia a la torre" << fin<<endl;
    }
  else{
     Hanoi(n-1, inicio,fin,aux);
     cout<<"Disco numero: "<<n<<" se movio de "<< inicio <<" hacia a la torre" << fin<<endl;
    Hanoi(n-1, aux, inicio, fin);
   }
 }
int main() {
    int x,inicio=1,aux=2,fin=3;
    cout<<"Ingresa la cantidad de discos : ";
    cin>>x;
    Hanoi(x,inicio,aux,fin);
    return 0;
}
