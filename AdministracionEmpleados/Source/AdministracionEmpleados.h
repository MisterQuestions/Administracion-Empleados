#pragma once

#include <list>
#include "Empleado.h"

class AdministracionEmpleados
{
	private:
		std::list<Empleado> trabajadores;
		//std::list<Empleado>::iterator iterador;

	public:
		static void Ingresar();
		static void Buscar();
		static void Eliminar();
		static void Enlistar(const char * orden);
};