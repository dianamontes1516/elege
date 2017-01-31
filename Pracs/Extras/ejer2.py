#!/usr/bin/python3
import re, sys

# Se valida que el parámetro sea un entero
# entre 10 y 99.
# y se regresa la suma de sus dígitos
def sumaDigitos(n):
    if re.match("^[0-9]+$",n,0) :
        m = int(n)
    else:
        print( n+" no es un entero")
        sys.exit(1)
    if(not (10 <= m <= 99)):
        print( n+" no está entre 10 y 99")
        sys.exit(1)

    ac = 0;    
    for i in n :
        ac+=int(i)
    #Si ambos operandos son enteros  se regresa el resultado de la suma    
    return ac

def main():
    v1 = input("Ingresa entero de dos dígidos: ") 
    print( "La suma de los dígitos es: " +str(sumaDigitos(v1)))
    
if __name__ == "__main__":
    main()
    
