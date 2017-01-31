#!/usr/bin/python3
import re, sys

# Se valida que los parámetros pasados a la
# función sean enteros mediante una expresión regular
def suma(n, m):
    if re.match("^[+|-]?[0-9]+$",n,0) :
        n = int(n)
    else:
        print( n+" no es un entero")
        sys.exit(1)
    if re.match("^[+|-]?[0-9]+$",m,0) :
        m = int(m)
    else:
        print(m+" no es un entero")
        sys.exit(1)
    #Si ambos operandos son enteros  se regresa el resultado de la suma    
    return n+m

def main():
    v1 = input("Ingresa operando 1: ") 
    v2 = input("Ingresa operando 2: ") 
    print( suma(v1,v2))
    
if __name__ == "__main__":
    main()
    
