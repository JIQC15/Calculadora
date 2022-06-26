#include "Calculator.h"
#include <stdio.h>
#include <iostream>

using namespace std;

Calculadora::Calculadora() {}

Calculadora::~Calculadora() {}

void Calculadora::set_Number_One(int Numero_1) {
	number_One = Numero_1;
}

int Calculadora::get_Number_One() {
	return number_One;
}

void Calculadora::set_Number_Two(int Numero_2) {
	number_One = Numero_2;
}

int Calculadora::get_Number_Two() {
	return number_Two;
}

void Calculadora::sumar_Numeros() {
	int suma = 0;
	cout << "Favor de ingresar el primer numero: ";
	cin >> number_One;
	cout << "Favor de ingresar el segundo numero: ";
	cin >> number_Two;

	suma = number_One + number_Two;

	cout << "Su resultado es: " << suma;
}
