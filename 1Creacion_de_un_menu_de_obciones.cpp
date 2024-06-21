#include <iostream>
using namespace std;

//variale gloval para el saldo
int saldo = 0;

//funcion para depositar dinero
void depositar() {
	saldo+=100;
	cout << "Se han depositado 100 unidades.Nuevo saldo: " << saldo << endl;
	
}

//funcion para retirar dinero
void retirar() {
	if(saldo >= 100) {
		saldo -=100;
		cout << "Se han retirado 100 unidades. Nuevo saldo: " << saldo << endl;
	}else {
		cout << "Saldo insuficiente. " << endl;
	}
}

//funcion apra mostrar el saldo
void mostrarSaldo() {
	cout << "Saldo actual: " << saldo << endl;
	}

void menu () {
	int opcion;
	do {
		cout << "\n--- Cajero Automatico ---" << endl;
		cout << "1.  Deposiar 100" << endl;
		cout << "2. Retirar 100" << endl;
		cout << "3. Mostrar saldo" << endl;
		cout << "4. Salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		
		switch (opcion){
			case 1:
				depositar();
				break;
			case 2:
				retirar();
				break;
			case 3:
				mostrarSaldo();
				break;
			case 4:
				cout << "Saliendo..." << endl;
				break;
			default:
				cout << "Opcion no valida. Intente de nuevo. " << endl;
		}
	} while (opcion !=4);
}

int main () {
	menu();
	return 0;
}
