/*
Programa para generar un arreglo lleno con elementos aleatorios y 
despues reemplazar las instacias de un elemento con otro                        
Elias Edgardo Segundo Antonio ICO 21
*/

#include <iostream> // biblioteca para manejo de streams
#include <stdlib.h> // funcion rand() y srand()
#include<time.h> // hora del sistema time(NULL)
#define MAX 0x7FFFF;
using namespace std;
int main()
{
    srand(time(NULL));
    char otra='Y';
    int arraySize=0,toReplace,forReplace;
    bool finded=false;
    int myArray[100];
    for(int i=0;i<100;i++)myArray[i]=MAX;
    while(otra=='Y'){
        
        cout<<"Ingrese el numero de elementos del arreglo(1-100): ";
        cin>>arraySize;
        
        if(arraySize>0){
            for(int i=0;i<arraySize;i++)
            {
                myArray[i]=1+rand()%100;
            }
            
            cout<<"Los elementos el arreglo son: \n\n";
            
            for(int i=0;i<arraySize;i++)
            {
                cout<<myArray[i]<<"-";
            }
            
            cout<<"\nInserte el elemento a reemplazar: ";
            cin>>toReplace;
            cout<<"\nInserte el elemento para reemplazarlo: ";
            cin>>forReplace;
            
            for(int i=0;i<arraySize;i++)
            {
                if(myArray[i]==toReplace)
                {
                    myArray[i]=forReplace;
                    finded=true;
                }
            }
            
            if(!finded)
            {
                cout<<"\nNo se encuentra el elemento en el arreglo\n";
            }
            else 
            {
                cout<<"Los elementos el arreglo son: \n\n";
                for(int i=0;i<arraySize;i++)
                {
                    cout<<myArray[i]<<"-";
                }   
            }
            
        } else cout<<"Error, debe ser un entero positivo\n";

        cout<<"\n\nDesea realizar otra prueba? (Y/N): ";
        cin>>otra;
        finded=false;
        for(int i=0;i<100;i++)myArray[i]=MAX;
    }
    cout<<"\n\n";
    return 0;

}
