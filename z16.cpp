#include <iostream>
#include <math.h>
using namespace std;

int main () {
int y, x, i,n;
double s=0;
cout<<"Введите n:";
cin>>n; 
double p=0;
double z=1;
double res=1;
double res1=1;
for (i = 1; i <= 2*n; i++) {
res=(res)*i;
}
for (i = 1; i <= n; i++) {
res1=(res1)*i;
}
for (i = 1; i <= n; i++) {
cout<<"I!="<<res1<<endl;
cout<<"2I!="<<res<<endl;

s= res1/res;
cout<<"S="<<s<<endl;
}  


return 0;
}
