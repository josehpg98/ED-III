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
    int i, aux, contador;
    cout<<"Entre com dez números para preencher o array, e pressione enter após digitar cada um:\n";
    for (i = 0; i < TAM; i++)
    {
        cin>>numeros[i];
    }
    cout<<"\n Ordem atual dos itens no array: \n";
    for (i = 0; i < TAM; i++)
    {
        cout<<numeros[i]<<",";
    }
// Algoritmo de ordenação Bubblesort:
    cout<<"\n";
    for (contador = 1; contador < TAM; contador++)
    {
        for (i = 0; i < TAM - 1; i++)
        {
            if (numeros[i] > numeros[i + 1])
            {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
    cout<<"\n Elementos do array em ordem crescente: \n";
    for (i = 0; i < TAM; i++)
    {
        cout<<numeros[i]<<",";
    }
    cout<<"\n";
    for (contador = 1; contador < TAM; contador++)
    {
        for (i = 0; i < TAM - 1; i++)
        {
            if (numeros[i] < numeros[i + 1])
            {
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
    cout<<"\n Elementos do array em ordem decrescente: \n";
    for (i = 0; i < TAM; i++)
    {
        cout<<numeros[i]<<",";
    }
    cout<<" \n";
    return 0;
}
