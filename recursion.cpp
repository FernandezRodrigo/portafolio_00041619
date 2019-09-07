#include <iostream>
using namespace std;


int low = 0, high = 7;
int mid = (low + high) / 2;
int numero(int n) {
    int a[] = {1, 3, 4, 5, 17, 18, 31, 33};
    
    if (n == a[mid]) {
        return (mid);
    }
    if (n != a[mid] &&(mid == low || mid == high)) {
        return (-1);
    }
    if (n < a[mid]) {
        mid -= 1;
        return numero(n);
    } else {
        mid++;
        return numero(n);
    }
}

int main() {
    int n;
    cout << "Numero: ";
    cin>>n;
    cout << "Puesto en el arreglo: "<<numero(n);
}
