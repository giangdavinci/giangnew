#include<iostream>
#include<conio.h>
#include<string.h> 
#include<iomanip> 
using namespace std;
class nguoi
{
	private:
		char hoten[40];
		int ns;
	public:
		void nhap()
		{
			cout<<"Nhap ho va ten: ";
			gets(hoten);
			fflush(stdin);
			cout<<"Nhap nam sinh: ";
			cin>>ns;
		}
		void xuat()
		{
			cout<<"Ho va ten: "<<hoten<<endl
				<<"Nam sinh: "<<ns<<endl;
		}
};
class thi_sinh:public nguoi
{
	private:
		char sbd[20];
		int toan, ly, hoa;
	public:
		void nhap()
		{
			nguoi::nhap();
			fflush(stdin);
			cout<<"Nhap SBD: ";
			gets(sbd);
			cout<<"Nhap diem toan: ";
			cin>>toan;
			cout<<"Nhap diem ly: ";
			cin>>ly;
			cout<<"Nhap diem hoa: ";
			cin>> hoa;
		}
		void xuat()
		{
			nguoi::xuat();
			cout<<"So bao danh: "<<sbd<<endl
				<<"Toan: "<<toan<<endl
				<<"ly: "<<ly<<endl
				<<"Hoa: "<<hoa<<endl
				<<"Diem tong ba mon la : "<<tongbamon()<<endl;
		}
		float tongbamon()
		{
			return toan+ly+hoa;
		}
		float diemtoan()
		{
			return toan;
		}
		float diemly()
		{
			return ly;
		}
		float diemhoa()
		{
			return hoa;
		}
		bool operator ==(char*c){
		return (strcmpi(this->sbd,c)==0);
	} 
	void input(thi_sinh a[],int n)
	{
		for(int i = 0; i < n; i++){
			cout<<"Nhap vao sv thu "<<i+1<<endl;
			fflush(stdin);
			a[i].nhap();
		}
	}
	void output(thi_sinh a[],int n)
	{
		for(int i = 0; i < n; i++){
			cout<<"Danh sach thi sinh vua nhap la: "<<endl;
			a[i].xuat();
		}
	}

	void sap_xep_diem(thi_sinh a[],int n)
	{
		cout<<"Danh sach thi sinh co tong 3 mon tang dan la: ";
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i].tongbamon()>a[j].tongbamon()){
					swap(a[i],a[j]);
				}
			}
		}
		for(int i = 0; i < n; i++){
			a[i].xuat();
		}
	}
	void cabamon(thi_sinh a[],int n)
	{
		cout<<"Danh sach hoc sinh co tong diem >= 5 la: "<<endl;
		for( int i = 0; i < n; i++)
			if(a[i].diemtoan()&&a[i].diemly()&&a[i].diemhoa()>=5){
				a[i].xuat();	
			}
	}
	void timSBD(thi_sinh a[], int n)
	{
		char tim[10];
		fflush(stdin);
		cout<<"Nhap SBD can tim: ";
		gets(tim);
		cout<<"Thi sinh voi SBD "<<tim<<" la: ";
		int dem = 0;
		for( int i = 0; i < n; i++ ){
			if(a[i]==tim){
				dem++;
				a[i].xuat();
			}
		}
		if(dem==0){
			cout<<"Khong tim thay thi sinh nao!!!";
		}
	}
};
int main(int argc, char *argv[])
{
	int n;
	cout<<"Nhap vao so thi sinh: ";;
	cin>> n;
	thi_sinh *a;
	
	a=new thi_sinh[n];
	input(a,n);
	output(a,n);
	cout<<"---------------------------------"<<endl;
	sap_xep_diem(a,n);
	cout<<"---------------------------------"<<endl;
	cabamon(a,n);
	cout<<"---------------------------------"<<endl;
	timSBD(a,n);
	getch();
	
	return 0;
}