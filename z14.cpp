#include <iostream>
using namespace std;
int n;

int main()
{
 cout<<"Введи n=";
 cin>>n;
 double res=0;
 for (int i=1; i<=n; i++){
 double res1=1;
 for (int j=i; j<=i*2; j++){
 res1=res1*j;
 cout<<j;
 if (j<i*2)
 cout<<"*";
 }
 if (i<n) cout << " + ";
 res=res+res1; }  
 cout<<"="<<res;
}