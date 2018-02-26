//exercicio 4 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	int valor[3];
	int ordem[3] = {0, 0 ,0};
	cout << "Insira primeiro valor\n";
	cin >> valor[0];
	cout << "Insira segundo valor\n";
	cin >> valor[1];
	cout << "Insira terceiro valor\n";
	cin >> valor[2];
	
	if(valor[0] < valor[1] && valor[0] < valor[2])
	{
		ordem[0] = valor[0];
		if(valor[1] < valor[2])
		{
			ordem[1] = valor[1];
			ordem[2] = valor[2];	
		}else
		{
		ordem[1] = valor[2];
		ordem[2] = valor[1];	
		}
	}
	
	if(valor[0] > valor[1] && valor[0] < valor[2])
	{
		ordem[1] = valor[0];
		if(valor[1] < valor[2])
		{
			ordem[0] = valor[1];
			ordem[2] = valor[2];	
		}else
		{
			ordem[0] = valor[2];
			ordem[2] = valor[1];	
		}
	}
	
	
	if(valor[0] > valor[1] && valor[0] > valor[2])
	{
		ordem[2] = valor[0];
		if(valor[1] < valor[2])
		{
			ordem[0] = valor[1];
			ordem[1] = valor[2];	
		}else
		{
			ordem[0] = valor[2];
			ordem[1] = valor[1];	
		}
	}
	
	for(int i = 0; i < 3; i++)
	{
		cout << "Valor " << i << " " << ordem[i] << "\n";
	}
		
	return 0;
}
