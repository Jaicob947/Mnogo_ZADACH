#include <iostream>
using namespace std;

int main () {
double i, a;
double p=0;
cout<<"Введите a:";
cin>>a;
for (i=1; i<=a; i++)
{p=p+(2*i)/(2*i+1);
}
cout<<"(2/3)+(4/5)...+(2*i)/(2*i+1)="<<p<<endl;

return 0;
}