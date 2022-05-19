#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
using namespace std;
int calc_fib(int fib);
main()
{
    setlocale(LC_ALL,"Portuguese");
    int nfib = 0,res = 0;
    cout<<"informe o número de fibonacci que deseja calcular"<< endl;
    cin>>nfib;
    fflush(stdin);
    res = calc_fib(nfib);
    cout<<"O fibonacci de: " << nfib << " é: " << res <<endl;
}
int calc_fib(int fib)
{
    int res = 0;
    if(fib <= 2)
    {
        return 1;
    }
    else
    {
        return calc_fib(fib - 1) +  calc_fib(fib - 2);
    }
}
