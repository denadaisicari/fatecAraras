//Exemplo interacao com estrutura
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct TAluno{
	int codigo;
	char nome[40];
	double nota;
}aluno_especial;

void cadastrar()
{
	cout << "Digite o codigo do aluno especial: ";
	cin >> aluno_especial.codigo;
	cout << "Digite o nome do aluno especial";
	cin >> aluno_especial.nome;
	cout << "Digite a note do aluno especial";
	cin >> aluno_especial.nota;
	
}

void inicializar()
{
	aluno_especial.codigo = 0;
	strcpy(aluno_especial.nome, "NULL");
	aluno_especial.nota = 0.0;
}

void imprimir()
{
	cout << "Aluno especial: " << aluno_especial.codigo << " " << aluno_especial.nome;
	cout << "Nota: " << aluno_especial.nota;
}

main()
{
	int opc;
	do
	{
		
	cout << "\n 1- Inicializar estrutura";
	cout << "\n 2- Imprimir estrutura";
	cout << "\n 3- Cadastrar aluno especial";
	cout << "\n 4- Para sair";
	cout << "\n\n Digite a opcao desejada: ";
	cin >> 	opc;
	
		switch(opc)
		{
			case 1:
				inicializar();
				break;
			case 2:
				imprimir();
				break;
			case 3:
				cadastrar();
				break;
			default:
				cout << "Opcao invalida";
				break;
		}	
	}while (opc != 4);
	
	
}
