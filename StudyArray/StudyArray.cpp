// StudyArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
// enter array with many character numeric -> new array from small -> big numeric
// 1,23,5,6,7,100 -> 1,5,6,7,23,100

#include <iostream>
using namespace std;

void swapInt(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void sortAscending(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swapInt(a[i], a[j]);
			}
		}
	}
}

// Hàm sắp xếp giảm dần
void sortDescending(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				swapInt(a[i], a[j]);
			}
		}
	}
}

int main()
{
	int n;
	
		int a[100] = {};
	cout << " so phan tu";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "số thứ: " << i + 1 <<" ";
		cin >> a[i];
	}
	
	int ch;
	cout << "1. tang dan";
	cout << "2. giam dan";
	cin >> ch;
	if (ch == 1) {
		sortAscending(a, n);
	}
	else if (ch == 2) {
		sortDescending(a, n);
	}
	else{
		cout << "nhap sai roi";
		return 0;
	}

	cout << "\nDay so sau khi sap xep: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}


	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
