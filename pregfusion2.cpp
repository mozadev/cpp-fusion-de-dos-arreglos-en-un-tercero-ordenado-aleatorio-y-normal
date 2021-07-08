#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <iomanip>
#include <Windows.h>
#include <time.h>

using namespace std;


void ingresadatos(int* n, int* vecNumeros)
{
	srand(time(NULL));
	for (int i = 0; i < *n; i++)
	{

		vecNumeros[i] = 1 + rand() % (99);
	}
}

void salidadatos(int* n, int* vecNumeros)
{
	for (int i = 0; i < *n; i++)
	{
		cout << vecNumeros[i] << " ";

	}
}

void ordenascendente(int* n, int* vecNumeros)
{

	float temp;
	cout << "numeros ordenados ascendentemente " << endl;

	for (int i = 0; i < *n - 1; i++)
	{
		for (int j = i + 1; j < *n; j++)
			if (vecNumeros[i] > vecNumeros[j])
			{
				temp = vecNumeros[i];
				vecNumeros[i] = vecNumeros[j];
				vecNumeros[j] = temp;

			}
	}
}



int main()
{
	int n;
	n = 10;

	int* vectorNumeros;
	vectorNumeros = new int[n];
	ingresadatos(&n, vectorNumeros);
	salidadatos(&n, vectorNumeros);
	ordenascendente(&n, vectorNumeros);
	cout << endl;
	salidadatos(&n, vectorNumeros);

	delete vectorNumeros;
	_getch();

}
