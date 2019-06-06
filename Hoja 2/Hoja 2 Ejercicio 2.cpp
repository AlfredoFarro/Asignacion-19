#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
void Generar(int *arr, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		arr[i] = 1 + rand() % (101 - 1);
		cout << "El número " << i + 1 << " es: " << arr[i] << endl;
	}
}
void graficar(int *arr, int *n) {
	for (int i = 0; i < *n; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			cout << arr[i] << endl;
		}
		else
		{
			cout << arr[i] << " ";
		}
	}
}
void ordenar(int*arr, int n) {
	int aux;
	int *arr2 = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	for (int c = 0; c < n; c++)
	{
		for (int d = 0; d < n - 1; d++)
		{

			if (arr2[d] > arr2[d + 1])
			{
				aux = arr2[d + 1];
				arr2[d + 1] = arr2[d];
				arr2[d] = aux;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{

		cout << "El número " << i + 1 << " es: " << arr2[i] << endl;
	}
}
int main() {
	setlocale(LC_CTYPE, "spanish");
	int n;
	int*arr = new int[n];
	do
	{
		cout << "Número de elementos: ";		cin >> n;
	} while (n < 0);
	Generar(arr, n);
	cout << endl << "Ordenado Ascendentemente: " << endl << endl;
	ordenar(arr, n);
	cout << endl << "Gráfico: " << endl << endl;
	graficar(arr, &n);
	cout << endl;
	system("pause");
}