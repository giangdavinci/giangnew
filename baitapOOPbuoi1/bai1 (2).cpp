#include <iostream.h>
#include <string.h>
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
		void nhap(){
			fflush(stdin);
			cout<<"Nhap ho va ten: ";
			cin.getline(hoten, 30);
			fflush(stdin);
			cout<<"Nhap ngay "; cin >> ns.ngay; 
			cout<<" thang "; cin >> ns.thang; 
			cout <<" nam "; cin >> ns.nam;
			fflush(stdin);
			cout<<"Nhap so cmt, cccd: ";
			cin.getline(socmt, 10);
			cout<<"Nhap ho khau: ";
			cin.getline(hokhau, 20);
			fflush(stdin);
		}
		void xuat(){
			cout<<"Ho ten khach la: "<<hoten<<endl
				<<"Sinh ngay: "<< ns.ngay <<" thang "<< ns.thang <<" nam "<< ns.nam <<endl
				<<"So cmt: "<<socmt<<endl
				<<"Ho khau: "<<hokhau<<endl;
		}
		int lay_thang(){
			return ns.thang;
		}
 		int lay(){
		return strlen(hoten);
		}
		char layx(int i){
		return hoten[i];
		}
};
int main(int argc, char *argv[])
{
	int luachon, n = 1;
	khachhang a[100];
	do{
		cout<<"1. Nhap thong tin 1 khach hang"<<endl
			<<"2. Nhap thong tin n khach hang"<<endl
			<<"3. Danh sach khach hang co sinh nhat thang 12"<<endl
			<<"4. Danh sach khach hang theo thu tu tang dan cua ho ten"<<endl
			<<"5. Exit"<<endl;	
			cin >> luachon;
			if( luachon == 1){
				khachhang x;
				x.nhap();
				x.xuat();
			}
			else if( luachon == 2 ){
				cout<<"Nhap so khach hang: ";
				cin >> n;
				for(int i = 0; i < n; i++){
					cout<<"Nhap khach hang thu: "<< i + 1<<endl;
					a[i].nhap(); 
					}
			system("cls");
			for(int i = 0; i < n; i++){
				cout<<"------------------------------"<<endl;
				a[i].xuat();
				}
			}
			else if( luachon == 3 ){
				for(int i = 0; i < n; i++){
					if(a[i].lay_thang()==12 ){
						a[i].xuat();
					}
				}
			}
			else if( luachon == 4 ){
				for(int i = 0; i < n; i++){
					for(int j=i+1; j < n; j++){
						for(int b=0; b<a[i].lay(); b++){
							if( a[i].layx(b)>a[j].layx(b)){
								khachhang tg = a[i];
								a[i]=a[j];
								a[j]=tg;
							}
						}
					}
				}
				for(int i = 0; i < n; i ++){
					a[i].xuat();
				}
			}
			
	}while(n != 5);
	
	return 0;
}