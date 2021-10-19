
// -*- mode: c++ -*-

// --------------------------------------------------------------
//
// Andrey Kuzmin
// 2021-18-09
//
// --------------------------------------------------------------

#ifndef PUERTO_SERIE_H_INCLUIDO
#define PUERTO_SERIE_H_INCLUIDO

// ----------------------------------------------------------
// ----------------------------------------------------------
class PuertoSerie  {

public:
  // .........................................................
  // .........................................................
  /**
 * La descripción de PuertoSerie. Constructor de la clase.
 *
 */
  PuertoSerie (long baudios) {
	Serial.begin( baudios );
	// mejor no poner esto aquí: while ( !Serial ) delay(10);   
  } // ()

  // .........................................................
  // .........................................................
  /**
 * La descripción de esperarDisponible. Espera para disponibilidad de puerto.
 *
 */
  void esperarDisponible() {
	  delay(10);   
  } // ()

  // .........................................................
  // .........................................................
  /**
 * La descripción de escribir. Funcion que escribe en el monitor serie los datos.
 *
 * @param mensaje , stirng que queremos que se escriba en el puerto serie.
 */
  template<typename T>
  void escribir (T mensaje) {
	Serial.print( mensaje );
  } // ()
  
}; // class PuertoSerie

// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
