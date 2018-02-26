//exercicio 14 lista Nilton
//Utilizando biblioteca algorithm
#include <iostream>
#include <algorithm>

using namespace std;

int main (int argc, char** argv)
{

	int tamanho = 7;
    int intArray[tamanho] = {5, 3, 32, -1, 1, 104, 53};

    sort(intArray, intArray + tamanho);

    cout << "Vetor Ordenado" << endl;
    for (int i = 0; i < tamanho; ++i)
        cout << intArray[i] << " ";

	return 0;	
}
