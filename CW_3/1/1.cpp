#include <iostream>
#include <fstream>
using namespace std;

struct box {
	float x;
	float y;
	float z;
};

void Sort(float a[], int n) {
	float temp; 
	int ch=0;
	for (int i = 0; i<(n - 1); i++) {
		if (a[i]>a[i + 1]) {
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
			++ch;
		}
	}
	if (ch != 0)
		Sort(a, n);
}


int main() {
	int k = 0;
	ifstream fin("in.txt");
	box mybox[10];
	if (fin.is_open()) {
		while (!fin.eof()) {
			fin >> mybox[k].x;
			fin >> mybox[k].y;
			fin >> mybox[k].z;
			k++;
		}
	}
	fin.close();
	float* sort = new float[k];
	int* index = new int[k];
	for (int i = 0; i < k; i++) {
		sort[i] = mybox[i].x * mybox[i].y * mybox[i].z;
	}
	float* unsorted = new float[k];
	for (int i = 0; i < k; i++) {
		unsorted[i] = sort[i];
	}
	Sort(sort, k);
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			if (unsorted[j] == sort[i]) { index[i] = j; break; }
		}
	}
	ofstream fout("out.txt", ios_base::out);  
	for (int i = 0; i < k; i++) {
		fout << mybox[index[i]].x << " " << mybox[index[i]].y << " " << mybox[index[i]].z << "\n";
	}
	fout.close();
	cout << mybox[index[k - 1]].x << " " << mybox[index[k - 1]].y << " " << mybox[index[k - 1]].z << "\n";
	delete[] sort; delete[] index; delete[] unsorted;
	system("pause"); 
	return 0;
}
