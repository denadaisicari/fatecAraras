#define NUMBER 100
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	string arrayNomes[NUMBER];// = {0};
	float arrayDados[NUMBER][5];
	int count;
	char verifica;
	
	for(int i=0; i < NUMBER; i++)
	{	
		cout << "Cadastro funcionario ID[" << count << "]";	
		arrayDados[i][0] = count; // codigo
		
		cout << "\nInsira nome: ";
		cin >> arrayNomes[i];
		
		cout << "Insira idade: ";
		cin >> arrayDados[i][1]; 
		
		cout << "Insira salario bruto: ";
		cin >> arrayDados[i][2];
		
		cout << "Insira %INSS: ";
		cin >> arrayDados[i][3];
		
		//salario liquido
		arrayDados[i][4] =  arrayDados[i][2] - ((arrayDados[i][3] / 100) * arrayDados[i][2]);
		
		
		
		cout << "Deseja Cadastrar mais um funcionario? (S)im (N)ao";
		cin >> verifica;
		
		if (verifica == 'N') 
		{
			cout << "\nFUNCIONARIOS CADASTRADOS\n";
			for(int j=0; j <= count; j++)
			{
				cout << "\nCOD: " << arrayDados[j][0];
				cout << "\nNOME: " << arrayNomes[j];
				cout << "\nIDADE: " << arrayDados[j][1];
				cout << "\nSAL BRUTO: " << arrayDados[j][2];
				cout << "\n%INSS: " << arrayDados[j][3];
				cout << "\nSAL LIQ: " << arrayDados[j][4];		
			}
			
			i = NUMBER;	
		}
		count++;
	}
	
	return 0;	
}

