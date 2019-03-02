#pragma once

#include <string>

using namespace std;

class Empleado
{
	private:
		int id;
		string nombre;
		string apellidoPaterno;
		string apellidoMaterno;
		string RFC;
		int fechaIngreso;

	public:
		Empleado(int id, string nombre, string apellidoPaterno, string apellidoMaterno, string RFC, int fechaIngreso);

		int ObtenerID();
		string ObtenerNombre();
		string ObtenerApellidoPaterno();
		string ObtenerApellidoMaterno();
		string ObtenerRFC();
		int ObtenerFechaIngreso();
};