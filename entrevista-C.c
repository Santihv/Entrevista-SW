/*
Recibe una string sin espacios, lo recorre y compara cada uno de los caracteres. La funcion retorna el indice del primer caracter
no repetido en el string. Si no hay caracteres repetidos, retorna un -1.
*/

#include <stdio.h>			
#include <string.h>
#include <stdbool.h>

int string_func(char *palabra);

int main(void) {

  //char word[] = "alphabet";
  
  printf("%i", string_func("abcabc"));
  
  return(0);
}


int string_func(char *palabra){
	
	int c = 0;
	int d;
	bool repetido;
	
	while(c < strlen(palabra)){	
		d = 0;
		repetido = false;
		while(d < strlen(palabra)){
			if(d == c){
				d++;
			}
			if(palabra[d] == palabra[c]){
				repetido = true;
				break;
			}
			d++;
			if(d == strlen(palabra) && repetido == false){
				printf("hola");
				return(c);
			}
		}
		c++;
	}
	
	if(repetido == true){
		return(-1);
	}
}

	
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
