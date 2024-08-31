#include <iostream>
#include <string>
using namespace std;

struct Papas{
	std::string nombrep;
	int cedulap;
	std::string nombrem;
	int cedulam;
};

struct Horario {
	std::string dia;
	int hora;
};

struct Notaf {
	float nota1;
	float nota2;
	float nota3;
	float notaf;
};

struct Materia {
	std::string nombrema;
	Horario Horario[1];
	Notaf notaf[1];
};

struct Estudiante {
	std::string nombre;
	int edad;
	int grado;
	Papas papas[1];
	Materia materia[3];
};

void agregar() {
	Estudiante estudiante[1];

	for (int i = 0; i < 1; i++) {

		cout << "ingrese el nombre del estudiante \n";
			cin >> estudiante[i].nombre;
		cout << "ingrese la edad del estudiante \n";
			std::cin >> estudiante[i].edad;
		cout << "ingrese el grado del estudiante \n";
			std::cin >> estudiante[i].grado;
		cout << "ingrese el nombre del papa \n";
			std::cin >> estudiante[i].papas[i].nombrep;
		cout << "ingrese el numero de cedula del papa \n";
			std::cin >> estudiante[i].papas[i].cedulap;
		cout << "ingrese el nombre de la mama \n";
			std::cin >> estudiante[i].papas[i].nombrem;
		cout << "ingrese el numero de cedula de la mama \n";
			std::cin >> estudiante[i].papas[i].cedulam;

			for (int j = 0; j < 3; j++) {
				cout << "ingrese el nombre de la materia \n";
					cin >> estudiante[i].materia[j].nombrema;
						for (int k = 0; k < 1; k++) {
							cout << "ingrese el valor de la primer nota \n";
								std::cin >> estudiante[i].materia[j].notaf[k].nota1;
							cout << "ingrese el valor de la segunda nota \n";
								std::cin >> estudiante[i].materia[j].notaf[k].nota2;
							cout << "ingrese el valor de la tercer nota \n";
								std::cin >> estudiante[i].materia[j].notaf[k].nota3;
						}
						for (int l = 0; l < 1; l++) {
							cout << "que dia te toca la materia \n";
								std::cin >> estudiante[i].materia[j].Horario[l].dia;
							cout << "ingrese la hora en que ve la materia \n";
								std::cin >> estudiante[i].materia[j].Horario[l].hora;
						}

		}
	}
}

void promedio() {

	Estudiante estudiante[1];

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				
				float nota = 0;

				nota += estudiante[i].materia[j].notaf[k].nota1 + estudiante[i].materia[j].notaf[k].nota2 + estudiante[i].materia[j].notaf[k].nota3;

				 float notaz = nota / 9;

					estudiante[i].materia[j].notaf[k].notaf = notaz;

				cout << "Promedio de : " << estudiante[i].nombre << ": " << notaz << " \n";
			}
		}
	}
}

void mostrar() {

	Estudiante estudiante[1];

	for (int i = 0; i < 1; i++) {
		cout << "Nombre: " << estudiante[i].nombre << " \n";
		cout << "edad: " << estudiante[i].edad << " \n";
		cout << "grado: " << estudiante[i].grado << " \n";
		cout << "nombre del padre: " << estudiante[i].papas[i].nombrep << "\n";
		cout << "nombre de la madre: " << estudiante[i].papas[i].nombrem << "\n";
		cout << "cedula del padre: " << estudiante[i].papas[i].cedulap << "\n";
		cout << "cedula de la madre: " << estudiante[i].papas[i].cedulam << "\n";
			for (int j = 0; j < 3; j++) {
				cout << "nombre de la materia: " << estudiante[i].materia[j].nombrema << "\n";
					for (int k = 0; k < 3; k++) {
						cout << "nota 1: " << estudiante[i].materia[j].notaf[k].nota1 << "\n";
						cout << "nota 2: " << estudiante[i].materia[j].notaf[k].nota2 << "\n";
						cout << "nota 3: " << estudiante[i].materia[j].notaf[k].nota3 << "\n";
					}
					for (int l = 0; l < 3; l++) {
						cout << "dia en que ve la materia: " << estudiante[i].materia[j].Horario[l].dia << "\n";
						cout << "hora donde ve la materia : " << estudiante[i].materia[j].Horario[l].hora << "\n";
					}
		}
	}
}
     
int main() {

	agregar();
	mostrar();
	promedio();
   std::cin.get();

	return 0;

}

