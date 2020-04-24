#include <iostream>
using namespace std;

int* Replace(int* arr, int* ch, int n) {
	int* arr2= new int[n];
	for (int i = 0; i < n; i++) {
		arr2[i] = arr[ch[i]];
	}
	return arr2;
}
int main() {
	int n;
	cout << "n = "; cin >> n;
	int* arr = new int[n];
	int* ch = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "a" << i + 1 << "=";cin>> arr[i];}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";}
	cout <<endl<< "Massive of indexes(<"<<n<<"):"<< endl;
	for (int i = 0; i < n; i++) {
		cin >> ch[i];
	}
	int* arr2= Replace(arr, ch, n);
	for (int i = 0; i < n; i++) {
		cout << arr2[i] << " ";
	}
	delete[] arr; delete[] arr2; delete[] ch;
	system("pause");
	return 0;
}
/*
1) Input: n=4; arr=[12,-4,6,8]; indx=[3,0,1,2];
   Output: [8,12,-4,6]
2)Input: n=6; arr=[8,-3,-5,0,14,2]; indx=[2,0,1,5,3,4];
  Output: [-5,8,-3,2,0,14]
3)Input: n=5; arr=[-11,4,-8,0,-1]; indx=[3,1,0,2,4];
  Output: [0,4,-11,-8,-1]
*/
