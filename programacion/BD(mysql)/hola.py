import mysql.connector

conexion1=mysql.connector.connect(host="localhost",port=3307, user="root", passwd="",database="Alumnos")
cursor1=conexion1.cursor()

''' insertar datos
    sql="insert into hola(descripcion, precio) values (%s,%s)"
    datos=("naranjas", 23.50)
    cursor1.execute(sql, datos)
    datos=("peras", 34)
    cursor1.execute(sql, datos)
    datos=("bananas", 25)
    cursor1.execute(sql, datos)
    conexion1.commit()
    conexion1.close() 
'''

#imprimir datos
''''
cursor1.execute("select id, descripcion, precio from hola")
for fila in cursor1:
    print(fila)
conexion1.close() 

delete
cursor1.execute("delete from hola where id=1")
conexion1.commit()
'''







