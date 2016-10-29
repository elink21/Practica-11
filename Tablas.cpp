/*
Programa para generar un arreglo bidimensional en
el que cada elemento sea igual a su fila multiplicada por
su columna indexacion base 0
Elias Edgardo Segundo Antonio ICO 21
*/
#include <iostream> // biblioteca para manejo de streams

int const MAX=0x7FFFF;
using namespace std;

int main()
{

    int myArray[100][100];
    int rows,cols;
    char another='Y';
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)myArray[i][j]=MAX;
    }


    while(another=='Y'){

        cout<<"Ingrese el numero de filas(0-100): ";
        cin>>rows;
        cout<<"Ingrese el numero de columnas(0-100): ";
        cin>>cols;
        if( (rows<100&&cols<100)&&(rows>0&&cols>0) ){
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)myArray[i][j]=i*j;
            }

            cout<<"Los elementos del arreglo son: \n";
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<cols;j++)cout<<myArray[i][j]<<"\t";
                    cout<<"\n";
            }
        } else cout<<"Error, debe ser un entero positivo menor a 100\n";

        cout<<"\n\nDesea realizar otra prueba? (Y/N): ";
        cin>>another;
    }
    cout<<"\n\n";
    return 0;

}
