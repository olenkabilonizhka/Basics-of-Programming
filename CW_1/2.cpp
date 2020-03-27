#include <iostream>
using namespace std;

int main()
{
	const int n=5;
	int max,sum; float ser;
	int arr[n];
	for (int i=0;i<n;i++) {
		cout<<"a1=";cin>>arr[i];
	}
	for (int i=0;i<n;i++) {
		sum+=arr[i];
	}
	ser=(float)sum/n;
	max=arr[0];
	for (int i=0;i<n;i++) {
		if (arr[i]>max)
			max=arr[i];
	}
	for(int i=0;i<n;i++) {
		if (arr[i]>ser){
			if (arr[i]<max)
				cout<<arr[i]<<"\t";}
	}
	return 0;
}
