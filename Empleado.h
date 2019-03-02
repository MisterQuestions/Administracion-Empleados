#pragma once

using namespace std;

class Empleado
{
	private:
		int * id;
		const char * nombre;
		const char * apellidoPaterno;
		const char * apellidoMaterno;
		const char * RFC;
		int * fechaIngreso;

	public:
		Empleado(int * id, const char * nombre, const char * apellidoPaterno, const char * apellidoMaterno, const char * RFC, int * fechaIngreso);

		int * ObtenerID();
		const char * ObtenerNombre();
		const char * ObtenerApellidoPaterno();
		const char * ObtenerApellidoMaterno();
		const char * ObtenerRFC();
		int * ObtenerFechaIngreso();
};