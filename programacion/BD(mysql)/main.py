import mysql.connector

conexion1=mysql.connector.connect(host="localhost",port=3307, user="root", passwd="",database="Alumnos")
cursor1=conexion1.cursor()
Table='alums'
personas = [
    {
        "Nombre": "Juan",
        "Apellido": "Perez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1234567890,
        "Documento": 12345678,
        "Género": "Masculino",
        "Fecha de nacimiento": "01/01/1990"
    },
    {
        "Nombre": "María",
        "Apellido": "Gómez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 9876543210,
        "Documento": 87654321,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/05/1985"
    },
    {
        "Nombre": "Carlos",
        "Apellido": "González",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 600112233,
        "Documento": 11223344,
        "Género": "Masculino",
        "Fecha de nacimiento": "05/08/1980"
    },
    {
        "Nombre": "Ana",
        "Apellido": "López",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 611223344,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "12/03/1995"
    },
    {
        "Nombre": "Luis",
        "Apellido": "Martínez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 633445566,
        "Documento": 33445566,
        "Género": "Masculino",
        "Fecha de nacimiento": "20/11/1988"
    },
    {
        "Nombre": "Elena",
        "Apellido": "Rodríguez",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 655667788,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "18/07/1992"
    },
    {
        "Nombre": "Mario",
        "Apellido": "Sánchez",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "30/04/1987"
    },
    {
        "Nombre": "Laura",
        "Apellido": "Diaz",
        "Provincia": "Bogotá",
        "Localidad": "Bogotá",
        "Celular": 3001122333,
        "Documento": 11223344,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/09/1993"
    },
    {
        "Nombre": "Diego",
        "Apellido": "Gutierrez",
        "Provincia": "Medellín",
        "Localidad": "Medellín",
        "Celular": 3112233444,
        "Documento": 22334455,
        "Género": "Masculino",
        "Fecha de nacimiento": "05/12/1982"
    },
    {
        "Nombre": "Carla",
        "Apellido": "Fernandez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1133557799,
        "Documento": 77889900,
        "Género": "Femenino",
        "Fecha de nacimiento": "25/06/1990"
    },
    {
        "Nombre": "Ricardo",
        "Apellido": "Gomez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 3541234567,
        "Documento": 12345678,
        "Género": "Masculino",
        "Fecha de nacimiento": "03/04/1987"
    },
    {
        "Nombre": "Isabel",
        "Apellido": "Alvarez",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 601234567,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "12/09/1992"
    },
    {
        "Nombre": "Hector",
        "Apellido": "Ramirez",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 622233344,
        "Documento": 33445566,
        "Género": "Masculino",
        "Fecha de nacimiento": "20/05/1980"
    },
    {
        "Nombre": "Lucia",
        "Apellido": "Lopez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 6333444555,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/07/1995"
    },
    {
        "Nombre": "Felipe",
        "Apellido": "Santos",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "28/02/1984"
    },
    {
        "Nombre": "Marta",
        "Apellido": "Garcia",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 699988877,
        "Documento": 99887766,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/11/1990"
    },
    {
        "Nombre": "Andres",
        "Apellido": "Perez",
        "Provincia": "Bogotá",
        "Localidad": "Bogotá",
        "Celular": 3111222333,
        "Documento": 11223344,
        "Género": "Masculino",
        "Fecha de nacimiento": "14/03/1987"
    },
    {
        "Nombre": "Luisa",
        "Apellido": "Gutierrez",
        "Provincia": "Medellín",
        "Localidad": "Medellín",
        "Celular": 3000555444,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "05/12/1982"
    },
    {
        "Nombre": "Pedro",
        "Apellido": "Fernandez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1133557799,
        "Documento": 77889900,
        "Género": "Masculino",
        "Fecha de nacimiento": "25/06/1990"
    },
    {
        "Nombre": "Jorge",
        "Apellido": "Gomez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 3541234567,
        "Documento": 12345678,
        "Género": "Masculino",
        "Fecha de nacimiento": "03/04/1987"
    },
    {
        "Nombre": "Laura",
        "Apellido": "Alvarez",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 601234567,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "12/09/1992"
    },
    {
        "Nombre": "Pablo",
        "Apellido": "Ramirez",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 622233344,
        "Documento": 33445566,
        "Género": "Masculino",
        "Fecha de nacimiento": "20/05/1980"
    },
    {
        "Nombre": "Clara",
        "Apellido": "Lopez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 6333444555,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/07/1995"
    },
    {
        "Nombre": "David",
        "Apellido": "Santos",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "28/02/1984"
    },
    {
        "Nombre": "Carmen",
        "Apellido": "Garcia",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 699988877,
        "Documento": 99887766,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/11/1990"
    },
    {
        "Nombre": "Alejandro",
        "Apellido": "Perez",
        "Provincia": "Bogotá",
        "Localidad": "Bogotá",
        "Celular": 3111222333,
        "Documento": 11223344,
        "Género": "Masculino",
        "Fecha de nacimiento": "14/03/1987"
    },
    {
        "Nombre": "Sofia",
        "Apellido": "Gutierrez",
        "Provincia": "Medellín",
        "Localidad": "Medellín",
        "Celular": 3000555444,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "05/12/1982"
    },
    {
        "Nombre": "Daniel",
        "Apellido": "Fernandez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1133557799,
        "Documento": 77889900,
        "Género": "Masculino",
        "Fecha de nacimiento": "25/06/1990"
    },
    {
        "Nombre": "Silvia",
        "Apellido": "Gomez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 3541234567,
        "Documento": 12345678,
        "Género": "Femenino",
        "Fecha de nacimiento": "03/04/1987"
    },
    {
        "Nombre": "Javier",
        "Apellido": "Alvarez",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 601234567,
        "Documento": 22334455,
        "Género": "Masculino",
        "Fecha de nacimiento": "12/09/1992"
    },
    {
        "Nombre": "Marta",
        "Apellido": "Ramirez",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 622233344,
        "Documento": 33445566,
        "Género": "Femenino",
        "Fecha de nacimiento": "20/05/1980"
    },
    {
        "Nombre": "Jorge",
        "Apellido": "Lopez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 6333444555,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/07/1995"
    },
    {
        "Nombre": "Carolina",
        "Apellido": "Santos",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "28/02/1984"
    },
    {
        "Nombre": "Jose",
        "Apellido": "Garcia",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 699988877,
        "Documento": 99887766,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/11/1990"
    },
    {
        "Nombre": "Eduardo",
        "Apellido": "Perez",
        "Provincia": "Bogotá",
        "Localidad": "Bogotá",
        "Celular": 3111222333,
        "Documento": 11223344,
        "Género": "Masculino",
        "Fecha de nacimiento": "14/03/1987"
    },
    {
        "Nombre": "Andrea",
        "Apellido": "Gutierrez",
        "Provincia": "Medellín",
        "Localidad": "Medellín",
        "Celular": 3000555444,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "05/12/1982"
    },
    {
        "Nombre": "Fernando",
        "Apellido": "Fernandez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1133557799,
        "Documento": 77889900,
        "Género": "Masculino",
        "Fecha de nacimiento": "25/06/1990"
    },
    {
        "Nombre": "Natalia",
        "Apellido": "Gomez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 3541234567,
        "Documento": 12345678,
        "Género": "Femenino",
        "Fecha de nacimiento": "03/04/1987"
    },
    {
        "Nombre": "Raul",
        "Apellido": "Alvarez",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 601234567,
        "Documento": 22334455,
        "Género": "Masculino",
        "Fecha de nacimiento": "12/09/1992"
    },
    {
        "Nombre": "Ana",
        "Apellido": "Ramirez",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 622233344,
        "Documento": 33445566,
        "Género": "Femenino",
        "Fecha de nacimiento": "20/05/1980"
    },
    {
        "Nombre": "Roberto",
        "Apellido": "Lopez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 6333444555,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/07/1995"
    },
    {
        "Nombre": "Patricia",
        "Apellido": "Santos",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "28/02/1984"
    },
    {
        "Nombre": "Sergio",
        "Apellido": "Garcia",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 699988877,
        "Documento": 99887766,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/11/1990"
    },
    {
        "Nombre": "Cristina",
        "Apellido": "Perez",
        "Provincia": "Bogotá",
        "Localidad": "Bogotá",
        "Celular": 3111222333,
        "Documento": 11223344,
        "Género": "Masculino",
        "Fecha de nacimiento": "14/03/1987"
    },
    {
        "Nombre": "Miguel",
        "Apellido": "Gutierrez",
        "Provincia": "Medellín",
        "Localidad": "Medellín",
        "Celular": 3000555444,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "05/12/1982"
    },
    {
        "Nombre": "Susana",
        "Apellido": "Fernandez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1133557799,
        "Documento": 77889900,
        "Género": "Masculino",
        "Fecha de nacimiento": "25/06/1990"
    },
    {
        "Nombre": "Antonio",
        "Apellido": "Gomez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 3541234567,
        "Documento": 12345678,
        "Género": "Femenino",
        "Fecha de nacimiento": "03/04/1987"
    },
    {
        "Nombre": "Beatriz",
        "Apellido": "Alvarez",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 601234567,
        "Documento": 22334455,
        "Género": "Masculino",
        "Fecha de nacimiento": "12/09/1992"
    },
    {
        "Nombre": "Eduardo",
        "Apellido": "Ramirez",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 622233344,
        "Documento": 33445566,
        "Género": "Femenino",
        "Fecha de nacimiento": "20/05/1980"
    },
    {
        "Nombre": "Isabel",
        "Apellido": "Lopez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 6333444555,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/07/1995"
    },
    {
        "Nombre": "Luis",
        "Apellido": "Santos",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "28/02/1984"
    },
    {
        "Nombre": "Elena",
        "Apellido": "Garcia",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 699988877,
        "Documento": 99887766,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/11/1990"
    },
    {
        "Nombre": "Carlos",
        "Apellido": "Perez",
        "Provincia": "Bogotá",
        "Localidad": "Bogotá",
        "Celular": 3111222333,
        "Documento": 11223344,
        "Género": "Masculino",
        "Fecha de nacimiento": "14/03/1987"
    },
    {
        "Nombre": "María",
        "Apellido": "Gutierrez",
        "Provincia": "Medellín",
        "Localidad": "Medellín",
        "Celular": 3000555444,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "05/12/1982"
    },
    {
        "Nombre": "Juan",
        "Apellido": "Fernandez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1133557799,
        "Documento": 77889900,
        "Género": "Masculino",
        "Fecha de nacimiento": "25/06/1990"
    },
    {
        "Nombre": "Marcela",
        "Apellido": "Gomez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 3541234567,
        "Documento": 12345678,
        "Género": "Femenino",
        "Fecha de nacimiento": "03/04/1987"
    },
    {
        "Nombre": "Antonio",
        "Apellido": "Alvarez",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 601234567,
        "Documento": 22334455,
        "Género": "Masculino",
        "Fecha de nacimiento": "12/09/1992"
    },
    {
        "Nombre": "Rosa",
        "Apellido": "Ramirez",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 622233344,
        "Documento": 33445566,
        "Género": "Femenino",
        "Fecha de nacimiento": "20/05/1980"
    },
    {
        "Nombre": "Roberto",
        "Apellido": "Lopez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 6333444555,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/07/1995"
    },
    {
        "Nombre": "Patricia",
        "Apellido": "Santos",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "28/02/1984"
    },
    {
        "Nombre": "Sergio",
        "Apellido": "Garcia",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 699988877,
        "Documento": 99887766,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/11/1990"
    },
    {
        "Nombre": "Cristina",
        "Apellido": "Perez",
        "Provincia": "Bogotá",
        "Localidad": "Bogotá",
        "Celular": 3111222333,
        "Documento": 11223344,
        "Género": "Masculino",
        "Fecha de nacimiento": "14/03/1987"
    },
    {
        "Nombre": "Miguel",
        "Apellido": "Gutierrez",
        "Provincia": "Medellín",
        "Localidad": "Medellín",
        "Celular": 3000555444,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "05/12/1982"
    },
    {
        "Nombre": "Susana",
        "Apellido": "Fernandez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1133557799,
        "Documento": 77889900,
        "Género": "Masculino",
        "Fecha de nacimiento": "25/06/1990"
    },
    {
        "Nombre": "Antonio",
        "Apellido": "Gomez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 3541234567,
        "Documento": 12345678,
        "Género": "Femenino",
        "Fecha de nacimiento": "03/04/1987"
    },
    {
        "Nombre": "Beatriz",
        "Apellido": "Alvarez",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 601234567,
        "Documento": 22334455,
        "Género": "Masculino",
        "Fecha de nacimiento": "12/09/1992"
    },
    {
        "Nombre": "Eduardo",
        "Apellido": "Ramirez",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 622233344,
        "Documento": 33445566,
        "Género": "Femenino",
        "Fecha de nacimiento": "20/05/1980"
    },
    {
        "Nombre": "Isabel",
        "Apellido": "Lopez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 6333444555,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/07/1995"
    },
    {
        "Nombre": "Luis",
        "Apellido": "Santos",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "28/02/1984"
    },
    {
        "Nombre": "Elena",
        "Apellido": "Garcia",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 699988877,
        "Documento": 99887766,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/11/1990"
    },
    {
        "Nombre": "Carlos",
        "Apellido": "Perez",
        "Provincia": "Bogotá",
        "Localidad": "Bogotá",
        "Celular": 3111222333,
        "Documento": 11223344,
        "Género": "Masculino",
        "Fecha de nacimiento": "14/03/1987"
    },
    {
        "Nombre": "María",
        "Apellido": "Gutierrez",
        "Provincia": "Medellín",
        "Localidad": "Medellín",
        "Celular": 3000555444,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "05/12/1982"
    },
    {
        "Nombre": "Juan",
        "Apellido": "Fernandez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1133557799,
        "Documento": 77889900,
        "Género": "Masculino",
        "Fecha de nacimiento": "25/06/1990"
    },
    {
        "Nombre": "Marcela",
        "Apellido": "Gomez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 3541234567,
        "Documento": 12345678,
        "Género": "Femenino",
        "Fecha de nacimiento": "03/04/1987"
    },
    {
        "Nombre": "Antonio",
        "Apellido": "Alvarez",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 601234567,
        "Documento": 22334455,
        "Género": "Masculino",
        "Fecha de nacimiento": "12/09/1992"
    },
    {
        "Nombre": "Rosa",
        "Apellido": "Ramirez",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 622233344,
        "Documento": 33445566,
        "Género": "Femenino",
        "Fecha de nacimiento": "20/05/1980"
    },
    {
        "Nombre": "Roberto",
        "Apellido": "Lopez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 6333444555,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/07/1995"
    },
    {
        "Nombre": "Patricia",
        "Apellido": "Santos",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "28/02/1984"
    },
    {
        "Nombre": "Sergio",
        "Apellido": "Garcia",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 699988877,
        "Documento": 99887766,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/11/1990"
    },
    {
        "Nombre": "Cristina",
        "Apellido": "Perez",
        "Provincia": "Bogotá",
        "Localidad": "Bogotá",
        "Celular": 3111222333,
        "Documento": 11223344,
        "Género": "Masculino",
        "Fecha de nacimiento": "14/03/1987"
    },
    {
        "Nombre": "Miguel",
        "Apellido": "Gutierrez",
        "Provincia": "Medellín",
        "Localidad": "Medellín",
        "Celular": 3000555444,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "05/12/1982"
    },
    {
        "Nombre": "Susana",
        "Apellido": "Fernandez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1133557799,
        "Documento": 77889900,
        "Género": "Masculino",
        "Fecha de nacimiento": "25/06/1990"
    },
    {
        "Nombre": "Antonio",
        "Apellido": "Gomez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 3541234567,
        "Documento": 12345678,
        "Género": "Femenino",
        "Fecha de nacimiento": "03/04/1987"
    },
    {
        "Nombre": "Beatriz",
        "Apellido": "Alvarez",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 601234567,
        "Documento": 22334455,
        "Género": "Masculino",
        "Fecha de nacimiento": "12/09/1992"
    },
    {
        "Nombre": "Eduardo",
        "Apellido": "Ramirez",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 622233344,
        "Documento": 33445566,
        "Género": "Femenino",
        "Fecha de nacimiento": "20/05/1980"
    },
    {
        "Nombre": "Isabel",
        "Apellido": "Lopez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 6333444555,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/07/1995"
    },
    {
        "Nombre": "Luis",
        "Apellido": "Santos",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "28/02/1984"
    },
    {
        "Nombre": "Elena",
        "Apellido": "Garcia",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 699988877,
        "Documento": 99887766,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/11/1990"
    },
    {
        "Nombre": "Carlos",
        "Apellido": "Perez",
        "Provincia": "Bogotá",
        "Localidad": "Bogotá",
        "Celular": 3111222333,
        "Documento": 11223344,
        "Género": "Masculino",
        "Fecha de nacimiento": "14/03/1987"
    },
    {
        "Nombre": "María",
        "Apellido": "Gutierrez",
        "Provincia": "Medellín",
        "Localidad": "Medellín",
        "Celular": 3000555444,
        "Documento": 22334455,
        "Género": "Femenino",
        "Fecha de nacimiento": "05/12/1982"
    },
    {
        "Nombre": "Juan",
        "Apellido": "Fernandez",
        "Provincia": "Buenos Aires",
        "Localidad": "La Plata",
        "Celular": 1133557799,
        "Documento": 77889900,
        "Género": "Masculino",
        "Fecha de nacimiento": "25/06/1990"
    },
    {
        "Nombre": "Marcela",
        "Apellido": "Gomez",
        "Provincia": "Córdoba",
        "Localidad": "Córdoba",
        "Celular": 3541234567,
        "Documento": 12345678,
        "Género": "Femenino",
        "Fecha de nacimiento": "03/04/1987"
    },
    {
        "Nombre": "Antonio",
        "Apellido": "Alvarez",
        "Provincia": "Madrid",
        "Localidad": "Madrid",
        "Celular": 601234567,
        "Documento": 22334455,
        "Género": "Masculino",
        "Fecha de nacimiento": "12/09/1992"
    },
    {
        "Nombre": "Rosa",
        "Apellido": "Ramirez",
        "Provincia": "Barcelona",
        "Localidad": "Barcelona",
        "Celular": 622233344,
        "Documento": 33445566,
        "Género": "Femenino",
        "Fecha de nacimiento": "20/05/1980"
    },
    {
        "Nombre": "Roberto",
        "Apellido": "Lopez",
        "Provincia": "Valencia",
        "Localidad": "Valencia",
        "Celular": 6333444555,
        "Documento": 44556677,
        "Género": "Femenino",
        "Fecha de nacimiento": "15/07/1995"
    },
    {
        "Nombre": "Patricia",
        "Apellido": "Santos",
        "Provincia": "Sevilla",
        "Localidad": "Sevilla",
        "Celular": 677788899,
        "Documento": 55667788,
        "Género": "Masculino",
        "Fecha de nacimiento": "28/02/1984"
    },
    {
        "Nombre": "Sergio",
        "Apellido": "Garcia",
        "Provincia": "Murcia",
        "Localidad": "Murcia",
        "Celular": 699988877,
        "Documento": 99887766,
        "Género": "Femenino",
        "Fecha de nacimiento": "10/11/1990"
    }
]

