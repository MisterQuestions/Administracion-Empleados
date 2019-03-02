#include "Empleado.h"

Empleado::Empleado(int * id, const char * nombre, const char * apellidoPaterno, const char * apellidoMaterno, const char * RFC, int * fechaIngreso)
{
	this->id = id;
	this->nombre = nombre;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->RFC = RFC;
	this->fechaIngreso = fechaIngreso;
}

int * Empleado::ObtenerID()
{
	return this->id;
}

const char * Empleado::ObtenerNombre()
{
	return this->nombre;
}

const char * Empleado::ObtenerApellidoPaterno()
{
	return this->apellidoPaterno;
}

const char * Empleado::ObtenerApellidoMaterno()
{
	return this->apellidoMaterno;
}

const char * Empleado::ObtenerRFC()
{
	return this->RFC;
}

int * Empleado::ObtenerFechaIngreso()
{
	return this->fechaIngreso;
}
