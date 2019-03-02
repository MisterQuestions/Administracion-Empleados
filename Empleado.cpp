#include "Empleado.h"

Empleado::Empleado(int id, string nombre, string apellidoPaterno, string apellidoMaterno, string RFC, int fechaIngreso)
{
	this->id = id;
	this->nombre = nombre;
	this->apellidoPaterno = apellidoPaterno;
	this->apellidoMaterno = apellidoMaterno;
	this->RFC = RFC;
	this->fechaIngreso = fechaIngreso;
}

int Empleado::ObtenerID()
{
	return this->id;
}

string Empleado::ObtenerNombre()
{
	return this->nombre;
}

string Empleado::ObtenerApellidoPaterno()
{
	return this->apellidoPaterno;
}

string Empleado::ObtenerApellidoMaterno()
{
	return this->apellidoMaterno;
}

string Empleado::ObtenerRFC()
{
	return this->RFC;
}

int Empleado::ObtenerFechaIngreso()
{
	return this->fechaIngreso;
}
