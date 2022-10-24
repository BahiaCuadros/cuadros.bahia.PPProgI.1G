//============================================================================
// Name        : 1Parcial.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
float aplicarAumento (float precio);

int main() 
{
	setbuf(stdout,NULL);
float pesos;
pesos = 500;
float valorfinal;
valorfinal= (aplicarAumento(pesos));
printf("\nprecio: %f\nprecio final:%f",pesos,valorfinal);

}

float aplicarAumento (float precio)
{
precio = precio*1.5;
return precio;
}
