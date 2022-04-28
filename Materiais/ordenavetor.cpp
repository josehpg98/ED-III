#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    cout<<"vetor antes da ordenenação: " << endl;
    int vet[] = {9,8,4,5};
    int aux;
    for(int s = 0; s <= 3; s++)
    {
        cout<<vet[s]<<endl;
    }
    for(int i = 0; i <= 3; i++)
    {
        for(int j = 0; j <= 3; j++)
        {
            if(vet[i]< vet[j])
            {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    cout<<"Vetor após ordenação: " << endl;
    for(int b = 0; b <= 3; b++)
    {
        cout<<vet[b]<<endl;
    }
}
