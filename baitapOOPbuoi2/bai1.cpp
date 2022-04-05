#include <iostream>
#include <string>
using namespace std;
class khachhang{
	private:
		char hoten[30];
		struct ngaysinh{
			int ngay;
			int thang;
			int nam;
		}ns;
		char socmt[10];
		char hokhau[20];
	public:
		friend	istream& operator	>>(istream& is, khachhang	&a){
			fflush(stdin);
			cout<<"Nhap ho va ten: ";
			is>>a.hoten;
			fflush(stdin);
			cout<<"Nhap ngay "; is>>a.ns.ngay; 
			cout<<" thang "; is>>a.ns.thang; 
			cout <<" nam "; is>>a.ns.nam;
			fflush(stdin);
			cout<<"Nhap so cmt, cccd: ";
			is>>a.socmt;
			cout<<"Nhap ho khau: ";
			is>>a.hokhau;
			fflush(stdin);
			return is;
		}
		friend	ostream& operator	<<(ostream& os, khachhang	 a){
			os<<"Ho ten khach la: "<<a.hoten<<endl
				<<"Sinh ngay: "<< a.ns.ngay <<" thang "<< a.ns.thang <<" nam "<< a.ns.nam <<endl
				<<"So cmt: "<<a.socmt<<endl
				<<"Ho khau: "<<a.hokhau<<endl;
				return os;
		}
		friend void sosanh (khachhang );
		
		

};
 void sosanh (khachhang a){
			char b[20];
			gets (b);
			if(strcmp(a.hokhau,b)==0){
				cout<<a;
			}
		}
int main(int argc, char *argv[])
{
	int n;
	cout<<"Nhap n: ";
	cin>> n;
	khachhang a[n];
for(int i = 0; i < n; i++){
	cin>>a[i];
}
for(int i = 0; i < n; i++){
	cout<<a[i];
}	
cout<<"tim khach hang co ho khau o: ";
for(int i = 0; i < n; i++){
	sosanh(a[i]);
}
}