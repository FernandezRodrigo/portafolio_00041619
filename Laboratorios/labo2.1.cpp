#include <iostream>

using namespace std;

int mcd(int mayor = 0, int menor = 0) {

    if (menor > mayor) {
        cout << "Error 404";
    } else if (mayor % menor == 0) {
        cout<<"el mcd es: ";
        return menor;
    } else {
        int residuo=mayor%menor;
        mayor=menor;
        menor=residuo;
        cout<<"el mcd es: ";
        return menor;
    }
}

int main() {
    int mayor = 0, menor = 0;

    cout << "coloque numero mayor: ";
    cin >> mayor;
    cout << "coloque numero menor: ";
    cin >> menor;


    cout << mcd(mayor, menor) << endl;

}

