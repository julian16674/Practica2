/*
* Autores: Diego F. Gonzalez, Julian Rico Millan, Julian Ruiz
* Descripcion: Programa que eleva al cuadrado el valor dentro de un puntero
* Fecha: 26 de Abril
*/


#include <iostream>
#include <vector>

using namespace std;

void modificar(int * &prt)
{
	for(int i = 0; i < 1 ; i++)
	{
		prt[i] = prt[i]*prt[i];
	}		
}


int main()
{
	int * prtVariable = 0;
	int entero1 = 100;
	prtVariable = &entero1;
	
	modificar(prtVariable);
	
	int entero2 = 300;
	prtVariable = &entero2;
	
	modificar(prtVariable);
	
	cout<< " "<<entero1<<" ,"<<entero2<<endl;
}


