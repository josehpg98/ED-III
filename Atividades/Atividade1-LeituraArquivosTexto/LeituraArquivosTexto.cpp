#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<fstream>
#include<iomanip>
#include<cstring>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    int cont = 0;
    string linha, at;
    ifstream arq;
    cout<<"informe o arquivo texto que deseja abrir: "<< endl;
    cin>>at;
    fflush(stdin);///limpa o buffer do teclado
    arq.open(at, ios::in);///abre para leitura
    if(arq.is_open()){
        while(!arq.eof()){
            getline(arq,linha);
            cout<<linha<<" | ";
            cont++;
        }
        cout<<endl;
        arq.close();
    }
    cout<<"foi lido "<< cont <<" números!";
}
