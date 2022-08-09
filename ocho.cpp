
/***********************************
*Autor: Carlos Andres Rojas Rocha
*Primer tarea de hpc
*fecha:10/8/2022
*Programa que calcula el numero de tarot 
***********************************/

#include <stdio.h>
#include <iostream>


void tarot(){
int tarot, dd, mm, yyyy, demas, res;
 	std::cout << "_______________________________________________" << std::endl;
	std::cout << "*  Programa que calcula el numero de tarot    *" << std::endl;
	std::cout << "_______________________________________________" << std::endl;
	/*Para emepzar a calcular el numero de tarot se pide la fecha de nacimiento*/
	std::cout << "Ingrese su dia de nacimiento: " << std::endl;
	std::cin >> dd;
	std::cout << "Ingrese el numero de su mes de nacimiento: " << std::endl;
	std::cin >> mm;
	std::cout << "Ingrese su año de nacimiento: " << std::endl;
	std::cin >> yyyy;
	/*Aca se implmentan las condiciones que puede tener una fecha valida*/
	if(dd<=31 and mm <=12 and mm>=1 and yyyy>=1900 and yyyy<=2022)
	{
	tarot=dd+mm+yyyy;
 	while (tarot > 9)
 	{
 	res = tarot;
 	tarot = 0;
 	do
 	{
 	/*el programa necesita separar el numero por decenas, centenas, unidades, etc. 
 	Cuando lo haya separado cuelve a repetir el procedimiendo de la suma, hasta 
 	que quede un numero inferioir a 9*/
 	demas = res % 10;
 	tarot += demas;
 	res = res / 10;
 	}
	 while (res != 0);
 	}
 	std::cout << "Su numero de Tarot es "<<tarot << std::endl;
	} else {
	std::cout << "Ingreso una fecha invalida"<< std::endl;
}

}

int main() {
	tarot();
return 0;
}
