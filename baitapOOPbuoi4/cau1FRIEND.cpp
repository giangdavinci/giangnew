#include <iostream>
using namespace std;
class nguoi
	{
		protected:
		char ht[30];
		char scm[10];
		char gt[3];
		public:
nguoi(char *ht = " ", char *scm = " ", char *gt = " ")
{
	strcpy(this -> ht, ht);
	strcpy(this -> scm, scm);
	strcpy(this -> gt, gt);
}
nguoi(){}
~nguoi(){}
friend istream& operator >> (istream& is, nguoi &a)
{
	fflush(stdin);
	cout<<"Nhap ho va ten: ";
	is>>a.ht;
	cout<<"Nhap so chung minh thu: ";
	is>>a.scm;
	cout<<"Nhap gioi tinh: ";
	is>>a.gt;
	return is;
}
friend ostream& operator << (ostream& os, nguoi a)
{
	os<<"Ho ten: "<<a.ht<<endl
		<<"So chung minh thu: "<<a.scm<<endl
		<<"Gioi tinh: "<<a.gt<<endl;
		return os;
}
};
class hoc_sinh:public nguoi  
{
	private:
		char cn[20];
		float dtk;
	public:
		friend istream& operator >> (istream& is, hoc_sinh &a)
{
	fflush(stdin);
	nguoi::operator>>();
	cout<<"Nhap chuyen nganh: ";
	is>>a.cn;
	cout<<"Nhap diem tong ket: ";
	is>>a.dtk;
	return is;
}
	friend ostream& operator << (ostream& os, hoc_sinh a)
{
	nguoi::operator<<();
	os	<<"Chuyen nganh: "<<a.cn<<endl
		<<"Diem tong ket: "<<a.dtk<<endl;
		return os;
}
};
int main(int argc, char *argv[])
{
	hoc_sinh a;
	cin>>a;
	cout<<a;
	return 0;
}