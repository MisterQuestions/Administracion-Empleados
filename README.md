# AdministracionEmpleados

## Program.cpp
Este archivo contiene el menú principal en donde se añade la posibilidad del uso de acentos con locale.h, se pone un color a la consola,
en un bucle/loop infinito se encuentra el menu, se limpia la consola cada inicio, se muestran las opciones, se solicita que seleccionen una,
se vuelve a limpiar la consola, se limpia cualquier entrada y se ignoran los caracteres "malos" para evitar posibles errores durante las opciones,
en el switch se atiende cada opción con la clase de "AdministracionEmpleados", al terminar la opcion se pausa y se vuelve al menu principal.

## Uso de this & operador flecha (->)
- En "Empleado" se hace uso de la palabra "this" que hace referencia al objeto con el que se está trabajando.
- El operador flecha se usa en conjunto con "this" ya que es un apuntador y nos permite acceder a las variables ó funciones de la clase.

## Empleado.h & Empleado.cpp
Esta clase nos sirve como un metodo de mantener a la mano los datos de los empleados que se van registrando, almacenamos: 
- ID: Un número creciente en base al total de empleados en la lista de "AdministracionEmpleados" + 1.
- Nombre.
- Apellido paterno.
- Apellido materno.
- RFC.
- Año de ingreso.

Como estos atributos son privados se crearon métodos/funciones para acceder a ellos.

## AdministracionEmpleados.h & AdministracionEmpleados.cpp
Esta clase tiene métodos estáticos (que pertenecen a la clase y no a un objeto específico)
También tiene la lista de "empleados" donde cada que ingresamos un nuevo empleado es almacenado ahí.
El iterador sirve para hacer las busquedas y enlistar los elementos de la lista.

En el método de ingresar primero se piden los datos (en el año de ingreso se valida con el cin.fail() para prevenir algun bucle infinito,
cin.clear() quita el estado de error y cin.ignore(numeric_limits<streamsize>::max(), '\n') descarta los caractéres "malos"), solicitamos una
confirmación de que todo es correcto, si es así entonces generamos un objeto de Empleado y se añade a la lista.

En el método de buscar se solicita el RFC o parte de a buscar, se hace un bucle de todos los empleados en la lista, si se encuentra alguna
coincidencia entonces lo muestra como resultado (ojo a ++cuenta que incrementa la variable y luego la muestra), en caso de que cuenta sea 0
significa que no encontramos a nadie.

En el método de eliminar es similar al de buscar con la diferencia de que hacemos una busqueda exacta, si encontramos el exacto entonces se
elimina de la lista, se muestra un mensaje y se termina el ciclo ya que no necesitamos más seguir en el.

En el método de enlistar se pide como argumento la ordenación de los elementos que será lo que se aplica primero para mostrar los datos
con el método .sort de la lista y pasando como argumento una función de ordenación la cual tiene como parametros un elemento A y un elemento B podemos tener nuestros datos ordenados facilmente
sin necesidad de hacer ciclos o cosas muy complejas, una vez ordenada simplemente se muestran.

Los métodos de ordenación son bastante claros, pero si queda duda al menos para la comparación de strins es tan facil como el uso de operadores
como mayor o menor que. Ejemplo: El RFC de a es menor que el de b.
Para la ordenación de Apellido paterno, materno y nombre es similar, basta con concatenar y hacer la comparación: (Del elemento A -> Apellido Paterno + Apellido Materno + Nombre) < (Del elemento B -> Apellido Paterno + Apellido Materno + Nombre).
