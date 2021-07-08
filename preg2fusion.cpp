#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <iomanip>
#include <Windows.h>
using namespace std;


void ingresadatos(int* n, int* vecNumeros, int* vectorNumeros2)
{
	srand(time(NULL));
	for (int i = 0; i < *n; i++)
	{
		
		 vecNumeros[i]= 1 + rand() % (99);
		 vectorNumeros2[i] = 1 + rand() % (99);
	}
}

void salidadatos(int* n, int* vecNumeros, int * vectorNumeros2)
{
	for (int i = 0; i < *n; i++)
	{
		cout << vecNumeros[i] << " ";

	}
	cout << endl;
	for (int i = 0; i < *n; i++)
	{
		cout << vectorNumeros2[i] << " ";

	}
}


void union2arreglos(int* n2, int* n, int* vecNumeros, int* vectorNumeros2, int* vectorNumeros3)
{

	float temp;
	cout << "union de los dos arreglos " << endl;

	for (int i = 0; i < *n; i++)
	{
		vectorNumeros3[i] = vecNumeros[i];
	}
	for (int j =*n; j < *n2; j++)
	{
		
		vectorNumeros3[j] = vectorNumeros2[j-10];
	}
	
}




void ordenascendente(int* n2, int* vectorNumeros3)
{


	float temp;
	cout << "vector resulante ordenados ascendentemente " << endl;

	for (int i = 0; i < *n2 - 1; i++)
	{
		for (int j = i + 1; j < *n2; j++)
			if (vectorNumeros3[i] > vectorNumeros3[j])
			{
				temp = vectorNumeros3[i];
				vectorNumeros3[i] = vectorNumeros3[j];
				vectorNumeros3[j] = temp;

			}
	}


}


void salidadatosfinal(int* n, int* vecNumeros3)
{
	for (int i = 0; i < *n; i++)
	{
		cout << vecNumeros3[i] << " ";

	}

}


int main()
{
	int n;
	n = 10;
	int n2;
	n2 = 20;

	int* vectorNumeros;
	int* vectorNumeros2;
	int* vectorNumeros3;
	vectorNumeros = new int[n];
	vectorNumeros2 = new int[n];
	vectorNumeros3 = new int[20];
	ingresadatos(&n, vectorNumeros,vectorNumeros2);
	salidadatos(&n, vectorNumeros, vectorNumeros2);
	cout << endl;
	union2arreglos(&n2, &n, vectorNumeros, vectorNumeros2, vectorNumeros3);
	ordenascendente(&n2, vectorNumeros3);
	cout << endl;
	salidadatosfinal(&n2, vectorNumeros3);
	
	delete vectorNumeros;
	delete vectorNumeros2;
	delete vectorNumeros3;
	_getch();

}