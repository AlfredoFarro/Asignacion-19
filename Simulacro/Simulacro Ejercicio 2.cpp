#include<iostream>
#include<math.h>
using namespace std;
void Determinar_area_perimetro(int *lado, double &area, double &perimetro) {
	area = pow(*lado, 2);
	perimetro = *lado * 4;
}
int main() {
	setlocale(LC_CTYPE, "spanish");
	int n;
	double area, perimetro;
	do
	{
		cout << "Ingrese el lado del cuadrado: ";
		cin >> n;
	} while (n<0);
	Determinar_area_perimetro(&n, area, perimetro);
	cout << "El área es: " << area << endl;
	cout << "El perímetro es: " << perimetro << endl << endl;
	system("pause");
}