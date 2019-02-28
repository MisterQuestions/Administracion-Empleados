#pragma once

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
		Empleado(int * id,const char * nombre, const char * apellidoPaterno, const char * apellidoMaterno, const char * RFC, int * fechaIngreso);

		const char * ObtenerNombre();
		const char * ObtenerApellidoPaterno();
		const char * ObtenerApellidoMaterno();
		const char * ObtenerRFC();
		int * ObtenerFechaIngreso();
};