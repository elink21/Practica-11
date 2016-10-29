/*
Programa para generar un arreglo lleno con elementos aleatorios y
ordenarlos mediante bubble sort
Elias Edgardo Segundo Antonio ICO 21
*/

#include <iostream> // biblioteca para manejo de streams
#include <stdlib.h> // funcion rand() y srand()
#include<time.h> // hora del sistema time(NULL)
using namespace std;
int main()
{
    const int MAX=0x7FFFF;
    srand(time(NULL));
    char another='Y';
    int arraySize=0;
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

            for(int i=arraySize;i>0;i--)
            {
            	for(int j=0;j<i;j++)
            	{
            		if(myArray[j]>myArray[j+1])
            		{
            			int temp=myArray[j+1];
            			myArray[j+1]=myArray[j];
            			myArray[j]=temp;
            		}
            	}
            }

            cout<<"\n\nLos elementos del arreglo ordenado son: \n\n";
            for(int i=0;i<arraySize;i++)
            {
                cout<<myArray[i]<<"-";
            }

        } else cout<<"Error, debe ser un entero positivo\n";

        cout<<"\n\nDesea realizar otra prueba? (Y/N): ";
        cin>>another;
        for(int i=0;i<100;i++)myArray[i]=MAX;

    }
    cout<<"\n\n";
    return 0;

}
