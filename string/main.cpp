#include <iostream>

using namespace std;

string a[5], biggest;

int c;

int main()
{
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];

    biggest=a[0];

    for(int i=0; i<5; i++)
    {
        if (a[i+1]>biggest) {biggest=a[i+1]; c=i+1;}
    }

    cout<<a[c];

    return c++;
}
