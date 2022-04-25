#include <iostream>
using namespace std;
class nguoi
	{
		private:
		char ht[30];
		char scm[20];
		char gt[5];
		public:
nguoi(char *ht = " ", char *scm = " ", char *gt = " ")
{
	strcpy(this -> ht, ht);
	strcpy(this -> scm, scm);
	strcpy(this -> gt, gt);
}
~nguoi(){}
void nhap()
{
	fflush(stdin);
	cout<<"Nhap ho va ten: ";
	gets(ht);
	cout<<"Nhap so chung minh: ";
	gets(scm);
	cout<<"Nhap gioi tinh: ";
	gets(gt);
}
void xuat()
{
	cout<<"Ho ten: "<<ht<<endl
		<<"So chung minh: "<<scm<<endl
		<<"Gioi tinh: "<<gt<<endl;
}
};
class hoc_sinh:public nguoi
{
	private:
		char cn[20];
		float dtk;
	public:
	hoc_sinh(char *ht = " ", char *scm = " ", char *gt = " ",
	   char *cn = " ", float dtk = 0.0):nguoi(ht,scm,gt)
	{
		strcpy(this -> cn, cn);
		dtk = dtk;
	}
	~hoc_sinh(){}
void nhap1()
	{
		nguoi::nhap();
		fflush(stdin);
		cout<<"Nhap chuyen nganh: ";
		gets(cn);
		cout<<"Nhap diem tong ket: ";
		cin>>dtk;
	}
	float get_dtk()
	{
		return  dtk;
	}
void xep_loai()
{
	if(dtk<=4.9&&dtk>0.0)
	{
		cout<<"Loai yeu \n";
	}
	else if(dtk<=7.9&&dtk>=5.0)
	{
		cout<<"Loai kha \n";
	}
	else
		cout<<"Loai gioi \n";
}
void xuat1()
{
	nguoi::xuat();
	cout<<"Chuyen nganh: "<<cn<<endl
		<<"Diem tong ket: "<<dtk<<endl;			
}
};
void sap_xep(hoc_sinh a[100], int n)
{
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i].get_dtk()< a[j].get_dtk()){
		hoc_sinh tg = a[i];
				 a[i] = a[j];
				 a[j] = tg;
	 		}
	 	}
	}	
}
int main(int argc, char *argv[])
{	int n;
	hoc_sinh a[100];
	nguoi b[10];
	int luachon;
		cout<<"Nhap vao so hoc sinh: ";
		cin>>n;
		for(int i = 0; i < n; i++){
			cout<<"\n";
			cout<<"Nhap vao hoc sinh thu "<< i + 1<<endl;
			a[i].nhap1();
			}
			system("cls");
	do{
	cout<<"\n|**************************** Menu ****************************|"
		<<"\n0.Thoat. "
		<<"\n1.Xep loai hoc luc. "
		<<"\n2.Danh sach theo tong diem giam dan. "
		<<"\n3.Nhap n va in ra danh sach n nguoi. "
		<<"\n4.Nhap n hoc sinh in ra danh sach va in ra danh sach hoc sinh gioi. "
		<<endl;
	cin>>luachon;
	system("cls");
	if(luachon==0)
	{
		break;
	}
	else if(luachon==1)
	{
		cout<<"-------------Hoc luc cua cac hoc sinh la------------- \n";
		for(int i = 0; i < n; i++){
			cout<<"\n";
			a[i].xuat1();
			a[i].xep_loai();
		}
	}
	else if(luachon==2)
	{
		sap_xep(a,n);
		for(int i = 0; i < n; i++){
			cout<<"\n";
			a[i].xuat1();
		}
	}
	else if(luachon==3)
	{
		cout<<"Nhap so nguoi: ";
		cin>>n;
		for(int i = 0; i < n; i++){
			cout<<"\n";
			cout<<"Nhap thong tin nguoi thu "<< i + 1<<endl;
			b[i].nhap();
		}
		cout<<"-------------Danh sach thong tin n nguoi-------------";
		for(int i = 0; i < n; i++){
			cout<<"\n";
			cout<<"Thong tin nguoi thu "<< i + 1 << " la: ";
			b[i].xuat();
		}
	}
	else if(luachon==4){
		cout<<"Nhap so hoc sinh: ";
		cin>>n;
		for(int i = 0; i < n; i++){
			cout<<"\n";
			cout<<"Nhap vao hoc sinh thu "<< i + 1<<endl;
			a[i].nhap1();
		}
		cout<<"-------------Danh sach hoc sinh co hoc luc gioi la------------- \n";
		for(int i = 0; i < n; i++){
			if(a[i].get_dtk()>=8){
			cout<<"\n";
			a[i].xuat1();
			a[i].xep_loai();
			}
		}
	}
	}while(n!=0);
	return 0;
}