#include <iostream>
using namespace std;
class AN_PHAM{
	private:
		char MaHang[20];
		char TenNXB[30];
		int ngayxb;
		int dg;
	public:
	AN_PHAM(char *MaHang	= " ",char *TenNXB	= " ", int ngayxb = 0,int dg = 0)
	{
		strcpy(this->MaHang, MaHang);
		strcpy(this->TenNXB,TenNXB);
		       this->ngayxb = ngayxb;
			   this->dg = dg; 
	}
	~AN_PHAM(){}
	void nhap()
	{
		cout<<"Nhap ma hang: ";
		gets(MaHang);
		cout<<"Nhap ten nha xuat ban: ";
		gets(TenNXB);
		cout<<"Nhap ngay xuat ban: ";
		cin>>ngayxb;
		cout<<"Nhap don gia: ";
		cin>>dg;
	}
	void xuat()
	{
		cout<<"Ma: "<<MaHang<<endl
			<<"Ten NXB: "<<TenNXB<<endl
			<<"Ngay xuat ban: "<<ngayxb<<endl
			<<"Don gia: "<<dg<<endl;
		
	}
	
		
};
class SACH:public AN_PHAM
	{
	private:
		char tensach[40];
		char tentg[30];
		int soluong;
	public:
	SACH(char *tensach = " ", char *tentg = " ", int soluong = 0,
	char *MaHang	= " ",char *TenNXB	= " ", int ngayxb = 0,int dg = 0)
	:AN_PHAM(MaHang, TenNXB, dg)
	{
		strcmp(this->tensach, tensach);
		strcmp(this->tentg, tentg);
	 		   this->soluong = 0;
	}
	~SACH(){}
	friend	istream& operator	>>(istream& is, SACH	&sach)
		{
		AN_PHAM::nhap();
		cout<<"Nhap ten sach: ";
		is>>sach.tensach;
		cout<<"Nhap ten tac gia: ";
		is>>sach.tentg;
		fflush(stdin);
		cout<<"Nhap so luong: ";
		is>>sach.soluong;
		return is;
		}
	friend	ostream& operator	>>(ostream& os, SACH	sach)
	{
		AN_PHAM::xuat();
		os<<"Ten sach: "<<sach.tensach<<endl
		  <<"Ten tac gia: "<<sach.tentg<<endl
		  <<"So luong: "<<sach.soluong<<endl;
		  return os;
	}
};
int main(int argc, char *argv[])
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	fflush(stdin);
	AN_PHAM a;
	a.nhap();
	a.xuat();
	SACH sach[n];
	for(int i = 0; i < n; i++){
	cin>>sach[i];
}
	for(int i = 0; i < n; i++){
	cout<<sach[i];
}
	
	return 0;
}