//exercicio 12 lista Nilton
#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char** argv)
{
	int tamanhoXadrez = 8*8;
	unsigned long long trigo[tamanhoXadrez] = {0};
	unsigned long long somaTrigo = 0;

	for(int i = 0; i < tamanhoXadrez; i++)
	{
		trigo[i] = pow(2, i);
		somaTrigo = somaTrigo + trigo[i];
		cout << i << " : " << trigo[i] << "\n";
	}
	
	cout << "\n\nSoma dos graos: " << somaTrigo;
	
	return 0;
}
