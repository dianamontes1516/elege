#!/bin/python

# @author Diana Montes
# Programa que implementa el juego FizzBuzz
# Practica 0
for i in range(1,31):
  str = ''
  if(i % 3 == 0):
    str += 'Fizz'
  if(i % 5 == 0):
    str += 'Buzz'    
  if(not i % 3 == 0 or not i % 3 == 0)  :	
    str = i
  print str	
