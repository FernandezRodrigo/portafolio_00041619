/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rodri
 *
 * Created on 10 de septiembre de 2019, 12:45 PM
 */

#include <iostream>
using namespace std;

struct Tpila {
    float elementos[5];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s) {
    s->top = -1;
}

bool empty(Pila *s) {
    return s->top < 0;
}

void push(Pila *s, float e) {
    if (s->top < 4) {
        (s->top)++;
        s->elementos[s->top] = e;
    }
}

void pop(Pila *s, float *e) {
    if (s->top >= 0) {
        *e = s->elementos[s->top];
        (s->top)--;
    }
}

float eliminar(Pila* s) {
    float x = 4, y = 7.4, z = 2.9, w = 1, e = 5.1, a = 0, final = 0;
    push(s, y);
    push(s, z);
    push(s, w);
    push(s, e);
    push(s, x);
    while (!empty(s)) {
        pop(s, &a);
        if (empty(s)) {
            return a;
        }
    }
}

float ultimo(Pila* s, Pila* j) {
    float x = 4, y = 7.4, z = 2.9, w = 1, e = 5.1, a = 0, final = 0;
    push(s, y);
    push(s, z);
    push(s, w);
    push(s, e);
    push(s, x);
    while (!empty(s)) {
        pop(s, &a);
        push(j, a);
    }
    final = a;
    while (!empty(j)) {
        pop(j, &a);
        push(s, a);
    }
    return final;
}

int main() {
    Pila unaPila, pilados;
    initialize(&unaPila);
    initialize(&pilados);
    cout << "El valor del fondo, eliminando la pila es :  " << eliminar(&unaPila) << endl;
    cout << "El valor del fondo, sin eliminar la pila es : " << ultimo(&unaPila, &pilados);
}
