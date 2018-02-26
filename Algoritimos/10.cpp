//exercicio 10 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	int valor[10];
	int maiorValor = 0, count = 0;
	
	while(count != 10)
	{
		cout << "Entre com o valor " << count << ":";
		cin >> valor[count];
		if(valor[count] > maiorValor) maiorValor = valor[count];
		count++;
	}
	cout << "\n\nMaior valor inserido: " << maiorValor;
	return 0;
}
