/*
Programa para buscar las concurrencias de un
elemento dentro de una arreglo lleno de aleatorios
Elias Edgardo Segundo Antonio ICO 21
*/
#include <iostream> // biblioteca para manejo de streams
#include <stdlib.h> // funcion rand() y srand()
#include<time.h> // hora del sistema time(NULL)

int const MAX=0x7FFFF;
using namespace std;

int main()
{
    srand(time(NULL));
    char another='Y';
    int arraySize=0;
    int myArray[100];
    int numberToFind,timesFinded=0;

    for(int i=0;i<100;i++)myArray[i]=MAX;

    while(another=='Y'){

        cout<<"Ingrese el numero de elementos del arreglo(1-100): ";
        cin>>arraySize;

        if(arraySize>0){

            for(int i=0;i<arraySize;i++)
            {
                myArray[i]=0+rand()%100;
            }

            cout<<"Los elementos el arreglo son: \n\n";
            for(int i=0;i<arraySize;i++)
            {
                cout<<myArray[i]<<"-";
            }

            cout<<"\n\nIntroduzca el elemento que desea buscar: ";
            cin>>numberToFind;
            for(int i=0;i<arraySize;i++)
            {
                if(myArray[i]==numberToFind)
                {
                    timesFinded++;
                }
            }

            if(timesFinded!=0)
            {
                cout<<"\nEl elemento fue encontrado "<<timesFinded<<" veces \n";
            } else cout<<"\nNo se encontro el elemento\n";
        } else cout<<"Error, debe ser un entero positivo\n";

        cout<<"\n\nDesea realizar otra prueba? (Y/N): ";
        cin>>another;
        timesFinded=0;
    }
    cout<<"\n\n";
    return 0;

}
