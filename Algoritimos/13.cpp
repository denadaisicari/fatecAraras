//exercicio 13 lista Nilton
#include <iostream>
#include <math.h>

using namespace std;

int main (int argc, char** argv)
{
	int tamanho;
	cout <<"Qual o tamanho dos vetores?";
	cin >> tamanho;
	
	float a[tamanho], b[tamanho], somaA, somaB, c[tamanho], d[tamanho], escalar[tamanho];
	
	//receber valores
	for(int i = 0; i < tamanho; i++)
	{
		cout <<"VETOR A, Insira valor[" << i <<"]: "; cin >> a[i];
	}
	for(int i = 0; i < tamanho; i++)
	{
		cout <<"VETOR B, Insira valor[" << i <<"]: "; cin >> b[i];
	}
	
	//Soma de A e B
	for(int i = 0; i < tamanho; i++)
	{
		somaA += a[i];
		somaB += b[i];	
	}
	
	//C = A + B
	for(int i = 0; i < tamanho; i++)
	{
		c[i] = a[i] + b[i];
	}
	
	//D = B - A
	for(int i = 0; i < tamanho; i++)
	{
		d[i] = b[i] - a[i];
	}
	
	//ESCALAR = A o B
	for(int i = 0; i < tamanho; i++)
	{
		escalar[i] = a[i] * b[i];
	}
	

	for(int i = 0; i < tamanho; i++)	cout <<"\nVETOR A[" << i <<"]: " << a[i];
	for(int i = 0; i < tamanho; i++)	cout <<"\nVETOR B[" << i <<"]: " << b[i];
	for(int i = 0; i < tamanho; i++)	cout <<"\nVETOR C[" << i <<"]: " << c[i];
	for(int i = 0; i < tamanho; i++)	cout <<"\nVETOR D[" << i <<"]: " << d[i];
	for(int i = 0; i < tamanho; i++)	cout <<"\nVETOR ESCALAR[" << i <<"]: " << escalar[i];
	
	return 0;
}
