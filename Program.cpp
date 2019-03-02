#include <locale.h>
#include <stdlib.h>
#include "AdministracionEmpleados.h"

using namespace std;

int main()
{
	/* Idioma */
	setlocale(LC_CTYPE, "Spanish");

	/*  */
	system("color 0A");

	/* Menu */
	while (true)
	{
		/* Asegurar que esté limpia la consola */
		system("cls");

		/* Titulo */
		cout << "*** Administración de empleados" << endl;

		/* Opciones */
		cout << "1. Ingresar datos de un nuevo empleado." << endl;
		cout << "2. Buscar empleado por rfc" << endl;
		cout << "3. Eliminar empleado por rfc" << endl;
		cout << "4. Enlistar empleados" << endl;
		cout << "5. Enlistar empleados (ordenados por RFC)" << endl;
		cout << "6. Enlistar empleados (ordenados por apellido y nombre)" << endl;
		cout << "7. Enlistar empleados (ordenados por año de ingreso)" << endl;
		cout << "8. Salir del programa" << endl;

		/* Seleccion */
		char opcion;
		cout << "Selecciona una opción: ";
		cin >> opcion;

		/* Quitar el menu */
		system("cls");

		/* Asegurarse que no hay nada en el input */
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		/* Accion */
		switch (opcion)
		{
			case '1':
				AdministracionEmpleados::Ingresar();
				break;
			case '2':
				AdministracionEmpleados::Buscar();
				break;
			case '3':
				AdministracionEmpleados::Eliminar();
				break;
			case '4':
				AdministracionEmpleados::Enlistar("Ninguno");
				break;
			case '5':
				AdministracionEmpleados::Enlistar("RFC");
				break;
			case '6':
				AdministracionEmpleados::Enlistar("Apellidos");
				break;
			case '7':
				AdministracionEmpleados::Enlistar("Ingreso");
				break;
			case '8':
				exit(0);
			default:
				cout << "Opción inválida" << endl;
				break;
		}

		/* Volver al menu tras la pausa */
		system("pause");
	}

	/* Evitar que se cierre */
	system("pause");

	return 0;
}
