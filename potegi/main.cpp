#include <iostream>

using namespace std;

long long x, y, z=1;
int a;

int potega(long podstawa, int wykladnik)
{
    if(wykladnik!=0)
    {
        z*=podstawa;
        wykladnik--;
        potega(podstawa, wykladnik);
    }
    else if (wykladnik==0) return z;
}

int main()
{
    cin>>x>>a;

    y=x;

    for (int i=1; i<a; i++)
    {
        y*=x;
    }

    potega(x, a);

    cout<<"Przez petle: "<<y<<endl;
    cout<<"Przez rekursje: "<<z;
    return 0;
}
