#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class giaovien{
	char ht[30];
	int t;
	char bc[15];
	char cn[30];
	string chuyen_nganh;
	float bac_luong, luong_cb;
	public:
		void nhap(){
			fflush(stdin);
			cout<<"Nhap ho ten giao vien: ";
			gets(ht);
			cout<<"Nhap tuoi: ";
			cin >> t;
			fflush(stdin);
			cout<<"Nhap vao bang cap cua giao vien: ";
			gets(bc);
			cout<<"Nhap chuyen nganh";
			gets(cn);
			fflush(stdin);
			cout<<"Nhap bac luong";
			cin >> bac_luong;
			fflush(stdin);
		}
		void xuat(){
			cout<<setw(31)<<ht
				<<setw(15)<<t
				<<setw(20)<<bc
				<<setw(20)<<cn
				<<setw(10)<<bac_luong
				<<setw(10)<<luong_cb;
		}
		void tinh(){
			luong_cb = bac_luong*610;
		}
		float luong(){
			return luong_cb;
		}
		int nganh(){
			return chuyen_nganh.size();
		}
		char laygv(int i){
			return chuyen_nganh[i];
		}
		string layx(){
			return chuyen_nganh;
		}
};
int main(int argc, char *argv[])
{
	int luachon, n=1;
	giaovien gv[100];
	do{
		cout<<"1.Thong tin cua 1 giao vien"<<endl
			<<"2.Thong tin cua n giao vien"<<endl
			<<"3.Danh sach giao vien co luong nho hon 2000"<<endl
			<<"4.Danh sach giao vien sap xep theo chuyen nganh"<<endl
			<<"5.Exit"<<endl;
		cin>>luachon;
		if(luachon == 1){
			system("cls");
			giaovien x;
			x.nhap();
			x.tinh();
			system("cls");
			cout<<setw(31)<<"Ho ten"
				<<setw(15)<<"Tuoi"
				<<setw(20)<<"Bang cap"
				<<setw(20)<<"Chuyen nganh"
				<<setw(10)<<"Bac luong"
				<<setw(10)<<"Luong co ban"<<endl;
			for(int i = 0; i < n; i++){
				gv[i].xuat();
			}
		}
		else if( luachon == 2 ){
			cout<<"Nhap so luong giao vien \n";
			cin >> n;
			system("cls");
			cout<<"Nhap thong tin giao vien \n";
			for(int i = 0; i < n; i++){
				gv[i].nhap();
				gv[i].tinh();
			}
			system("cls");
			cout<<setw(31)<<"Ho ten"
				<<setw(15)<<"Tuoi"
				<<setw(20)<<"Bang cap"
				<<setw(20)<<"Chuyen nganh"
				<<setw(10)<<"Bac luong"
				<<setw(10)<<"Luong co ban"<<endl;
			for(int i = 0; i < n; i++){
				gv[i].xuat();
			}
		}
		else if( luachon == 3 ){
			system("cls");
			cout<<setw(31)<<"Ho ten"
				<<setw(15)<<"Tuoi"
				<<setw(20)<<"Bang cap"
				<<setw(20)<<"Chuyen nganh"
				<<setw(10)<<"Bac luong"
				<<setw(10)<<"Luong co ban"<<endl;
				for(int i = 0; i < n; i++){
				if(gv[i].luong() < 2000){
				gv[i].xuat();
				}
			}	
		}
		else if( luachon == 4){
			for(int i = 0; i < n; i++){
				for(int j = i + 1; j < n; j++){
					for(int b = 0; b < gv[i].nganh(); b++){
						if(gv[i].laygv(b)<gv[j].laygv(b)){
							giaovien tg=gv[i];
							gv[i]=gv[j];
							gv[j]=tg;
						}
					}
				}
			}
			system("cls");
			cout<<setw(31)<<"Ho ten"
				<<setw(15)<<"Tuoi"
				<<setw(20)<<"Bang cap"
				<<setw(20)<<"Chuyen nganh"
				<<setw(10)<<"Bac luong"
				<<setw(10)<<"Luong co ban"<<endl;
				for(int i = 0; i < n; i++){
				gv[i].xuat();
			}
				
		}
		
		
	}while(n!=5);
	
	return 0;
}