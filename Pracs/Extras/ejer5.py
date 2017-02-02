#!/usr/bin/python3
import re, sys

# Cifrado del Cesár tuneado
# @param k int - número de posiciones que se van a
#                a recorrer la posición de las letras.
# @param m str - es el mensaje. Si e entonces está en plano
#                si no e, entonces está cifrado.
# @pram bool e - es la operación que se va a realizar sobre el
#                texto
def salveCesar(ks,m,e):
    if re.match("[0-9]+$",ks,0) :
        k = int(ks)
    else:
        print( ks+" no es un entero")
        sys.exit(1)
    inicio = ord('A')
    fin = ord('z')
    orden = fin - inicio
    mTuneado = '';

    k = k % orden
    
    ## Si queremos cifrar
    if e=='1' :
        for i in m :
            indice = ord(i)+k
            if indice > fin:
                indice = inicio + indice % fin
            mTuneado += chr(indice)
    elif e=='2':
        for i in m :
            indice = ord(i)-k
            if indice < inicio:
                indice = fin - (inicio - indice)
            mTuneado += chr(indice)

    else:
            print("No seas wey. Sólo hay dos opciones.")

    return mTuneado

def main():
    v1 = input("Ingresa la llave: ")
    v2 = input("Ingresa el mensaje: ")
    v3 = input("Esta en claro el mensaje: \n 1) Si \n 2) No \n")
    print( "Resultado: " + salveCesar(v1,v2,v3))
                                            
if __name__ == "__main__":
    main()
