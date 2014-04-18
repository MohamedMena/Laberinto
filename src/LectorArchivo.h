/******************************************************************************
 *                                                                            *
 *                      Definición clase LectorArchivo                        *
 *                                                                            *
 ******************************************************************************/

#include "tipos.h"


class LectorArchivo{
private:
	string ruta, nombre, linea;
	Tarchivo* archivo;

public:
	/* pre: El nombre y la ubicación del archivo se suponen válidos.
	 * post: Deja inicializado "linea" con la primer linea del archivo, 
	 * 		"nombre" con el nombre del archivo y "ruta" con la ubicación del 
	 * 		archivo.
	 *		Apunta "ptrArchivo" al archivo de texto.
	 */
	LectorArchivo(string ruta, string nombre);
	/* Destructor.
	 */
	~LectorArchivo();

	/* post: Devuelve la la ubicación del archivo de texto.
	 */
	string getRuta();

	/* pre:
	 * post: Devuelve el nombre del archivo de texto.
	 */
	string getNombre();
	/* pre: el archivo debe estar abierto para lectura.
	 * post: devuelve el texto contenido en la linea actual y deja apuntada la 
	 * 		siguiente linea.
	 */
	string getLinea();
};
