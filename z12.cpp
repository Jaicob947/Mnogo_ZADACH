#include <iostream>
#include <math.h>
using namespace std;

int main () {
double i, a, n, sum=0;
double fact=1;
cout<<"Введите n:";
cin>>n;
for (i=1; i<=n; i++)
{ fact=fact*i;
sum = sum +fact;
}
cout<<sum<<endl;

return 0;
}