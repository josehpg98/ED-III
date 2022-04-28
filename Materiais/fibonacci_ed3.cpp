#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;
int fib(int num){
    if(num == 0){
        return 0;
    }else if(num == 1 || num == 2){
             return 1;
    }else{
        return fib(num -1) + fib(num - 2);
    }
};
int fibdinamico(int num){
    if(num < 3){

    }
    int vet[num] = {0,1,1};
    int i;
    for(i = 3;i <= num;i++){
        vet[i] = vet[i-1] + vet[i-2];
    }
    return vet[num];
};
main()
{
    setlocale(LC_ALL,"Portuguese");
    int n = 0, res = 0;
    cout<<"informe o valor de fibonnaci que deseja cálcular: \n ";
    cin>>n;
    fib(n);
    ///res = fib(n);
    fibdinamico(n);
    res = fibdinamico(n);
    cout<<"resultado: " << res << endl;
}
