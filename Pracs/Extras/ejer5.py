#!/usr/bin/python3
import re, sys

# Cifrado del Cesár tuneado
# @param k int - número de posiciones que se van a
#                a recorrer la posición de las letras.
# @param m str - es el mensaje. Si e entonces está en plano
#                si no e, entonces está cifrado.
# @pram bool e - es la operación que se va a realizar sobre el
#                texto
def salveCesar(k,m,e):
    if re.match("^[-]?[0-9]+$",k,0) :
        m = int(n)
    else:
        print( n+" no es un entero")

    inicio = ord('A')
    fin = ord('z')
    orden = fin - inicio

    k = 
    ## Si queremos cifrar
    if e :
        
    else:
    
    alfabeto = "ABCD"
    if(not (1 <= m <= 8)):
        print( n+" no está entre 1 y 8")
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
