// -*- mode: c++ -*-

#ifndef LED_H_INCLUIDO
#define LED_H_INCLUIDO

// --------------------------------------------------------------
//
// Andrey Kuzmin
// 2021-18-09
//
// --------------------------------------------------------------

// ----------------------------------------------------------
// ----------------------------------------------------------
 /**
 * La descripción de esperar. Funcion que ponbe en espera el led.
 *
 * @param tiempo valor long.
 */
void esperar (long tiempo) {
  delay (tiempo);
}

// ----------------------------------------------------------
// ----------------------------------------------------------
class LED {
private:
  int numeroLED;
  bool encendido;
public:

  // .........................................................
  // .........................................................
  LED (int numero)
	: numeroLED (numero), encendido(false)
  {
	pinMode(numeroLED, OUTPUT);
	apagar ();
  }

  // .........................................................
  // .........................................................
   /**
 * La descripción de encender. Funcion que enciende la placa.
 *
 */
  void encender () {
	digitalWrite(numeroLED, HIGH); 
	encendido = true;
  }

  // .........................................................
  // .........................................................
   /**
 * La descripción de apagar. Funcion que apaga la placa.
 *
 */
  void apagar () {
	  digitalWrite(numeroLED, LOW);
	  encendido = false;
  }

  // .........................................................
  // .........................................................
  /**
 * La descripción de alternar. Funcion apaga o enciende la placa.
 *
 */
  void alternar () {
	if (encendido) {
	  apagar();
	} else {
	  encender ();
	}
  } // ()

  // .........................................................
  // .........................................................
   /**
 * La descripción de brillar. Funcion que apaga y enciende la placa con un retraso del tiempo que le pasamos a la funcion.
 * 
 * @param tiempo valor long.
 *
 */
  void brillar (long tiempo) {
	encender ();
	esperar(tiempo); 
	apagar ();
  }
}; // class

// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
// ----------------------------------------------------------
#endif
