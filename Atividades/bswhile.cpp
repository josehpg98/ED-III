#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<locale.h>
using namespace std;
#define TAM 10
int main()
{
    setlocale(LC_ALL, "");
    int numeros[TAM];
    int aux, contador;
    cout<<"Entre com dez números para preencher o array, e pressione enter após digitar cada um:\n";
    int i = 0;
    while(i < TAM)
    {
        cin>>numeros[i];
        i++;
    }
    cout<<"\n Ordem atual dos itens no array: \n";
    int j = 0;
    while(j < TAM)
    {
        cout<<numeros[j]<<",";
        j++;
    }
// Algoritmo de ordenação Bubblesort:
    cout<<"\n";
    contador = 1;
    int f = 0;
    while(contador < TAM)
    {

        while(f < TAM - 1)
        {
            if (numeros[f] > numeros[f + 1])
            {
                aux = numeros[f];
                numeros[f] = numeros[f + 1];
                numeros[f + 1] = aux;
            }
            f++;
        }
        contador++;
    }
    cout<<"\n Elementos do array em ordem crescente: \n";
    int m = 0;
    while(m < TAM)
    {
        cout<<numeros[m]<<",";
        m++;
    }
    cout<<"\n";
    int a = 0;
    contador = 1;
    while(contador < TAM)
    {
        while(a < TAM - 1)
        {
            if (numeros[a] < numeros[a + 1])
            {
                aux = numeros[a];
                numeros[a] = numeros[a + 1];
                numeros[a + 1] = aux;
            }
            a++;
        }
         contador++;
    }
    cout<<"\n Elementos do array em ordem decrescente: \n";
    int h = 0;
    while(h < TAM)
    {
        cout<<numeros[h]<<",";
        h++;
    }
    cout<<" \n";
    return 0;
}
