#include <stdio.h>
#include <iostream>
#include <math.h>

void peaje(){
	int eleccion=0, km, tm, paga;
	std::cout << "_______________________________________________" << std::endl;
	std::cout << "*              Programa Peaje                 *" << std::endl;
	std::cout << "_______________________________________________" << std::endl;
	std::cout << "Ingrese el numero que se acomode a su vehiculo" << std::endl;
	std::cout << "*                1.Bicicleta                  *" << std::endl;
	std::cout << "*                2. Moto                      *" << std::endl;
	std::cout << "*                3. Coche                     *" << std::endl;
	std::cout << "*                4. Camion                    *" << std::endl;
	std::cin >> eleccion;
	/*Se necesita conocer que vehiculo maneja el vlietnte, por loq ues se debe elegir una de las opciones*/
	/*Cada uno de los casos tiene sus propias caracteristicas como se piden en el ejercicio*/
	switch (eleccion){
		case 1:
			std::cout << "_______________________________________________" << std::endl;
			std::cout << "El ciclista debe pagar 100 unidades" << std::endl;
			std::cout << "_______________________________________________" << std::endl;
			break;
		case 2:
			std::cout << "_______________________________________________" << std::endl;
			std::cout << "Ingrese cuantos kilometro recorrio: " << std::endl;
			std::cin >> km;
			paga=km*30;
			std::cout << "El motociclista recorrio: " <<km<<" km por lo que debe pagar "<<paga<<" unidades"<< std::endl;
			std::cout << "____________________________________________________________________________________" << std::endl;
			break;			
		case 3:
			std::cout << "_______________________________________________" << std::endl;
			std::cout << "Ingrese cuantos kilometro recorrio: " << std::endl;
			std::cin >> km;
			paga=km*30;
			std::cout << "El conductor recorrio: " <<km<<" km por lo que debe pagar "<<paga<<" unidades"<< std::endl;
			std::cout << "____________________________________________________________________________________" << std::endl;
			break;	
		case 4:
			std::cout << "_______________________________________________" << std::endl;
			std::cout << "Ingrese cuantos kilometro recorrio: " << std::endl;
			std::cin >> km;
			std::cout << "Ingrese cuanto pesa: " << std::endl;
			std::cin >> tm;
			paga=(km*30)+(tm*25);
			std::cout << "El camioner recorrio " <<km<<" km y transporta un peso de "<<tm<< " Tm por lo que debe pagar "<<paga<<" unidades"<< std::endl;
		
			std::cout << "_____________________________________________________________________________________________" << std::endl;
		
			break;
			/*Dado caso de que se ingrese un valor invalido sale esta pestaña*/
		
		default:
		std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
		std::cout << "Ingreso una opcion invalida, vuelva a ingresar"<< std::endl;
		std::cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << std::endl;
		peaje();
		break;
	
	}

}

int main(){
	peaje();
return 0;
}

