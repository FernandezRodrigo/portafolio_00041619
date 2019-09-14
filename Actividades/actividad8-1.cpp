/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rodri
 *
 * Created on 10 de septiembre de 2019, 12:16 PM
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

int main() {
    Pila unaPila;
    initialize(&unaPila);

    float x = 4, y = 7.4, z = 2.9, w = 1, e = 5.1, a = 0;
    push(&unaPila, x);
    push(&unaPila, y);
    push(&unaPila, z);
    push(&unaPila, w);
    push(&unaPila, e);

    while (!empty(&unaPila)) {
        pop(&unaPila, &a);
        if (empty(&unaPila))
            cout << "El ultimo valor es:" << a << endl;

    }
}