/*
Viết chương trình nhập vào N phân số (mỗi dòng gồm 2 số nguyên là tử số và mẫu số), 
yêu cầu tìm phân số lớn nhất trong các phân số trên (sau khi tối giản).
***********************************************************************************
Nhập vào một danh sách lớp SinhVien, yêu cầu xuất ra thông tin của tất cả sinh viên
có điểm trung bình cao nhất và thấp nhất trong lớp đó.
Dữ liệu vào: Một danh sách lớp sinh viên với số lượng N tùy ý.
Dữ liệu ra: Họ tên, năm sinh và điểm trung bình của tất cả các sinh viên có điểm trung bình cao nhất và thấp nhất.
*/

#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	int N; 
	//nhap n
	cout << "Nhap N = ";
	cin >> N;
	
	////call function to import frac
	//nhapPhanso(N);

	////call function to export frac
	//cout << "before compacting expression: " << endl;
	//xuatPhanso(N);

	////call function to export frac after compact
	//cout << "after compacting expression: " << endl;
	//rutgon(N);

	////call function to print the max value of prac...
	//max(N);
//************************************************************************************

	Info(N);
	inInfo(N);

		
}

