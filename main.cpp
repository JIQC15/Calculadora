#include "Calculator.h"
#include <iostream>
#include <stdlib.h>
#include "main.h"

using namespace std;

int main() {
	Calculadora number;
	//int Number_One = 0, Second_One = 0, suma = 0;
	char opc;

	cout << "Bienvenido a su calculadora\n";
	system("pause");
	system("cls");

	do {
		MENU(opc);
	switch (opc) {
		case '1':
			system("cls");
			number.sumar_Numeros();
			break;
		}
	} while (0);
	return 0;
}

void MENU(char& opc)
{
	cout << "MENU:\n1) SUMAR.\n  ->Favor de ingresar la opcion por realizar: ";
	cin >> opc;
}

/*do {
	cout << "MENU:\n1) SUMAR.\n  ->Favor de ingresar la opcion por realizar: ";
	cin >> opc;

	switch (opc) {
		case '1':
			system("cls");
			cout << "Favor de ingresar el primer numero: ";
			cin >> Number_One;
			cout << "Favor de ingresar el segundo numero: ";
			cin >> Second_One;

			suma = Number_One+Second_One;
			cout << "Su resultado es:" << suma;
			break;
		}
	} while (0);*/