//exercicio 14 lista Nilton
//Na raca
#include <iostream>
#include <conio.h>
using namespace std;

int main (int argc, char** argv)
{
	int a[10], temp;
	
 	cout << "Entre com 10 valores para ordenar\n";
 	for( int i = 0; i < 10; i++)
 	{
 		cin >> a[i];
 	}
 	
	cout << "\nDados inseridos:\n";
 	
	 for( int j = 0; j < 10; j++)
 	{
 		cout << "  " << a[j];
 	}
 	
 	for( int i = 0; i < 10; i++)
 	{
 		for( int j = 0; j < 10-i; j++)
 		{
 			if(a[j]>a[j+1])
 			{
 				temp=a[j];
 				a[j]=a[j+1];
 				a[j+1]=temp;
 			}
 		}
 	}
 	
 	cout<<"\nDados ordenados em modo crescente:\n ";
 	
 	for( int j = 0; j < 10; j++)
 	{
 		cout << "  " << a[j];
 	}
 	
 	return 0;
 }
