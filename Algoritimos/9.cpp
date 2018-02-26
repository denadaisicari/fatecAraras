//exercicio 9 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	int n = 0, count = 0;
	cout << "Quantidade total de alunos? Alunos: ";
	cin >> n;
	float media[n];
	
	while(count != n)
	{
		cout << "Digite a media do aluno " << count << ": ";
		cin >> media[count++];
	}
	
	float mediaTotal;
	
	for(int i; i < count; i++) mediaTotal = mediaTotal + media[i];
	
	cout << "Media da turma: " << mediaTotal/count;
	
	
	return 0;
}
