#!/usr/bin/python3
import re, sys

# @param n int - número de puntos en la circunferencia
# @param m int - punto del que quiero buscar su pareja
# @param regresa -1 si no hay un punto radialmente opuesto a m
#  esto sucede cuando la  división de la circunderencia
# es entre número de puntos impares
def radialmenteOpuesto(ns,ms):
    if re.match("^[0-9]{1,2}$",ns,0) and re.match("^[0-9]{1,2}$",ms,0):
        n = int(ns)
        m = int(ms)
    else:
        print( ns+" o "+ms +"no son enteros")
        sys.exit(1)
    if(not (4 <= n <= 20) and not (0 <= m < n)):
        print(ns + " o " +ms+ "No cumplen que 4<=n<=20 y 0<=m<=n-1 ")
        sys.exit(1)

    espacios = 360/n
    if n % 2 :
        return -1
    return ((n/2 + m ) % n)


def main():
    v1 = input("Ingresa el número de puntos en la circunferencia: ") 
    v2 = input("Ingresa el m : ") 
    print( "Radialmente opuesto a " ,v2, " esta ",radialmenteOpuesto(v1,v2))
    
if __name__ == "__main__":
    main()
    
