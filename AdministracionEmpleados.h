#pragma once

#include "Empleado.h"
#include <locale.h>
#include <stdlib.h>
#include <iostream>
#include <list>

class AdministracionEmpleados
{
	private:
		static list<Empleado> trabajadores;
		static list<Empleado>::iterator empleado;

	public:
		static void Ingresar();
		static void Buscar();
		static void Eliminar();
		static void Enlistar(const char * orden);
};