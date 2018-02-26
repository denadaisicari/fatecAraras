//exercicio 16 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	int a[6], b[6], c[6], d[6] = {0};
	
	for(int i = 0; i < 6; i++)
	{
		cout << "Insira valor A[" << i << "]: ";
		cin >> a[i];
	}
	
	for(int i = 0; i < 6; i++)
	{
		cout << "Insira valor B[" << i << "]: ";
		cin >> b[i];
	}
	
	for(int i = 0; i < 6; i++)
	{
		if(i%2 == 0)
		{
			c[i] = a[i];
			d[i] = b[i+1];
		}else{
			c[i] = b[i-1];
			d[i] = b[i];
		}
	}
	
	for(int i = 0; i < 6; i++)	cout << "\nC[" << i << "]: " << c[i];
	for(int i = 0; i < 6; i++)	cout << "\nD[" << i << "]: " << d[i];

	
	return 0;
}
