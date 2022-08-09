#include <stdio.h>
#include <iostream>
#include <math.h>

void sumatorio(){

float lim,x,y,resultado=0;
	std::cout << "__________________________________________________" << std::endl;
	std::cout << "  Programa para calcular sumatorio de una funcion" << std::endl;
	std::cout << "__________________________________________________" << std::endl;
	std::cout << "*                          1                      *" << std::endl;
	std::cout << "*                       ______                    *" << std::endl;
	std::cout << "*                        x+ay                     *" << std::endl;
	/*Se requiere ingresar dos numeros*/
	std::cout <<" Ingrese el limite del sumatorio: "<< std::endl;
	std::cin >> lim;
	std::cout <<" Ingrese el valor de x: "<< std::endl;
	std::cin >> x;
	std::cout <<" Ingrese el valor de y: "<< std::endl;
	std::cin >> y;
	std::cout << "_____________________________________________" << std::endl;
	/*Con la variable limite recogida anteroirmente, se limita el sumatorio*/
	for(int i=0; i<=lim; i++)
	{
	/*Se calculo cada resultado del sumatorio y se va a sumando al anterior*/
	resultado=resultado+(1/(x+(i*y)));
	}
	std::cout<<"El resultado del sumatorio de la funcion es "<<resultado<<std::endl;

}

int main(){
sumatorio();
return 0;
}
