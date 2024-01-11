import random
import tkinter as tk
from functools import partial
from PIL import Image, ImageTk
from tkinter import messagebox 
puntos = 0  # Inicializa el contador de puntos
ventana = tk.Tk()
def crear_tablero(filas, columnas, minas):
    # Crea un tablero vacío
    tablero = [[' ' for _ in range(columnas)] for _ in range(filas)]
    # Coloca las minas aleatoriamente en el tablero
    for _ in range(minas):
        fila = random.randint(0, filas - 1)
        columna = random.randint(0, columnas - 1)
        tablero[fila][columna] = '*'

    return tablero
def contar_minas_cercanas(tablero, fila, columna):
    # Verifica el número de minas cercanas a una posición dada en el tablero
    filas = len(tablero)
    columnas = len(tablero[0])
    minas_cercanas = 0

    for i in range(-1, 2):
        for j in range(-1, 2):
            if 0 <= fila + i < filas and 0 <= columna + j < columnas:
                if tablero[fila + i][columna + j] == '*':
                    minas_cercanas += 1

    return minas_cercanas

def mostrar_tablero(tablero):
    # Muestra el tablero actual en la consola
    filas = len(tablero)
    columnas = len(tablero[0])

    print('Tablero:')
    for i in range(filas):
        for j in range(columnas):
            print(tablero[i][j], end=' ')
        print()

def cargar_imagen(ruta):
    imagen = Image.open(ruta)
    imagen = imagen.resize((30, 30))  # Ajusta el tamaño de la imagen según tus necesidades
    imagen = ImageTk.PhotoImage(imagen)
    return imagen

def crear_interfaz(filas, columnas, minas):
    tablero = crear_tablero(filas, columnas, minas)
    ventana.title('Buscaminas')
    botones = []
    fondo_blanco = cargar_imagen('hola.jpg')
    imagen_mina = cargar_imagen('mina.jpeg')  # Cambia 'mina.png' a la imagen que desees para las minas

    for i in range(filas):
        fila_botones = []
        for j in range(columnas):
            casilla = tk.Button(ventana, image=fondo_blanco)
            casilla.grid(row=i, column=j)
            casilla.config(command=partial(revelar_casilla, tablero, botones, i, j, casilla, imagen_mina))
            fila_botones.append(casilla)
        botones.append(fila_botones)

    ventana.mainloop()

def revelar_casilla(tablero, botones, fila, columna, casilla, imagen_mina):
    global puntos
    if tablero[fila][columna] == '*':
        casilla.config(image=imagen_mina)
        casilla.config(text='')  # Elimina el texto actual
        puntos -= 1  # Resta puntos cuando se toca una mina
        casilla.after(1000, lambda: mostrar_mensaje_perdiste(puntos))
    else:
        minas_cercanas = contar_minas_cercanas(tablero, fila, columna)
        tablero[fila][columna] = str(minas_cercanas)
        puntos += 1  # Suma puntos por cada casilla segura
        casilla.config(image='', text=str(minas_cercanas), bg='lightgray')

def mostrar_mensaje_perdiste(puntos):
    mensaje = f'¡Has perdido {name}!\n\nPuntos acumulados: {puntos}'
    messagebox.showinfo('Game Over', mensaje)
    ventana.destroy()
    
name=input("ingrese su nombre: ")
crear_interfaz(10, 10, 20)