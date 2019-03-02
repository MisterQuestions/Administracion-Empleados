#pragma once

#include "Empleado.h"
#include <list>
#include <iostream>

class AdministracionEmpleados
{
	public:
		static void Ingresar();
		static void Buscar();
		static void Eliminar();
		static void Enlistar(string orden);

		static bool OrdenarID(Empleado a, Empleado b);
		static bool OrdenarRFC(Empleado a, Empleado b);
		static bool OrdenarApellidos(Empleado a, Empleado b);
		static bool OrdenarIngreso(Empleado a, Empleado b);
};