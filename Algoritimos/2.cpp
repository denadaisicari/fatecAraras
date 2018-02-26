//exercicio 2 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	int valor[3];
	cout << "Insira primeiro valor\n";
	cin >> valor[0];
	cout << "Insira segundo valor\n";
	cin >> valor[1];
	cout << "Insira terceiro valor\n";
	cin >> valor[2];
	cout << "A soma dos quadrados dos tres numeros: " << valor[0] * valor[0] + valor[1] * valor[1] + valor[2] * valor[2] ;
	return 0;
}
