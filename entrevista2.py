def string(caracteres):
	char_repetido = []									# Lista que contiene los caracteres repetidos
	nuevo_string = ""									# String que se generará sin los caracteres repetidos
	
	i = 0
	while i < len(caracteres):		 					# Bucle que recorre todo el string 
		j = i+1
		while j < len(caracteres):
			if caracteres[i] == caracteres[j]:		# Compara el i-ésimo caracter con todos los demás del string
				char_repetido.append(caracteres[i])	# Si encuentra que el primer caracter está repetido, lo agrega a la lista y	
				break								# sale del bucle
			j += 1									# Si el i-ésimo caracter no se encuentra repetido, pasa a comparar el
													# (i+1)-ésimo con el resto del string
		#print("hola")
		i += 1
	
	nuevo_string = ''.join(k for k in caracteres if k not in char_repetido)
	return(nuevo_string)


print(string("abcadae"))
print(string("elefante"))