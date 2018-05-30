#include <iostream>
#include <math.h>
using namespace std;

int main () {
int y, x;
double p;

for (x=1; x<=20; x++)
{ if ((x%2)==false)
y=0;
else y=1;



p=(sin(x)+cos(y))/((pow(x,2))+x*y+(pow(y,2)));
cout<<"При x="<<x<<" y="<<y<<endl;
cout<<"p="<<p<<endl;
}
return 0;
}
