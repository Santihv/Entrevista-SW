/*
Crear una funcion que reciba un string sin espacios, lo recorra y compare cada uno de los caracteres. La funcion retorna el indice del primer caracter
no repetido en el string. Si todos los caracteres están repetidos, retorna un -1.
*/

#include <stdio.h>			
#include <string.h>								// Necesario para usar la funcion strlen()
#include <stdbool.h>							// Necesario para usar variables booleanas

int string_func(char *palabra);					// Define la funcion tipo entero y recibe la direccion base del string como argumento

int main(void) {

  //char word[] = "alphabet";
  
  printf("%i", string_func("abcabc"));
  
  return(0);
}


int string_func(char *palabra){
	
	int c = 0;									// c y d son contadores para recorrer el string
	int d;
	bool repetido;								// Bandera para saber si hay caracteres repetidos
	
	while(c < strlen(palabra)){					// El caracter c recorre el string completo
		d = 0;									// Es necesario inicializar d = 0 porque si no, el programa cree que la segunda a en "abcabc" no esta repetida
		repetido = false;						// Para cada caracter c se inicializa que no hay caracteres repetidos
		while(d < strlen(palabra)){				// El caracter d recorre independientemente todo el string
			if(d == c){
				d++;							// Si d y c apuntan al mismo caracter, desplaza d porque si no, el programa cree que siempre hay caracteres repetidos
			}
			if(palabra[d] == palabra[c]){		// Si se encuentra un caracter repetido, se reinicia d rompiendo el ciclo, se desplaza c y se pone la bandera de repetido
				repetido = true;
				break;
			}
			d++;								// Si no son iguales, simplemente desplaza d
			if(d == strlen(palabra) && repetido == false){
				return(c);						// Si ya comparo el caracter c con todos los caracteres d y no hay repetidos, retorna el primer caracter no repetido
			}									// (el caracter c va primero que el d)
		}
		c++;									// Desplaza c si se encontro un caracter repetido
	}
	
	if(repetido == true){						// Si ya se recorrio todo el string y todos los caracteres estan repetidos (la bandera termino en alto)
		return(-1);								// retorna un -1
	}
}


// Primer codigo pensando durante la entrevista
	
/*
  for(int c = 0; c <= strlen(*palabra); c++){

    while(int d = c + 1; d <= strlen(*palabra);){

      if(palabra[d] == palabra[c]){
        break;
      }
    }
  return(-1);
  }
}*/
