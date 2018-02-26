//exercicio 6.1 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	float valor1, valor2;
	do
	{
		cout << "Insira primeiro valor\n";
		cin >> valor1;
		cout << "Insira segundo valor\n";
		cin >> valor2;
		if(valor2 == 0)
		{
			cout << "Segundo valor = 0 !!";
		}
	}while(valor2 == 0);
	
	cout << valor1 << "/" << valor2 << " = " << valor1 / valor2;
	return 0;
}
