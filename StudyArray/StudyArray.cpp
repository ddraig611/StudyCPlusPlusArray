// StudyArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
// enter array with many character numeric -> new array from small -> big numeric
// 1,23,5,6,7,100 -> 1,5,6,7,23,100
// b2: nhập 2 số in ra tổng tích hiệu thương
// b3: nhập vào 1 dãy số in ra số lớn nhất hoặc bé nhất
// B4: Nhập vào 2 số tính chu vi, diện tích hình chữ nhật
// B5: Nhập vào số dây đổi ra giờ hoặc phút hoặc ngày
// B6: Nhập ngày-tháng-năm và kiểm tra xem có hợp lệ không
// B7: Giải pt: ax + b =c, tìm x
// B8: Xếp hạng điểm sv yếu, TB, khá, giỏi, xuất sắc
// B9: Nhập một dãy số tìm số chia hết cho 5
// B10: Nhập 1 dãy số in ra 2 dãy số chẵn và lẻ
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

	/*int n;
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

	}*/

	//B4
	//double a, b;
	//cout << "so thu nhat: ";
	//cin >> a;
	//cout << "Nhap so thu hai: ";
	//cin >> b;
	//double c;
	//int ch;
	//cout << "1. Tinh chu vi";
	//cout << "2. Tinh dien tich";
	//cin >> ch;
	//if (ch == 1) {
	//	c = (a + b) * 2;
	//}
	//else if (ch == 2) {
	//	c = a * b;
	//}
	//cout << "Ket qua :"<< c <<".";
	
	//B5
	/*double n;
	cout << "so giay ";
	cin >> n;
	double t{};
	int ch;
	cout << "1. gio ";
	cout << "2. phut ";
	cout << "3. ngay ";
	cin >> ch;
	if (ch == 1) {
		t = n / (60 * 60);
	}
	else if (ch == 2) {
		t = n / 60;
	}
	else if (ch == 3) {
		t = n / (60 * 60 * 24);
	}
	cout << "Thoi gian la:" << t << " " ;*/

	//B6
	
		/*int d, m, y;
		cout << "ngay: ";
		cin >> d;
		cout << "thang: ";
		cin >> m;
		cout << "nam: ";
		cin >> y;
		bool hopLe = true;
		int maxDay;
		if (y <= 0) {
			hopLe = false;
		}
		if (m < 1 || m > 12) {
			hopLe = false;
		}
		if (m == 1 || m == 3 || m == 5 || m == 7 ||
			m == 8 || m == 10 || m == 12) {
			maxDay = 31;
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11) {
			maxDay = 30;
		}
		else {
			if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
				maxDay = 29;
			else
				maxDay = 28;
		}
		if (d < 1 || d > maxDay) {
			hopLe = false;
		}
		else hopLe = true;
			if (hopLe) {
				cout << "Ngay thang nam HOP LE";
			}
			else
			{
				cout << "Ngay thang nam KHONG HOP LE";
			}
		*/
//B7
	/*double a, b, c;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	if (a != 0) {
		double x = (c - b) / a;
		cout << "ket qua la:"<<x<<" ";
	}
	else if (b == c) {
		cout << "pt vo so nghiem";
	}
	else cout << "pt vo nghiem";*/

//B8
	/*double diem;
	cout << "Diem so: ";
	cin >> diem;
	if (diem >= 9 && diem <= 10) {
		cout << "Xep loai xuat sac";
	}
	else if (diem < 9 && diem >= 7.5) {
		cout << "Xep loai gioi";
	}
	else if (diem < 7.5 && diem >= 6) {
		cout << "Xep loai kha";
	}
	else if (diem < 6 && diem >= 5) {
		cout << "Xep loai TB";
	}
	else if (diem < 5) {
		cout << "Xep loai yeu";
	}*/
//B9
	/*int n;
	int a[100] = {};
	cout << "so phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
	bool timThay = false;
	cout << "Cac so chia het cho 5: ";
	for (int i = 0; i < n; i++) {
		if (a[i] % 5 == 0) {
			cout << a[i] << " ";
			timThay = true;
		}	
	}

	if (!timThay)
		cout << "Khong co so nao chia het cho 5";
	return 0;*/
//B10
	/*int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cout << "a " << i << " =";
		cin >> a[i];
	}
	cout << "\nDay so chan: ";
	bool soChan = false;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
			soChan = true;
		}
	}
	if (!soChan) cout << "Khong co";

	cout << "\nDay so le: ";
	bool soLe = false;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			cout << a[i] << " ";
			soLe = true;
		}
	}
	if (!soLe) cout << "Khong co";*/
//B11
	/*int n;
	cout << "Nhap n: ";
	cin >> n;

	if (n % 2 == 0 && n % 4 == 0)
		cout << "So chia het cho ca 2 va 4";
	else if (n % 2 == 0 && n % 4 != 0)
		cout << "So KHONG chia het cho 4";
	else if (n % 2 != 0 && n % 4 == 0)
		cout << "So KHONG chia het cho 2";
	else if (n % 2 != 0 && n % 4 != 0)
		cout << "So KHONG chia het cho ca 2 va 4";*/ //test
//B12
	int n;
	cout << "so phan tu: ";
	cin >> n;
	int a[100];
	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "Cac so am: ";
	bool coSoAm = false;

	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			cout << a[i] << " ";
			coSoAm = true;
		}
	}
	if (!coSoAm)
	cout << "Khong co so am";

	


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
