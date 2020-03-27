#include <iostream>
using namespace std;

float Cosunus(int a,int n){
	if (a > n)
		return 1;
	return cos(a) * Cosunus(a+1,n);
}


int main()
{
	int n;
	cout << "n="; cin >> n;
	cout<<Cosunus(1,n);
	return 0;
}
