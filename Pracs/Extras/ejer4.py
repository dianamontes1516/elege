#!/usr/bin/python3
import re, sys

# Se valida que el parámetro sea un entero
# entre 1 y 8.
# y se regresa el entero más grande con n número de
# dígitos.
def masGrande(n):
    if re.match("^[1-8]{1}$",n,0) :
        m = int(n)
    else:
        print( n+" no es un entero")
        sys.exit(1)
    ac ='';
    for i in range(m) :
        ac+='9'
    #Si ambos operandos son enteros  se regresa el resultado de la suma    
    return ac

def main():
    v1 = input("Ingresa el número de dígitos, entre 1 y 8: ") 
    print( "El entero más grande con esos dígitos es: " + masGrande(v1))
    
if __name__ == "__main__":
    main()
    
