/*
Programa_38 capturar 5 numeros en un vector elevarlos al cuadrado e imprimir ambos vectores
Estructura for y arreglos
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 11 de marzo de 2015
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    system("color f0");
    int x, A[5], B[5];

    cout << "\n5 numeros, los eleva al cuadrado, imprime el vector original y el resultante.";
    cout << "\n\n Estructura repetitiva for \n";

    cout<<"\n Elementos del vector origen \n";

    for (x=0; x<5; x=x+1)
        {
        cout<<"\n Dame un valor: ";
        cin>>A[x];
        B[x]= pow(A[x],2);
        //B[x]=A[x];
        //A[x]= pow(A[x],2);
        }

        cout<<"\n\n Los vectores resultantes son: \n\n";

    for (x=0; x<5; x=x+1)
        {
        cout<<" Vector original, en la posicion "<<x<<": "<<A[x]<<"\t----"<<"\tElevado al cuadrado: "<<B[x]<<"\n";
        }


        cout<<"\n\n";
        system ("pause");

    return 0;
}
