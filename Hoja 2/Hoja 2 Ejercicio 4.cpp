#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
void main() { 
	string mensaje;
	int a, costo;
	char* letra;
	
	system("cls");
	a = 0, costo = 0;
	cout << "Ingresar mensaje: ";
	getline(cin, mensaje);
	a = mensaje.length(); 
	letra = new char[a + 1];
	strcpy(letra, mensaje.c_str()); 
	for (int i = 0; i < a; i++) {
		if (65 <= (int)letra[i] && (int)letra[i] <= 90 || 97 <= (int)letra[i] && (int)letra[i] <= 122) costo += 10;
		else if (letra[i] == '0' || letra[i] == '1' || letra[i] == '2' || letra[i] == '3' || letra[i] == '4' || letra[i] == '5' || letra[i] == '6' || letra[i] == '7' || letra[i] == '8' || letra[i] == '9') {
			costo += 20;
		}
		else if (letra[i] == ' ') costo += 0;
		else costo += 30;
	}
	cout << endl << "Valor del mensaje: " << costo << endl;
	cout << endl << endl;
	_getch();
}