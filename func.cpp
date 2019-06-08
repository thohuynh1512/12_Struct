#include "Header.h"
 
//dinh nghia kieu du lieu "phanso" kieu struct
typedef struct
{
	int tuSo;
	int mauSo;
}phanso;
 
//khai bao bien co kieu du lieu la phanso
phanso ps[100];


//define function to type frac...
void nhapPhanso(int n) {
	for (int i = 0; i < n; i++)
	{
		//nhap tu
		std::cout << "Tu so thu " << i+1 << " = ";
		std::cin >> ps[i].tuSo;
		do
		{	
			std::cout << "Mau so" << i+1 << " = ";
			std::cin >> ps[i].mauSo;
			if (ps[i].mauSo== 0) {
				std::cout << "Mau so = 0, xin nhap lai gia tri khac";
			}			
		} while (ps[i].mauSo==0);		
	}
}

//define function to export frac...
void xuatPhanso(int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << ps[i].tuSo << "/" << ps[i].mauSo << "\n";
	}
}

//define function to find UCLN
int UCLN(int a, int b) {
	while (a!=b)
	{
		if (a > b) {
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}

//define function to compact expression....test thu thoi :))
void rutgon(int n) {
	int ucln;
	for (int i = 0; i < n; i++)
	{
		ucln = UCLN(ps[i].tuSo, ps[i].mauSo);
		std::cout << ps[i].tuSo / ucln << "/" << ps[i].mauSo / ucln << "\n";
	}
}


//define function to find max of frac...
void max(int n) {
	double psVal[100];//chua gia tri cua phan so
	int tuso = 0, mauso = 0;
	int ucln;
	//tinh gia tri phan so
	for (int i = 0; i < n; i++)
	{
		psVal[i] = (double)ps[i].tuSo / ps[i].mauSo;
	}

	//so sanh mang chua cac gtri phan so
	for (int i = 0; i < n; i++)
	{
		if (psVal[i] < psVal[i + 1]) {
			tuso = ps[i + 1].tuSo;
			mauso = ps[i + 1].mauSo;
		}
	}
	ucln = UCLN(tuso, mauso);
	std::cout << "Max of Frac is " << tuso/ucln << "/" << mauso/ucln;
}
//************************************************************************
typedef struct
{
	char name[100];//name of student
	int year;//year of birthday of student
	double score;//score of student
}svList;

// khai bao 1 bien kieu svList
svList svInfo[1000];

//nhap thong tin cua sv
void Info(int n) {
	for (int i = 0; i < n; i++)
	{
		std::cout << "Infomation of student " << i+1 << " : \n";
		std::cin >> svInfo[i].name >> svInfo[i].year>>svInfo[i].score;
	}
}


//find max value of score
double maxScore(int n) {
	double maxSc;
	maxSc = svInfo[0].score;
	for (int i = 0; i < n; i++)
	{
		if (maxSc < svInfo[i].score) {
			maxSc = svInfo[i].score;
		}		
	}	
	return maxSc;
}

//find min value of score
double minScore(int n) {
	double minSc;
	minSc = svInfo[0].score;
	for (int i = 0; i < n; i++)
	{
		if (minSc > svInfo[i].score) {
			minSc = svInfo[i].score;
		}
	}
	return minSc;
}

//in thong tin
void inInfo(int n) {
	double max, min;
	int demmax = 1;
	int demmin = 1;
	max = maxScore(n);
	min = minScore(n);
	std::cout << "Diem thap nhat lop: \n"<<min;
	std::cout << "Diem cao nhat lop: \n";
	for (int i = 0; i < n; i++)
	{
		if (svInfo[i].score == max) {
			std::cout << "#" << demmax <<"\n";
			std::cout << svInfo[i].name << "\t" << svInfo[i].year << "\t" << svInfo[i].score << "\n";
			demmax++;
		}
	}

	std::cout << "Diem thap nhat lop: \n";
	for (int i = 0; i < n; i++)
	{
		if (svInfo[i].score == min) {
			std::cout << "#" << demmin << "\n";
			std::cout << svInfo[i].name << "\t" << svInfo[i].year << "\t" << svInfo[i].score << "\n";
			demmin++;
		}
	}
}






