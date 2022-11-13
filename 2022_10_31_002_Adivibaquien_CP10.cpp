// 2022_10_31_002_Adivibaquien_CP10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//// Daniel Callejas Rayón
// Programa que simule un adivina quien de personajes de marvel

#include <iostream>

int main() {
	bool respuesta = true;
	//hola
	//Primera pregunta
	std::cout << "Responde 0 para no y 1 para si\n";
	std::cout << "Tus personajes pueden ser Red Hulk, Hulk, la mole, Spiderman, Capitan America, US Agent, Coloso, Hercules, Capitana Marvel, Thor, Angel, Jessica Jones, El Lider, Mr Fantastico, Quicksilver, Daredevil, Kang el conquistador, Cable, Ironman, Dr octopus, Ultron, Vision,Antman, Mysterio, , Hawkeye, Punisher, Kingpin, Shang Chi, J.J.Jameson, Mary Jane, Foggy Nelson, Karen Page \n";
	std::cout << "Tu personaje tiene superpoderes?\n";
	std::cin >> respuesta;
	if (respuesta == true) {
		//Segunda pregunta
		std::cout << "Tu personaje tiene superfuerza?\n";
		std::cin >> respuesta;
		if (respuesta == true) {
			//Tercer preguntamnj
			std::cout << "Tu personaje tiene superpoderes superfuerza a traves de la radiacion?\n";
			std::cin >> respuesta;
			if (respuesta == true) {
				//Cuarta pregunta
				std::cout << "Fue a traves de la radiacion Gammma\n";
				std::cin >> respuesta;
				if (respuesta == true) {
					//quinta pregunta
					std::cout << "Tu personaje es rojo\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu personaje es Red Hulk";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Hulk";
					}
				}
				else {
					//quinta pregunta
					std::cout << "Fue a traves de la radiacion cosmica\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu persronaje es la mole";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Spiderman";
					}
				}

			}
			else {
				//	Cuarta pregunta
				std::cout << "Fue a traves de un suero?\n";
				std::cin >> respuesta;
				if (respuesta == true) {
					//quinta pregunta
					std::cout << "Fue durante la segunda guerra mundial\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Advina
						std::cout << "Tu personaje es el Capitan America";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es el US Agent";
					}
				}
				else {
					//quinta pregunta
					std::cout << "Es un mutante\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu personaje es Coloso";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es hercules";;
					}
				}
			}
		}
		else {
			//Tercer pregunta
			std::cout << "Tu personaje puede volar?\n";
			std::cin >> respuesta;
			if (respuesta == true) {
				//Cuarta pregunta
				std::cout << "Tu personaje puede viajar en el espacio\n";
				std::cin >> respuesta;
				if (respuesta == true) {
					//quinta pregunta
					std::cout << "Tu personaje de la tierra\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu personaje es Capitana Marvel";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Thor";
					}
				}
				else {
					//quinta pregunta
					std::cout << "Tu personaje tiene alas\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu persronaje es Angel";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Jessica Jones";
					}
				}

			}
			else {
				//	Cuarta pregunta
				std::cout << "Tiene es super inteligente?\n";
				std::cin >> respuesta;
				if (respuesta == true) {
					//quinta pregunta
					std::cout << "obtuvo la inteligencia despues de tner sus poderes \n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Advina
						std::cout << "Tu personaje es el Lider";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es el Mr Fantastico";
					}
				}
				else {
					//quinta pregunta
					std::cout << "Puede tiene supervelocidad\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu personaje es Quicksilver";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Daredevil";
					}
				}
			}
		}
	}
	else {
		//Segunda pregunta 
		std::cout << "Tu personaje tiene tecnologia avanzada?\n";
		std::cin >> respuesta;
		if (respuesta == true) {
			//Tercer pregunta
			std::cout << "Tu personaje usa armadura o tiene extremidades tecnologicas?\n";
			std::cin >> respuesta;
			if (respuesta == true) {
				//Cuarta pregunta
				std::cout << "Tu personaje es del futuro?\n";
				std::cin >> respuesta;
				if (respuesta == true) {
					//quinta pregunta
					std::cout << "Tu personaje es malvado?\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu personaje es Kang: el conquistador";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Cable";
					}
				}
				else {
					//quinta pregunta
					std::cout << "El personaje puede volar?\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu persronaje es Iron man";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Dr. Octopus";
					}
				}

			}
			else {
				//	Cuarta pregunta
				std::cout << "Tu personaje es un androide o robot?\n";
				std::cin >> respuesta;
				if (respuesta == true) {
					//quinta pregunta
					std::cout << "Tu personaje es malvado?\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Advina
						std::cout << "Tu personaje es Ultron";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Vision";
					}
				}
				else {
					//quinta pregunta
					std::cout << "Tu personaje puede encogerse\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu personaje es Antman";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Misterio";;
					}
				}
			}
		}
		else {
			//Tercer pregunta
			std::cout << "Tu personaje es un experto combatiente?\n";
			std::cin >> respuesta;
			if (respuesta == true) {
				//Cuarta pregunta
				std::cout << "Usa armas para el combate\n";
				std::cin >> respuesta;
				if (respuesta == true) {
					//quinta pregunta
					std::cout << "Tu personaje usa un arco\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu personaje es hawkeye";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Punisher";
					}
				}
				else {
					//quinta pregunta
					std::cout << "Tu personaje esta relacionado con los criminales en Nueva York\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Tu persronaje es Kingpin";
					}
					else {
						//Adivina
						std::cout << "Tu personaje es Shang Chi";
					}
				}

			}
			else {
				//	Cuarta pregunta
				std::cout << "Esta relacionado con Spiderman?\n";
				std::cin >> respuesta;
				if (respuesta == true) {
					//quinta pregunta
					std::cout << "Odia a Spiderman?\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Advina
						std::cout << "J.J.Jameson";
					}
					else {
						//Adivina
						std::cout << "Mary Jane";
					}
				}
				else {
					//quinta pregunta
					std::cout << "Es una abogado\n";
					std::cin >> respuesta;
					if (respuesta == true) {
						//Adivina
						std::cout << "Foggy Nelson";
					}
					else {
						//Adivina
						std::cout << "Karen Page";;
					}
				}
			}
		}
	}
}

