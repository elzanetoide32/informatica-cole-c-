'''Realizar un programa que se puedan ingresar 10 números enteros y el programa calcule la suma de todos los
números.
for i in range(0,9,1):   
    num=input(f'ingrese el valor para el numero {i}')
    num+=num
print(num)'''

'''Realizar un programa que se puedan ingresar 10 números decimales y el programa calcule la media, mediana
y el promedio de todos ellos.
import statistics
import numpy as np
array=[0,0,0,0,0,0,0,0,0]
for i in range(0,9,1):
    array[i]=int(input(f'ingrese el numero {i} '))

suma=sum(array)
mediana = statistics.median(array)
media = np.mean(array)
print(f'el promedio es: {suma/10}')
print(f'la mediana es: {mediana}')
print(f'la media es: {media}')'''

'''Realizar un programa que se puedan ingresar 10 nombres de personas y el programa concatene todos los
textos.
nombre=[0,0,0,0,0,0,0,0,0]
for i in range(0,9,1):
    nombre[i]=str(input("ingrese su nombre"))
print(nombre[0]+" "+nombre[1]+" "+nombre[2]+" "+nombre[3]+" "+nombre[4]+" "+nombre[5]+" "+nombre[6]+" "+nombre[7]+" "+nombre[8]+" "+nombre[9])
'''

'''dada una lista de numero del 1 al 22 hay que recorrerla lista y sumar por separado los números
pares y los números impares.
numeros=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22]
par,impar=0
for a in numeros:
    if a%2==0:
        par+=1
    elif a%2!=0:
        impar+=1

print(f'hay {par} numeros pares y {impar} numeros impares')'''

'''realice un programa que imprima en pantalla los números del 20 al 0, uno a la vez.
for i in range(0,21,1):
    print(i)'''

'''examenes
Ejercicio 1:
Hacer un programa que lea dos números x e y, luego hacer la diferencia x - y; si la diferencia es menor o igual a
10, entonces escribir todos los número comprendidos entre y y x.

X=int(input("numero 1"))
Y=int(input("numero 2"))
B=X-Y
if(B<=10):
    for i in range(Y,X,1):
        print(i)
else:
    print("nada")
'''

'''
Ejercicio 2:
Hacer un programa que solicite al usuario que ingrese una fecha y calcule el día correspondiente del año.
Ejemplo, si se ingresa la fecha 31 12 1998, el número que se visualizará será 365.

dia=int(input("ingrese su fecha"))
mes=int(input("ingrese el mes"))
año=int(input("ingrese su año"))
final=0
if año % 4 == 0 and año % 100 == 0 and año % 400 == 0: #año es biciesto
    final+1
final+=(mes*30)+5
print(final)
'''
'''
Ejercicio 3:
Hacer un programa que convierta centímetros a pulgadas y libras a kilogramos.

cen=float(input("ingrese los centrimetros"))
lib=float(input("ingrese las libras"))
print(f'las pulgadas que tiene son: {cen*0.39}')
print(f'los kilogramos que tiene son: {lib*0.45}')
'''
'''
Ejercicio 4:
Hacer un programa que ayude a una empresa a incrementar los salarios de los trabajadores de la siguiente
manera:
Tipo de salario %
De 0 a $9 000
20%
De $9 000 a $15 000
10%
De $15 000 a $20 000
5%
Más de $20 000
3%

sal=int(input("ingrese el salario para incrementar"))
if sal>=0 | sal<=9000:
    print(f'el salario con un aumento del 20% que daria: {sal+(sal*0.2)}')
elif sal>9000 | sal<=15000:
    print(f'el salario con un aumento del 20% que daria: {sal+(sal*0.1)}')
elif sal>15000 | sal<=20000:
    print(f'el salario con un aumento del 20% que daria: {sal+(sal*0.05)}')
elif sal>20000:
    print(f'el salario con un aumento del 20% que daria: {sal+(sal*0.03)}')
'''
'''
Realiza un programa que escriba una tabla de dos columnas para la conversión entre las
temperaturas en grados Fahrenheit, comprendidas entre 0 ºF y 300 ºF, según incrementos
de 20 ºF y su equivalente en grados centígrados.

print("°F     °C")
for i in range(0,300,20):
    print(f'{i}     {(i-32)*5/9}')
'''