def Create():
    '''for persona in personas:        
        valores = (
            persona["Nombre"],
            persona["Apellido"],
            persona["Provincia"],
            persona["Localidad"],
            persona["Celular"],
            persona["Documento"],
            persona["Género"]
        )
        cursor1.execute(sql, valores)
        # Guarda los cambios en la base de datos
        conexion1.commit()'''
    # Cierra la conexión
    sql=f"insert into {Table}(Nombre, Apellido, Provincia, Localidad, Celular, Documento, Genero) values (%s,%s,%s,%s,%s,%s,%s) "
    datos=(str(input("Nombre: ")), str(input("Apellido: ")),str(input("provincia: ")),str(input("localidad: ")),int(input("celular: ")),int(input("Documento: ")),str(input("Genero: ")),str(input("fecha de nacimiento")))
    cursor1.execute(sql, datos)
    conexion1.commit()
    conexion1.close()
    
def Read():
    cursor1.execute(f"select * from {Table}")
    for fila in cursor1:
        print(fila)
    conexion1.close() 
def Update():
    cursor1.execute(f'update {Table} set {str(input("ingrese la coulumna a cambiar"))}= {input("ingrese el valor")} where id={int(input("ingrese el id a actualizar"))}')
    conexion1.commit()
def Delete(a):
    cursor1.execute(f'delete from {Table} where id={a}')
    conexion1.commit()
a=0
while a==0:
    B=int(input("ingrese 1: Create, 2: Read, 3: Update, 4: Delete "))
    if(B==1):
        Create()
    elif (B==2):
        Read()
    elif (B==3):
        Update()
    elif(B==4):
        D=int(input("ingrese el ID a eliminar"))
        Delete(D)
    else:
        print("numero equivocado, ingrese otro")
    a=int(input("desea reperir? si si ingrese 0"))





