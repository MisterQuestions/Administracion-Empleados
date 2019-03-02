#include "AdministracionEmpleados.h"

void AdministracionEmpleados::Ingresar()
{
	/* Titulo */
	cout << "*** REGISTRO DE UN NUEVO EMPLEADO ***" << endl;

	/* Solicitar datos */
	char nombre[25];
	cout << "Nombre: ";
	cin >> nombre;

	char apellidoPaterno[10];
	cout << "Apellido paterno: ";
	cin >> apellidoPaterno;

	char apellidoMaterno[10];
	cout << "Apellido materno: ";
	cin >> apellidoMaterno;

	char RFC[15];
	cout << "RFC: ";
	cin >> RFC;

	int fechaIngreso;
	cout << "Año de ingreso (YYYY): ";
	cin >> fechaIngreso;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "La fecha indicada no es correcta" << endl;

		return;
	}

	/* Confirmar los datos */
	cout << endl << "*** CONFIRME LOS DATOS ***" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido paterno: " << apellidoPaterno << endl;
	cout << "Apellido materno: " << apellidoMaterno << endl;
	cout << "RFC: " << RFC << endl;
	cout << "Año de ingreso: " << fechaIngreso << endl;

	char confirmar;
	cout << "¿Los datos ingresados son correctos? (S/N): ";
	cin >> confirmar;

	if ((confirmar != 's') && (confirmar != 'S'))
	{
		cout << "Vuelva a ingresar todos los datos" << endl;
		return;
	}

	//cout << "ID: " << ((int) trabajadores.size() + 1) << endl;

	/* Crear objeto de empleado */
	Empleado nuevo = Empleado((int)trabajadores.size(), nombre, apellidoPaterno, apellidoPaterno, RFC, &fechaIngreso);

	/* Agregar a la lista de empleados */
	trabajadores.push_back(nuevo);
}

void AdministracionEmpleados::Buscar()
{

}

void AdministracionEmpleados::Eliminar()
{

}

void AdministracionEmpleados::Enlistar(const char * orden)
{

}
