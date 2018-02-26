//exercicio 1 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	float valor[3];
	cout << "Insira primeiro valor\n";
	cin >> valor[0];
	cout << "Insira segundo valor\n";
	cin >> valor[1];
	cout << "Insira terceiro valor\n";
	cin >> valor[2];
	
	if(valor[0] > (valor[1] + valor[2]))
	{
		cout << "Primeiro valor eh maior que a soma do segundo e terceiro!";
	}
	if(valor[0] < (valor[1] + valor[2]))
	{
		cout << "Primeiro valor eh menor que a soma do segundo e terceiro!";
	}
	
	
	return 0;
}
