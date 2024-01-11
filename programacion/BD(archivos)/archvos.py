#importar datos
''''
datos=['6','258898','luca','perez','23/8/555']
import csv
with open('alumnos0.csv',newline='') as csvfile:
    spamreader= csv.reader(csvfile,delimiter=' ',quotechar='|')
    filas=list(spamreader)
    for row in spamreader:
        print(', '.join(row))
print(filas)
filas.append(datos)
print(filas)
'''
#exportar datos
''''
import csv
with open('alumnos0.csv','w',newline='') as csvfile:
    spamwriter= csv.writer(csvfile,delimiter=' ',quotechar='|',quoting=csv.QUOTE_MINIMAL)
    spamwriter.writerow(['Spam']*5+['Baked Beans'])
    spamwriter.writerow(['Spam','Lovely Spam','Wonderful Spam'])
'''
#docu. 14, sin crud
'''
import csv

while True:
    with open('alumnos0.csv', newline='') as csvfile:
        spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
        filas = list(spamreader)

    a = int(input("Ingrese 1 para leer y 2 para escribir: "))
    
    if a == 1:
        print("Archivo leído")
        print(filas)
    elif a == 2:
        print("ingrese los datos en orden: ")
        datos = [input("id del alumno: "), input("documento: "), input("nombre: "), input("apellido: "), input("fecha de nacimiento: ")]
        filas.append(datos)        
        with open('alumnos0.csv', 'w', newline='') as csvfile:
            spamwriter = csv.writer(csvfile, delimiter=',', quotechar=' ', quoting=csv.QUOTE_MINIMAL)
            spamwriter.writerows(filas)
            print("Datos escritos en el archivo.")
    else:
        print("Valor no válido, elija otro.")
        
    n = int(input("¿Desea repetir? Ingrese 1 para sí, 0 para no: "))
    if n == 0:
        break
'''
#con crud
import csv
while True:
    with open('alumnos0.csv', newline='') as csvfile:
        spamreader = csv.reader(csvfile, delimiter=' ', quotechar=' ')
        filas = list(spamreader)
    a=input("ingrese la opcion que desea C R U D: ")
    if a=='C':
        print("ingrese los datos en orden: ")
        datos = [input("id del alumno: "), input("documento: "), input("nombre: "), input("apellido: "), input("fecha de nacimiento: ")]
        filas.append(datos)        
        with open('alumnos0.csv', 'w', newline='') as csvfile:
            spamwriter = csv.writer(csvfile, delimiter=',', quotechar=' ', quoting=csv.QUOTE_MINIMAL)
            spamwriter.writerows(filas)
            print("Datos escritos en el archivo.")
    elif a=='R':
        print("Archivo leído")
        print(filas)
    elif a=='U':
        nuevos_datos = [input("id del alumno: "), input("documento: "), input("nombre: "), input("apellido: "), input("fecha de nacimiento: ")]
        fila_a_actualizar = None
        for idx, fila in enumerate(filas):
            if fila[0] == '6':
                fila_a_actualizar = idx
                break
        # Actualizar los valores en la fila
        if fila_a_actualizar is not None:
            filas[fila_a_actualizar] = nuevos_datos
        with open('alumnos0.csv', 'w', newline='') as csvfile:
            spamwriter = csv.writer(csvfile, delimiter=',', quotechar=' ', quoting=csv.QUOTE_MINIMAL)
            spamwriter.writerows(filas)
            print("Datos escritos en el archivo.")
    elif a=='D':
        fijos = ['id_alumno','documento','nombre','apellido','fecha_nacimiento']
        with open('alumnos0.csv', 'w', newline='') as csvfile:
            spamwriter = csv.writer(csvfile, delimiter=',', quotechar=' ', quoting=csv.QUOTE_MINIMAL)
            spamwriter.writerow(fijos)
            print("Datos borrados en el archivo.")
    else:
        print("Valor no válido, elija otro.")

    n=int(input("desea continuar? 0 para no"))
    if n==0:
        break
