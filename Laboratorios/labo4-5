#include <iostream>//ejercicio5
using namespace std; 
struct num{
	int numero;
	num *sig;
};
struct sumas{
	int pares,impares;
};  
sumas suma(num* lista,int pares, int impares){
	if(!lista){
		sumas s;
		s.impares = impares;
		s.pares = pares;
		return s;
	}
	else{
		if(lista->numero % 2 != 0){
                impares += lista->numero;
		suma(lista->sig,pares,impares); 
		}
		else{
		pares += lista->numero;
                suma(lista->sig,pares,impares);	
		}
	}
}
int main(){
	sumas s;
	int impares=0,n=0,opc=0,pares=0; 
	num *pInicio = NULL;
	do{
		cout << "MENU PRINCIPAL\n1)Agregar\n2)Mostrar sumas\n3)Salir"<<endl; 
		cin >> opc;
		num *nuevo = new num;
		switch(opc){
			case 1:
				cout << "Ingresa un numero: "; cin >> n;
				nuevo->sig = NULL;
				nuevo->numero = n;
				if(!pInicio){
					pInicio = nuevo;
				}
				else{
					nuevo->sig = pInicio;
					pInicio = nuevo;
				}
			break;
			case 2:
				cout << "Suma de numeros"<<endl;
				s = suma(pInicio,pares,impares);
				cout << "Numeros pares: " <<s.pares <<endl;
				cout << "Numeros impares: " << s.impares << endl;
			break; 
		}
	}while(opc!=3); 
	return 0;
} 
