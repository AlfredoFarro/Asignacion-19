#include<iostream> 
using namespace std;
int fibo(int n) {
	int contador = 2;
	int terminoregresar = 0;
	int fib1 = 1, fib2 = 1, fib3;
	if (n==1||n==2)
	{
		terminoregresar = 1;
	}
	else
	{
		while (contador<n)
		{
			fib3 = fib1 + fib2;
			contador++;
			terminoregresar = fib3;
			if (contador == n)break;

			fib1 = fib2 + fib3;
			contador++;
			terminoregresar = fib1;
			if (contador == n)break;

			fib2 = fib1 + fib3;
			contador++;
			terminoregresar = fib2;
		}
	}
	return terminoregresar;
}
void graficar(int n) {
	int na = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << fibo(na) << " ";
			na++;
		}
		cout << endl;
		na = 1;
	}
}

int main() {
	setlocale(LC_CTYPE, "spanish");
	int n;
	int opcion;
	while (true)
	{
		cout << "\tMenú de opciones\n1. Hallar el n-ésimo término\n2. Graficar\n3. Fin\nIngrese la opción: ";
		cin >> opcion;
		switch (opcion) {
		case 1: {
			do
			{
				cout << "Ingrese el n-ésimo término: ";
				cin >> n;
			} while (n < 0);
			cout << "El término " << n << " es: " << fibo(n) << endl << endl;
			break;
		}
		case 2: {
			do
			{
				cout << "Ingrese el valor de N: ";
				cin >> n;
			} while (n < 0);
			graficar(n);
			cout << endl;
			break;
		}
		case 3: {
			exit(0);
		}
		default: {
			cout << "Ingreso una opción incorrecta, por favor ingrese una correcta" << endl << endl;
			break;
		}
		}
	}
		system("pause");
}