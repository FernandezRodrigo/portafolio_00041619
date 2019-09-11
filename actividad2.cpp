#include <iostream>

using namespace std;

float mediana(int a[], int tamano){
	int s = tamano / 2;
	float mediana=0;
	if(tamano%2 != 0){
		mediana = a[s];
	}
	else if(tamano%2 ==0){
		mediana = (a[s-1] + a[s])/2;
	}
	return mediana;
}

int main(){
	int tamano = 0;
	
	cout << "Tamano de su arreglo: "<< endl;                                                                                                                                        cin >> tamano;
	int a[tamano];
	for(int i=0; i<tamano; i++){
		cout << "Elemento de su arreglo: " << endl;
		cin >> a[i];
	}
	cout << "Mediana: " << mediana(a,tamano);

	return 0;
}
