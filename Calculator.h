#pragma once

class Calculadora {
private:
	int number_One;
	int number_Two;
public:
	Calculadora();
	~Calculadora();
	void set_Number_One(int);
	int get_Number_One();
	void set_Number_Two(int);
	int get_Number_Two();

	void sumar_Numeros();
};