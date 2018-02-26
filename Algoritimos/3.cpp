//exercicio 3 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	float volume;
	float raio;
	cout << "Qual o valor do raio?\n";
	cin >> raio;
	cout << "Voce digitou raio: " << raio;
	
	volume= 4/3 * 3.14 * raio * raio * raio;
	
	cout << "Volume eh igual: " << volume;	
	
	return 0;
}
