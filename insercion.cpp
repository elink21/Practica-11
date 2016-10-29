/*
Programa para insertar un elemento dentro de un
arreglo estatico relleno de numeros aleatorios
Elias Edgardo Segundo Antonio ICO 21
*/

#include <iostream> // biblioteca para manejo de streams
#include <stdlib.h> // funcion rand() y srand()
#include<time.h> // hora del sistema time(NULL)
using namespace std;
int const MAX=0x7FFFF;
int main()
{
    srand(time(NULL));
    char another='Y';
    int arraySize=0,toInsert;
    int myArray[100];

    for(int i=0;i<100;i++)myArray[i]=MAX;

    while(another=='Y'){

        cout<<"Ingrese el numero de elementos del arreglo(1-100): ";
        cin>>arraySize;

        if(arraySize>0){
            for(int i=0;i<arraySize;i++)
            {
                myArray[i]=1+rand()%100;
            }

            cout<<"Los elementos del arreglo son: \n\n";
            for(int i=0;i<arraySize;i++)
            {
                cout<<myArray[i]<<"-";
            }
            while(another=='Y')
            {
                cout<<"\nIngrese el numero a insertar: ";
                cin>>toInsert;

                if(arraySize+1<=100)
                {
                    for(int i=0;i<100;i++)
                    {
                        if(myArray[i]==MAX)
                        {
                            myArray[i]=toInsert;
                            arraySize++;
                            break;
                        }
                    }

                    cout<<"\nLos elementos del arreglo ahora son: \n\n";
                    for(int i=0;i<arraySize;i++)
                    {
                        cout<<myArray[i]<<"-";
                    }
                }
                else cout<<"\nEl arreglo esta lleno\n";
                if(arraySize+1<=100)
                {
                    cout<<"\n\nRealizar otra insercion? (Y/N): ";
                    cin>>another;
                }
                else another='N';
            }
            another='Y';

        } else cout<<"Error, debe ser un entero positivo\n";

        cout<<"\n\nDesea realizar otra prueba? (Y/N): ";
        cin>>another;
        for(int i=0;i<100;i++)myArray[i]=MAX;

    }
    cout<<"\n\n";
    return 0;

}
