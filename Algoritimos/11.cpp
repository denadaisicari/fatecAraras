//exercicio 11 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	int f1 = 1, f2 = 1, fn;

	
	cout << "Os 20 primeiros termos da sequencia de fibonacci:\n";
	
	cout << f1;
	cout << "\n";
	cout << f2;
	cout << "\n";
	
	
	for(int i = 0; i < 18; i++)
	{
		fn  = f1 + f2;
		cout << fn;
		cout << "\n";
		f1 = f2;
		f2 = fn;
	}
	
	return 0;
}
