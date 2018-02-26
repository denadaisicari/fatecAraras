//exercicio 15 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	int pacientes = 4;
	int medicoes = 24;
	int pressao[pacientes][2][medicoes];
	float media[pacientes][2];
	float maiorPS, maiorPD, paciente, hora;	
	
	//Coleta de dados
	cout << "\nCOLETA DE DADOS DOS PACIENTES";
	for(int i = 0; i < pacientes; i++)
	{
		for(int j = 0; j < medicoes; j++)
		{
			cout << "\nInsira a pressao do paciente[" << i << "] | Medicao numero [" << j << "]\nPressao Sistolica: ";
			cin >> pressao[i][0][j];
			cout << "\nPressao Diastolica: ";
			cin >> pressao[i][1][j];
		}
		cout << "\n----------------------------------------------------";
	}
	
	//Exibe dados coletados
	cout << "\nDADOS COLETADOS";
	cout << "\n----------------------------------------------------";
	for(int i = 0; i < pacientes; i++)
	{
		for(int j = 0; j < medicoes; j++)
		{
			cout << "\nPaciente[" << i << "] | Medicao numero [" << j << "]\nPressao Sistolica: " << pressao[i][0][j] << "\nPressao Diastolica: " << pressao[i][1][j];
		}
		cout << "\n----------------------------------------------------";
	}
	
	//Media leituras
	cout << "\nMEDIAS LEITURAS";
	cout << "\n----------------------------------------------------";
	for(int i = 0; i < pacientes; i++)
	{
		for(int j = 0; j < medicoes; j++)
		{
			media[i][0] += pressao[i][0][j];
			media[i][1] += pressao[i][1][j];
		}
		media[i][0] = media[i][0] / pacientes;
		media[i][1] = media[i][1] / pacientes;
	}
	for(int i = 0; i < pacientes; i++)
	{
		cout << "\nPaciente[" << i << "] | Media Pressao Sistolica: " << media[i][0] << "\nPressao Diastolica: " << media[i][1];
	}
	
	//Paciente com a maior media de leituras
	cout << "\nPACIENTE COM MAIOR MEDIA PRESSAO MEDIDA";
	cout << "\n----------------------------------------------------";
	maiorPS = maiorPD = 0;
	for(int i = 0; i < pacientes; i++)
	{
		if(media[i][0] > maiorPS)
		{
			maiorPS = media[i][0];
			maiorPD = media[i][1];
			paciente = i;
		}
	}
	cout << "\nPaciente[" << paciente << "] | Media Pressao Sistolica: " << maiorPS << "\nPressao Diastolica: " << maiorPD;
	
	//Exibe paciente com maior leitura de pressao e horario
	cout << "\nPACIENTE COM MAIOR PRESSAO MEDIDA E HORARIO";
	cout << "\n----------------------------------------------------";
	maiorPS = maiorPD = 0;
	for(int i = 0; i < pacientes; i++)
	{
		for(int j = 0; j < medicoes; j++)
		{
			if(pressao[i][0][j] > maiorPS)
			{
				maiorPS = pressao[i][0][j];
				maiorPD = pressao[i][1][j];
				paciente = i;
				hora = j;
			}			
		}
	}
	cout << "\nPaciente[" << paciente << "] " << "Horario: " << hora << "h | Pressao Sistolica: " << maiorPS << "\nPressao Diastolica: " << maiorPD;
	
	
	return 0;
}
