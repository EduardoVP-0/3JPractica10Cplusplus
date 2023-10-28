// 3JPractica10Cplusplus
// EDUARDOVELAZQUEZ

#include <iostream>

using namespace std;

int sumaIterativa(int n) {
	int suma = 0;

	while (n > 9) {
		suma += n % 10;
		n /= 10;
	}
	return(suma + n);
}

int sumaRecursiva(int n) {
	if (n <= 9) {
		return n;
	}
	else {
		return sumaRecursiva(n / 10) + n % 10;
	}
}

int main(){
	int n;
	cout << "Ingrese el dato a sumar: ";
	cin >> n;

	cout << "El resultado de la suma iterativa es el siguiente: " << sumaIterativa(n) << endl;
	cout << "El resultado de la suma recursiva es el siguiente: " << sumaRecursiva(n);

	return 0;
}


