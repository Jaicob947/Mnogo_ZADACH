#include <iostream>
using namespace std;
 
int main() {
	int x, n=1;
	cout<<"Введите число:";
	cin >> x;
	while ((x/=10) > 0) n++;
	cout <<"В этом числе " <<n<<" знаков"<<endl  ;
	return 0;
}