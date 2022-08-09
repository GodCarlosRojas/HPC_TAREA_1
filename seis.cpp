/***********************************
*Autor: Carlos Andres Rojas Rocha
*Primer tarea de hpc
*fecha:10/8/2022
* Programa para calcular suma multiplos de 5
***********************************/

#include <stdio.h>
#include <iostream>
#include <math.h>
void fnx(int x)
{
if (x) printf("%d ", x);
}

void inicio(){
	int a,b, i, j=0;
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "  Programa para calcular suma multiplos de 5" << std::endl;
	std::cout << "_____________________________________________" << std::endl;
	/*Se requiere ingresar dos numeros*/
	std::cout <<" Ingrese el primer numero: "<< std::endl;
	std::cin >> a;
	std::cout <<" Ingrese el segundo numero: "<< std::endl;
	std::cin >> b;
	std::cout << "_____________________________________________" << std::endl;
	/*Aca se restringe que los numeros sean positivos y que a sea menor a b*/
		if(a>=0 and b>=0 and a<b){	
		for(i=a;i<=b;i++){
		if(i % 5 ==0){
		/*Aca se suman los numeros multiplos de 5*/
		j=j+i;
		}
		}std::cout<<"La suma de los numeros multiplo de 5 es "<<j<<std::endl;
	/*Aca se restringe que los numeros sean positivos y que b sea menor a a*/
		}if(a>=0 and b>=0 and b<a){	
		for(i=b;i<=a;i++){
		if(i % 5 ==0){
		/*Aca se suman los numeros multiplos de 5*/
		j=j+i;
		}
		}std::cout<<"La suma de los numeros multiplo de 5 es "<<j<<std::endl;
	/*Dado caso que el usuario ingrese un numero negativo se activa esta*/
		}if(a<0 and b<0) {
		std::cout << "  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
		std::cout << "  No se aceptan numeros negativos" << std::endl;
		std::cout << " XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
	}
	
}

int main(){
	
	inicio();
	return 0;
}



