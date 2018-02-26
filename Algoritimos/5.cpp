//exercicio 5 lista Nilton
#include <iostream>

using namespace std;

int main (int argc, char** argv)
{
	float votosA=0, votosB=0, votosC=0, votosBR=0, votosN=0;
	float totalVotos;
	char teste;
	int OK;
	
	while(OK == 0)
	{
	cout << "ELEICAO\n";
	cout << "Computar votos para: \n";
	cout << "(A) Candidato A\n";
	cout << "(B) Candidato B\n";
	cout << "(C) Candidato C\n";
	cout << "(X) Brancos\n";
	cout << "(Y) Nulos\n";
	cout << "<<DEBUG>> A: " << votosA << " B: " << votosB << " C: " << votosC << " Nulo: " << votosN << " Branco: " << votosBR  << " OK: " << OK;
	cout << "\n";
	cin >> teste;
	
	if(teste == 'A')
	{
		cout << "Votos para A: ";
		cin >> votosA;
	}
	
	if(teste == 'B')
	{
		cout << "Votos para B: ";
		cin >> votosB;
	}
	
	if(teste == 'C')
	{
		cout << "Votos para C: ";
		cin >> votosC;
	}
	
	if(teste == 'X')
	{
		cout << "Votos em branco: ";
		cin >> votosBR;
	}
	
	if(teste == 'Y')
	{
		cout << "Votos nulo: ";
		cin >> votosN;
	}
	
	if((votosA != 0) && (votosB != 0) && (votosC != 0) && (votosBR != 0) && (votosN != 0))       
	{
		OK = 1;
		cout << "A: " << votosA << "  B: " << votosB << "  C: " << votosC << "  Nulo: " << votosN << "  Branco: " << votosBR  << "  OK: " << OK;
		cout << "\n";
		totalVotos = votosA + votosB + votosC + votosBR + votosN;
		cout << "\nTotal de votos: " << totalVotos;
		cout << "\nCandidato A: "<< votosA << " " << (votosA/totalVotos)*100 << "%";
		cout << "\n";
		cout << "\nCandidato B: "<< votosB << " " << (votosB/totalVotos)*100 << "%";
		cout << "\n";
		cout << "\nCandidato C: "<< votosC << " " << (votosC/totalVotos)*100 << "%";
		cout << "\n";
		cout << "\nEm branco: "<< votosBR << " " << (votosBR/totalVotos)*100 << "%";
		cout << "\n";
		cout << "\nNulo: "<< votosN << " " << (votosN/totalVotos)*100 << "%";
		cout << "\n";
	}	
	
	}
	return 0;
}
