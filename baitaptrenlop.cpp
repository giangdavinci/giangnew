#include <iostream.h>
class sophuc{
	private:
	int pt, pa;
	public:
	void nhap(){
		cout<<"nhap phan thuc: "; cin >> pt;
		cout<<"nhap phan ao: "; cin >> pa;
	}
	void Xuat(){
		cout <<"\nA = "<<pt<<" + "<<" *j"<<endl;
		}
	void in(){
		cout<<"phan thuc la: "<< pt <<endl;
		cout<<"phan ao la: "<< pa <<endl;
	}
	int getPT(){
		return pt;
	}
	int getPA(){
		return pa;
	}
};
int main(int argc, char *argv[])
{
	sophuc a[2];
	for(int i=0; i < 2; i++){
		a[i].nhap();
	}
	cout<<"Tong 2 so phuc: "
		<<a[0].getPT()+a[1].getPT()
		<<" + "<<a[0].getPA()+a[1].getPA()
		<<"*j"<<endl;
	cout<<"Hieu 2 so phuc: "
		<<a[0].getPT()-a[1].getPT()
		<<" + "<<a[0].getPA()-a[1].getPA()
		<<"*j"<<endl;
	cout<<"Tich 2 so phuc: "
		<<a[0].getPT()*a[1].getPT()
		<<" + "<<a[0].getPA()*a[1].getPA()
		<<"*j"<<endl;
	cout<<"Thuong 2 so phuc: "
		<<a[0].getPT()%a[1].getPT()
		<<" + "<<a[0].getPA()%a[1].getPA()
		<<"*j"<<endl;
	
	return 0;
}