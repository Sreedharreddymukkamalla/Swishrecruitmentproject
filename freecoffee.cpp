#include <iostream>
using namespace std;
int freecoffee(int x,int p)
{
    return (x*(100-p)/100);
}
int main()
{
    int X,P,c=0;
    cin>>X>>P;
    while(X>0)
    {
        X=freecoffee(X,P);
        c++;
    }
    cout<<c;
    return 0;
}
