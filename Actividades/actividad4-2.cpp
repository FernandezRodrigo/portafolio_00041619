/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rodri
 *
 * Created on 27 de agosto de 2019, 11:09 AM
 */

#include <iostream>
#include <string>
using namespace std;

/*Rodrigo Alejandro Fernandez Leiva 00041619
Rodrifo Efrain Figueroa Aguirre 00157219 */

int menor, mayor;
bool continentencontrado = false;

struct continentes {
    string nombre_continente, pais, capital;
    int numero_habitantes;
    double promedio_edad;
};
continentes continentes[5];

int poblacion(string busqueda) {
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        if (busqueda == continentes[i].nombre_continente) {
            continentencontrado = true;
            for (int j = i; j < i + 5; j++) {
                suma += continentes[j].numero_habitantes;
            }
            i = 26;
        } else {
            i += 4;
        }
    }
    return suma;
}

void datos(string continente, int i, int o) {

    for (i; i < o; i++) {
        continentes[i].nombre_continente = continente;
        cout << "Pais: " << endl;
        cin >> continentes[i].pais;
        cout << "Capital: " << endl;
        cin >> continentes[i].capital;
        cout << "Habitantes: " << endl;
        cin >> continentes[i].numero_habitantes;
        cout << "Promedio de edad: " << endl;
        cin >> continentes[i].promedio_edad;
    }
    menor += 5;
    mayor += 5;
    cout << menor << mayor;
}

int main() {
    int cantidad = 0;
    double promedio = 0;
    string capital, nombrecontinente;
    menor = 0, mayor = 5;
    for (int i = 0; i < 5; i++) {
        cout << "Continente: " << endl;
        cin>>nombrecontinente;
        datos(nombrecontinente, menor, mayor);
    }
    while (!continentencontrado) {
        cout << "Ingrese continente para saber poblacion: " << endl;
        cin>>nombrecontinente;
        cout << "Suma de la poblacion de " << nombrecontinente << " es  : " << poblacion(nombrecontinente) << endl;
    }
    for (int i = 0; i < 5; i++) {
        if (continentes[i].numero_habitantes > cantidad) {
            cantidad = continentes[i].numero_habitantes;
            capital = continentes[i].capital;
        }
        promedio += continentes[i].promedio_edad;
    }
    cout << "La capital de mayor poblacion: " << capital << endl;
    cout << "El promedio de edades: " << (promedio / 5) << endl;
}