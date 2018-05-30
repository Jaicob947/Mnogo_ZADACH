#include <iostream>
#include <math.h>
using namespace std;

int main () {
double i, a;
double p=1;
cout<<"Введите a:";
cin>>a;
for (i=2; i<=a; i++)
{
    p=p*(1-(1/pow(i,2)));
}

cout<<"P="<<p<<endl;

return 0;
}