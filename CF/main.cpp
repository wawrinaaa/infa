#include <iostream>

using namespace std;

long long num=1, mun;

long long fib(int m, int additive)
{

    if(m!=0) {mun=num; num+=additive; m--; fib(m, mun);}

    else if (m==0) return num;
}

int n;

int main()
{
    cin>>n;

    cout<<fib(n-1, 0);

    return 0;
}
