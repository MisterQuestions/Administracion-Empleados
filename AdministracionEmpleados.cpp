#include "AdministracionEmpleados.h"

list<Empleado> empleados;
list<Empleado>::iterator iteradorEmpleados;

void AdministracionEmpleados::Ingresar()
{
	/* Titulo */
	cout << "*** REGISTRAR UN NUEVO EMPLEADO ***" << endl;

	/* Solicitar datos */
	string nombre;
	cout << "Nombre: ";
	getline(cin, nombre);

	string apellidoPaterno;
	cout << "Apellido paterno: ";
	getline(cin, apellidoPaterno);

	string apellidoMaterno;
	cout << "Apellido materno: ";
	getline(cin, apellidoMaterno);

	string RFC;
	cout << "RFC: ";
	getline(cin, RFC);

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
	char confirmar;
	cout << endl << "¿Los datos ingresados son correctos? (S/N): ";
	cin >> confirmar;

	if ((confirmar != 's') && (confirmar != 'S'))
	{
		cout << "Vuelva a ingresar todos los datos" << endl;
		return;
	}

	/* Generar empleado */
	Empleado nuevo = Empleado((int)empleados.size() + 1, nombre, apellidoPaterno, apellidoMaterno, RFC, fechaIngreso);

	/* Almacenar */
	empleados.push_back(nuevo);
}

void AdministracionEmpleados::Buscar()
{
	/* Titulo */
	cout << "*** BUSCAR EMPLEADO ***" << endl;

	/* Actuar en caso de que no haya nadie */
	if (empleados.empty())
	{
		cout << "No hay ningún empleado registrado" << endl;
		return;
	}

	/* Solicitar un RFC */
	string RFC;
	cout << "Ingrese el RFC del empleado a buscar: ";
	getline(cin, RFC);
	cout << endl;

	/* Empezar a buscar */
	int cuenta = 0;

	for (iteradorEmpleados = empleados.begin(); iteradorEmpleados != empleados.end(); iteradorEmpleados++)
	{
		size_t found = iteradorEmpleados->ObtenerRFC().find(RFC);
		
		if (found != string::npos)
		{
			cout << "Resultado #" << ++cuenta << endl;
			cout << "Nombre: " << iteradorEmpleados->ObtenerNombre() << endl;
			cout << "Apellido paterno: " << iteradorEmpleados->ObtenerApellidoPaterno() << endl;
			cout << "Apellido materno: " << iteradorEmpleados->ObtenerApellidoMaterno() << endl;
			cout << "RFC: " << iteradorEmpleados->ObtenerRFC() << endl;
			cout << "Año de ingreso: " << iteradorEmpleados->ObtenerFechaIngreso() << endl;
			cout << endl;
		}
	}

	if (cuenta == 0)
	{
		cout << "No se encontró a ningun empleado con los datos ingresados" << endl;
	}
}

void AdministracionEmpleados::Eliminar()
{
	/* Titulo */
	cout << "*** BUSCAR EMPLEADO ***" << endl;

	/* Actuar en caso de que no haya nadie */
	if (empleados.empty())
	{
		cout << "No hay ningún empleado registrado" << endl;
		return;
	}

	/* Solicitar un RFC */
	string RFC;
	cout << "Ingrese el RFC del empleado a eliminar: ";
	getline(cin, RFC);
	cout << endl;

	/* Empezar a buscar */
	bool encontrado = false;

	for (iteradorEmpleados = empleados.begin(); iteradorEmpleados != empleados.end(); iteradorEmpleados++)
	{
		if (iteradorEmpleados->ObtenerRFC() == RFC)
		{
			encontrado = true;
			empleados.erase(iteradorEmpleados);
			cout << "Empleado eliminado" << endl;
			break;
		}
	}

	if (!encontrado)
	{
		cout << "No se encontró a ningun empleado con los datos ingresados" << endl;
	}
}

void AdministracionEmpleados::Enlistar(string orden)
{
	/* Titulo */
	cout << "*** LISTA DE EMPLEADOS ***" << endl;

	/* Actuar en caso de que no haya nadie */
	if (empleados.empty())
	{
		cout << "No hay ningún empleado registrado" << endl;
		return;
	}

	/* Ordenar */
	if (orden == "Ninguno")
	{
		empleados.sort(OrdenarID);
	}
	else if (orden == "RFC")
	{
		empleados.sort(OrdenarRFC);
	}
	else if (orden == "Apellidos")
	{
		empleados.sort(OrdenarApellidos);
	}
	else if (orden == "Ingreso")
	{
		empleados.sort(OrdenarIngreso);
	}

	/* Finalmente mostrar a todos */
	int cuenta = 0;

	for (iteradorEmpleados = empleados.begin(); iteradorEmpleados != empleados.end(); iteradorEmpleados++)
	{
		cout << "Empleado #" << ++cuenta << endl;
		cout << "Nombre: " << iteradorEmpleados->ObtenerNombre() << endl;
		cout << "Apellido paterno: " << iteradorEmpleados->ObtenerApellidoPaterno() << endl;
		cout << "Apellido materno: " << iteradorEmpleados->ObtenerApellidoMaterno() << endl;
		cout << "RFC: " << iteradorEmpleados->ObtenerRFC() << endl;
		cout << "Año de ingreso: " << iteradorEmpleados->ObtenerFechaIngreso() << endl;
		cout << endl;
	}
}

bool AdministracionEmpleados::OrdenarID(Empleado a, Empleado b)
{
	return (a.ObtenerID() < b.ObtenerID());
}

bool AdministracionEmpleados::OrdenarRFC(Empleado a, Empleado b)
{
	return (a.ObtenerRFC() < b.ObtenerRFC());
}

bool AdministracionEmpleados::OrdenarApellidos(Empleado a, Empleado b)
{
	return ((a.ObtenerApellidoPaterno() + " " + a.ObtenerApellidoMaterno() + " " + a.ObtenerNombre()) < (b.ObtenerApellidoPaterno() + " " + b.ObtenerApellidoMaterno() + " " + b.ObtenerNombre()));
}

bool AdministracionEmpleados::OrdenarIngreso(Empleado a, Empleado b)
{
	return (a.ObtenerFechaIngreso() < b.ObtenerFechaIngreso());
}
