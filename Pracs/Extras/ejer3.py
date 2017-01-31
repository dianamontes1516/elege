#!/usr/bin/python3
import random as r

# Se generan contraseñas "seguras"
# Cuyas características es que tengan
# mayúsculas,  minúsculas, caracteres especiales y
# un caracteres numéricos.
# La longitud es de 12 caracteres
def passSegura():
    p = ''
    for i in range(12):
        p+=chr(r.randint(33,126))
    #Si ambos operandos son enteros  se regresa el resultado de la suma    
    return p

def main():
    print( "La suma de los dígitos es: " + passSegura())
    
if __name__ == "__main__":
    main()
    
