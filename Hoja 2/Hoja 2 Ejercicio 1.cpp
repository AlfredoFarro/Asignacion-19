#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
void generar(int *arr,int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = 5 + rand() % (31 - 5);
		cout << "El perno " << i + 1 << " tiene " << arr[i] << " de diámetro" << endl;
	}
}
void ordenar_descendiente(int *arr, int n) {
	int aux;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				aux = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = aux;
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "El perno " << i + 1 << " tiene: " << arr[i] <<" de diámetro"<< endl;
	}
}
void promedio(int *arr, int n) {
	double suma = 0;
	double prom;
	for (int i = 0; i < n; i++)
	{
		suma += arr[i];
	}
	prom = suma / n;
	cout << "El diámetro promedio es: " << prom << endl;
}
void DE1(int *arr, int n,int DE) {
	int cont = 0;
	for (int i = 0; i < n; i++)
	{
		if (DE>arr[i])
		{
			cont++;
		}
	}
	if (cont>(n/2))
	{
		cout << "Lote defectuoso" << endl;
	}
	else
	{
		cout << cont << " pernos tienen un diámetro inferior a " << DE << endl;
	}
}
int main() {
	setlocale(LC_CTYPE, "spanish");
	int n;
	int *arr = new int[n];
	int DE;
	do
	{
	cout << "Ingrese N: ";
	cin >> n;
	} while (n<=0);
	cout << endl;
	cout << "Arreglo original: " << endl << endl;
	generar(arr, n);
	cout << endl;
	cout << "Arreglo ordenado: " << endl;
	ordenar_descendiente(arr, n);
	cout << endl;
	promedio(arr, n);
	cout << endl;
	do
	{
	cout << "Ingrese el diámetro DE: ";
	cin >> DE;
	} while (DE<=0);
	cout << endl;
	DE1(arr, n, DE);
	cout << endl;
	system("pause");
}