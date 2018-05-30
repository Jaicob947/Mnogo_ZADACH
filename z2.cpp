#include <iostream>
using namespace std;

int main () {
int i, a, z;
int mult=1;
cout<<"Введите a:";
cin>>a;
for (i=1; i<=a; i++)
{mult=mult*i;
}
z=mult % 10;
cout<<"1*2*3...*"<<a<<"="<<mult<<endl;
cout<<"Последнее число произведения:"<<z<<endl;
return 0;
}