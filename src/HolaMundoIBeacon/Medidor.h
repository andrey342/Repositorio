// -*- mode: c++ -*-

#ifndef MEDIDOR_H_INCLUIDO
#define MEDIDOR_H_INCLUIDO


// --------------------------------------------------------------
//
// Andrey Kuzmin
// 2021-18-09
//
// --------------------------------------------------------------

// ------------------------------------------------------
// ------------------------------------------------------
class Medidor {

  // .....................................................
  // .....................................................
private:

public:

  // .....................................................
  // constructor
  // .....................................................
  Medidor(  ) {
  } // ()

  // .....................................................
  // .....................................................

  /**
 * La descripción de iniciarMedidor. Funcion que inica la obtencion de medidas.
 *
 */
  void iniciarMedidor() {
	// las cosas que no se puedan hacer en el constructor, if any
  } // ()

  // .....................................................
  // .....................................................

  /**
 * La descripción de medirCO2. Funcion que devuelve la medida de CO2.
 *
 * @returns int , medida de co2.
 */
  int medirCO2() {
	return 235;
  } // ()

  // .....................................................
  // .....................................................
   /**
 * La descripción de medirTemperatura. Funcion que devuelve la medida de temperatura.
 *
 * @returns int , medida de temperatura.
 */
  int medirTemperatura() {
	return -12; // qué dengue
  } // ()
	
}; // class

// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
// ------------------------------------------------------
#endif
