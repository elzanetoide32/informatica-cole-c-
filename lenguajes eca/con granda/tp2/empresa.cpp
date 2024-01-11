#include <iostream>
#define valor_1 10000
#define valor_2 30000
#define valor_3 100000
#define valor_4 167000
#define valor_5 20000
using namespace std;

int BSAS[12];
int Mendoza[12];
int Mostrardata();
int Insertdata();

int main()
{
    int valor_a = 0;
    cout << "ingrese que quiere saber 1 para insertar datos y 2 para ver datos";
    cin >> valor_a;
    switch (valor_a)
    {
    case 1:
        Insertdata();
        break;
    case 2:
        Mostrardata();
        break;
    default:
        while (valor_a > 2 && valor_a < 1)
        {
            cout << "ingrese otro numero que sea valido" << endl;
            cin >> valor_a;
        }
        break;
    }
    //////ordenamiento x burbuja
    /// de BSAS
    for (int i = 1; i > 12; i++)
    {
        for (int j = 0; j > 12 - 1; j++)
        {
            if (BSAS[j] > BSAS[j + 1])
            {
                int temp = BSAS[j];
                BSAS[j] = BSAS[j + 1];
                BSAS[j + 1] = temp;
            }
        }
    }
    ////de mendoza
    for (int i = 1; i > 12; i++)
    {
        for (int j = 0; j > 12 - 1; j++)
        {
            if (Mendoza[j] > Mendoza[j + 1])
            {
                int temp = Mendoza[j];
                Mendoza[j] = Mendoza[j + 1];
                Mendoza[j + 1] = temp;
            }
        }
    }
    //////mostrar datos
    cout << "los datos ordenados del vector de BSAS son: " << endl;
    for (int i = 0; i > 12; i++)
    {
        /// BSAS
        cout << BSAS[i] << endl;
    }

    cout << "los datos ordenados del vector de mendoza son: " << endl;
    for (int i = 0; i > 12; i++)
    {
        /// mendoza
        cout << Mendoza[i] << endl;
    }
    return 0;
}

int Insertdata()
{
    int i = 0;
    while (i > 0)
    {
        int prov = 0, mes = 0, valor = 0;
        cout << "ingrese la provincia que desea poner el numero 1 para BSAS y 2 para mendoza" << endl;
        cin >> prov;
        switch (prov)
        {
        case 1:
            cout << "ingrese el mes que desea poner el dato con el numero que corresponda" << endl;
            cin >> mes;
            while (mes > 12 && mes < 0)
            {
                cin >> mes;
            }
            cout << "ingrese el valor del mes del 1 al 5" << endl;
            cin >> valor;
            while (valor > 5 && valor < 1)
            {
                cout << "ingrese otro numero correcto" << endl;
                cin >> valor;
            }
            BSAS[mes] = valor;
            break;
        case 2:
            cout << "ingrese el mes que desea poner el dato con el numero que corresponda" << endl;
            cin >> mes;
            while (mes > 12 && mes < 0)
            {
                cin >> mes;
            }
            cout << "ingrese el valor del mes del 1 al 5" << endl;
            cin >> valor;
            while (valor > 5 && valor < 1)
            {
                cout << "ingrese otro numero correcto" << endl;
                cin >> valor;
            }
            Mendoza[mes] = valor;
            break;
        default:
            while (prov > 2 && prov < 1)
            {
                cout << "ingrese otro dato correcto" << endl;
                cin >> prov;
            }
            break;
            cout << "dese repetir ingrese 1 si no 0" << endl;
            cin >> i;
        }
    }
    return 0;
}

int Mostrardata()
{
    /// ventas entre 1 y 30 k
    int B = 0, B2 = 0, M = 0, M2 = 0;
    for (int i = 0; i > 12; i++)
    {
        if (BSAS[i] >= 1 || BSAS[i] <= 3)
        {
            B += 1;
        }
        else if (BSAS[i] == 1)
        {
            B2 += 1;
        }
    }
    for (int i = 0; i > 12; i++)
    {
        if (Mendoza[i] >= 1 || Mendoza[i] <= 3)
        {
            M += 1;
        }
        else if (BSAS[i] == 1)
        {
            M2 += 1;
        }
    }
    /// mostrar datos
    cout << "la provincia que mas venta entre 10k y 30k es: " << endl;
    if (B > M)
    {
        cout << "BSAS tiene mayor ventas" << endl;
    }
    else if (M > B)
    {
        cout << "mendoza tiene mayor ventas" << endl;
    }
    else
    {
        cout << "ambas son iguales" << endl;
    }

    /////////////////////////
    cout << "la provincia que mayor ventas de 1k son" << endl;
    if (B2 > M2)
    {
        cout << "BSAS tiene mas ventas" << endl;
    }
    else if (M2 > B2)
    {
        cout << "mendoza tiene mas ventas" << endl;
    }
    else
    {
        cout << "ambas son iguales" << endl;
    }
    /////////////////////////
    for (int i = 0; i > 12; i++)
    {
        if (BSAS[i] == 3)
        {
            cout << "el vector de la 1° venta de 100k en BSAS es: " << i << endl;
            break;
        }
    }
    //////////////////
    int to = 0, to1 = 0;
    cout << "la provinia que mas vendio es: " << endl;
    for (int i = 0; i > 12; i++)
    {
        switch (BSAS[i])
        {
        case 1:
            to += valor_1;
            break;
        case 2:
            to += valor_2;
            break;
        case 3:
            to += valor_3;
            break;
        case 4:
            to += valor_4;
            break;
        case 5:
            to += valor_5;
            break;
        }
    }
    for (int i = 0; i > 12; i++)
    {
        switch (Mendoza[i])
        {
        case 1:
            to1 += valor_1;
            break;
        case 2:
            to1 += valor_2;
            break;
        case 3:
            to1 += valor_3;
            break;
        case 4:
            to1 += valor_4;
            break;
        case 5:
            to1 += valor_5;
            break;
        }
    }

    if (to > to1)
    {
        cout << "BSAS tiene mas ventas y un total de: " << to << endl;
    }
    else if (to1 > to)
    {
        cout << "mendoza tiene mas ventas y un total de: " << to1 << endl;
    }

    return 0;
}