'''Realizar un programa que al ingresar las coordenadas de un punto en el plano (x,y) debe informar
si está en el cuadrante I, II, III o IV. Considerar la posibilidad de que se encuentren en los ejes.
A=1
while A:
    x=int(input ("ingrese el valor de x"))
    y=int(input("ingrese el valor de y"))

    if x>0 and y>0:
        print(f'las cordenadas {str(x)+","+str(y)+" "}estan en el cuadrante I')
    elif x>0 and y<0:
        print(f'las cordenadas {str(x)+","+str(y)+" "}estan en el cuadrante II')
    elif x<0 and y<0:
        print(f'las cordenadas {str(x)+","+str(y)+" "}estan en el cuadrante III')
    elif x<0 and y>0:
        print(f'las cordenadas {str(x)+","+str(y)+" "}estan en el cuadrante IV')
    else:
        print(f'las cordenadas {str(x)+","+str(y)+" "}estan sobre los ejes')
    A=int(input("ingrese 1 para continuar, 0 para salir"))
'''

'''
Crear un programa que pida al usuario 10 números enteros y luego los muestre en orden inverso (del último
al primero), usando "for".

lista =[]
for i in range(0,10,1):
    lista.append(int(input("ingrese un numero ")))
for i in range(9,0,-1):
    print(lista[i])

'''
'''
Crear un programa que pida al usuario 10 números y calcule su media y luego muestre los que están por
encima de la media.

numeros=[]
Num=[]
a=0
for i in range(0,10,1):
    numeros.append(int(input("ingrese un numero ")))
#calculo de la media
media=sum(numeros)/len(numeros)
print(f'la media es: {media}')
for i in range(0,10,1):
    if numeros[i]>media:
        print(f'el numero {numeros[i]} es mayor a la media')
'''
'''
Crear un programa que pida al usuario 10 números y calcule y muestre cual es el máximo y cuál es el mínimo
de los números.

lista =[]
for i in range(0,10,1):
    lista.append(int(input("ingrese un numero ")))
print(f'el numero maximo es: {max(lista)}')
print(f'el numero menor es {min(lista)}')
'''
'''
a=1
for i in range(10):
    for j in range(3):
        print(f'0', end=' ')
        a+=1
    print('')
'''
'''
Crear un programa que pida al usuario las notas de 20 alumnos que se deben guardar en una matriz de 3 x
10 y luego mostrar en pantalla las 20 notas ordenadas de menor a mayor.

En la primera columna hay que poner un id de alumno, en la segunda columna el apellido y nombre del
alumno y en la ultima columna ingresar la nota obtenida.

Por último, debe mostrar el menor valor, el mayor valor y el promedio

import random
Notas=[]
pe=[]
sum=0
for i in range(3):
    notas=[]
    notas.append(random.randint(1,100))   
    notas.append(input("apellido "))     
    notas.append(input("nombre "))
    for j in range(3):        
        notAlum=float(input(f'ingrese la nota {j} para el alumno {i} '))
        sum+=notAlum
        pe.append(notAlum)
        notas.append(notAlum)    
    Notas.append(notas)
    Notas.append(max(pe))
    Notas.append(min(pe))
    Notas.append(sum/3)


for nota in Notas:
    print(nota)
'''
'''
Ejercicio 29:
Crear un programa que te salude en función de la hora del día usando funciones.

import datetime

def obtener_saludo():
    hora_actual = datetime.datetime.now().hour

    if 0 <= hora_actual < 12:
        return "¡Buenos días!"
    elif 12 <= hora_actual < 18:
        return "¡Buenas tardes!"
    else:
        return "¡Buenas noches!"

def saludar():
    saludo = obtener_saludo()
    print(saludo)

saludar()
'''
'''
Ejercicio 30:
Crear un programa que puedas ingresar un numero de la tabla y luego usando funciones te
muestre toda la tabla por la pantalla.

def mostrar_tabla(numero):
    for i in range(1, 11):
        resultado = numero * i
        print(f"{numero} x {i} = {resultado}")

def main():
    numero = int(input("Ingresa un número: "))
    mostrar_tabla(numero)
main()
'''
'''
Ejercicio 31:
Crear un programa que puedas ingresar dos números y la función te devuelva el producto
entre ambos números.

def product(num1,num2):
    print(num1*num2)

def ingresar():
    A=int(input("ingrese el numero 1"))
    B=int(input("ingrese el numero 2"))
    product(A,B)
ingresar()
'''