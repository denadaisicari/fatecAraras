//exercicio 6 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	char operacao;
	float num1, num2;
	cout << "Digite a operacao a ser realizada\n";
	cout << "(+) Adicao\n";
	cout << "(-) Subtracao\n";
	cout << "(*) Multiplicacao\n";
	cout << "(/) Divisao\n";
	cin >> operacao;
	switch(operacao)
	{
		case '+':
			cout << "\nDigite o primeiro numero: ";
			cin >> num1;
			cout << "\nDigite o segundo numero: ";
			cin >> num2;
			cout << "\n" << num1 << operacao << num2 << " = " << num1 + num2;
			break;
		case '-':
			cout << "\nDigite o primeiro numero: ";
			cin >> num1;
			cout << "\nDigite o segundo numero: ";
			cin >> num2;
			cout << "\n" << num1 << operacao << num2 << " = " << num1 - num2;
			break;
		case '*':
			cout << "\nDigite o primeiro numero: ";
			cin >> num1;
			cout << "\nDigite o segundo numero: ";
			cin >> num2;
			cout << "\n" << num1 << operacao << num2 << " = " << num1 * num2;
			break;
		case '/':
			cout << "\nDigite o primeiro numero: ";
			cin >> num1;
			cout << "\nDigite o segundo numero: ";
			cin >> num2;
			cout << "\n" << num1 << operacao << num2 << " = " << num1 / num2;
			break;
		default:
			cout << "**Falhou**";
			break;
		}	
	return 0;
}
