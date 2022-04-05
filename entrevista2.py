"""
Función que recorre un string y retorna otro string sin los caracteres repetidos. Si hay un espacio, además cuenta la cantidad
de caracteres en cada palabra o conjunto de caracteres y retorna la cantidad de caracteres de la palabra más extensa.
"""

def string(caracteres):
	lista_palabras = []
	lista_strings = []

	lista_palabras = caracteres.split()					# Primero separo el string por espacios y almaceno cada palabra independiente

	for palabra in lista_palabras:						# Aplico el proceso para cada palabra independiente
		i = 0
		nuevo_string = ""								# String que se generará sin los caracteres repetidos
		char_repetido = []								# Lista que contiene los caracteres repetidos
	
		while i < len(palabra):		 					# Bucle que recorre toda la palabra 
			j = i+1
			while j < len(palabra):
				if palabra[i] == palabra[j]:			# Compara el i-ésimo caracter con todos los demás de la palabra
					char_repetido.append(palabra[i])	# Si encuentra que el i-ésimo caracter está repetido, lo agrega a la lista y	
					break								# sale del bucle
				j += 1									# Si el i-ésimo caracter no se encuentra repetido, pasa a comparar el
														# (i+1)-ésimo con el resto del string
			#print("hola")
			i += 1
		
		nuevo_string = ''.join(k for k in palabra if k not in char_repetido)	# Genera un nuevo string sin los caracteres repetidos para cada palabra
		lista_strings.append(nuevo_string)				# Almaceno cada nuevo string
	if len(lista_palabras) == 1:						# Si es solo una palabra, la retorna sin los caracteres repetidos
		return(lista_strings[0])
	else:
		return(max(len(pal) for pal in lista_strings))	# Si son varias, retorna la cantidad de caracteres no repetidos de la palabra más extensa



print(string("abcadae"))
print(string("fibonacci"))
print(string("hermosos ojos verds"))