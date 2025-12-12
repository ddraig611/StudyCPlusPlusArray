// StudyArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
// enter array with many character numeric -> new array from small -> big numeric
// 1,23,5,6,7,100 -> 1,5,6,7,23,100
// b2: nhập 2 số in ra tổng tích hiệu thương
// b3: nhập vào 1 dãy số in ra số lớn nhất hoặc bé nhất
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
	/*int n;

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
	}*/

	//B2

	/*	double a, b;
		cout << "so thu nhat";
		cin >> a;
		cout << "Nhap so thu hai: ";
		cin >> b;
		int Choose;
		cout << "1. cong";
		cout << "2. hieu";
		cout << "3. tich";
		cout << "4. thuong";
		cin >> Choose;
		double c;
		if (Choose == 1) {
			c = a + b;
		}
		else if (Choose == 2) {
			c = a - b;
		}
		else if (Choose == 3) {
			c = a * b;
		}
		else if (Choose == 4) {
			if (b != 0){
				c = a / b;
			}
			else {
				cout << "phep tinh sai";
			}
		}
		cout << "ket qua la" << c << "";
	*/
	//B3

	int n;
	int a[100];
	cout << " so phan tu";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "nhap a[" << i << "]: ";
		cin >> a[i];
	}

	int maxval = a[0];
	int minval = a[0];


	int Choose;
	cout << "1. so lon nhat: " ;
	cout << "2. so be nhat: " ;
	cin >> Choose;
	if (Choose == 1) {
		for (int i = 1; i < n; i++) {
			if (a[i] > maxval) {
				maxval = a[i];
			}

		}

	}
	if (Choose == 2) {
		for (int i = 1; i < n; i++) {
			if (a[i] < minval)
			{
				minval = a[i];
			}

		}

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
