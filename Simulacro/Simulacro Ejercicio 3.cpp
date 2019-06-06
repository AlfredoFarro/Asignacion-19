#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
void GenerarMostrarDatos(int cantidad, int* Vpuntajes) {
	for (int i = 0; i < cantidad; i++)
	{
		Vpuntajes[i] = rand() % (51 - 1);
		cout << "El alumno " << i + 1 << " obtuvo: " << Vpuntajes[i] << " de nota" << endl;
	}
}
void Lista_DebajoPromedio(int cantidad, int* Vpuntaje) {
	double suma = 0.0;
	double prom=0.0;
	for (int i = 0; i < cantidad; i++)
	{
		suma += Vpuntaje[i];
	}
	prom = suma / cantidad;
	for (int i = 0; i < cantidad; i++)
	{
		if (Vpuntaje[i]<prom)
		{
			cout << "El alumno " << i + 1 << " obtuvo de nota: " << Vpuntaje[i] << " y esta por debajo del promedio de: " << prom << endl;
		}
	}
}
void Devuelve_Menor(int cantidad, int* Vpuntaje) {
	int menor = 50;
	int contmenor=0;
	for (int i = 0; i < cantidad; i++)
	{
		if (Vpuntaje[i]<menor)
		{
			menor = Vpuntaje[i];
			
		}
	}
	for (int i = 0; i < cantidad; i++)
	{
		if (Vpuntaje[i]==menor)
		{
			contmenor++;
		}
	}
	cout << "El menor puntaje fue: " << menor << " y lo obtuvieron: " << contmenor << " alumnos" << endl;
}
void main() {
	setlocale(LC_CTYPE, "spanish");
	srand(time(NULL));
	int cantidad=40;
	int* Vpuntaje = new int[cantidad];
	GenerarMostrarDatos(cantidad, Vpuntaje);
	cout << endl;
	Lista_DebajoPromedio(cantidad, Vpuntaje);
	cout << endl;
	Devuelve_Menor(cantidad, Vpuntaje);
	system("pause");

}