#include <iostream>
#include <math.h>
using namespace std;

int main () {
int y, x, i,n;
double s=0;
cout<<"Введите n:";
cin>>n; 
double p=0;
for (i = 0; i <= n-1; i++) {

int res=i;
res=(res-1)*i;
if ((res==0)==true)
res=1;
	  
cout<<" Знаменатель="<<res<<endl;
int z=i+1;
s=(pow(2,z))/(res);
p=p+s;
cout<<"s="<<s<<endl; cout<<"p="<<p<<endl;}


  


return 0;
}
