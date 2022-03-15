//bài1
#include <iostream.h>
int main(int argc, char *argv[])
{
	int n;
	do{
		cout<<" Nhap thu: ";
		cin >> n;
		if( n < 1 || n > 7){
			cout<<" Ban da nhap sai!!moi nhap lai\n";
		}
	}while( n < 1 || n > 7);

	if(n == 2){
		cout<<" Monday\n";
	}
	else if(n == 3) {
		cout<<" Tuesday\n";
	}
	else if(n == 4) {
		cout<<" Wednesday\n";
	}
	else if(n == 5) {
		cout<<" thursday\n";
	}
	else if(n == 6) {
		cout<<" Friday\n";
	}
	else if(n == 7) {
		cout<<" Saturday\n";
	}
	else if(n == 1){
		cout<<" Sunday\n";
	}
	return 0;
}
//bai2
#include <iostream.h>
int main(int argc, char *argv[])
{
	int n;
	cout<<" Nhap so tien dien : ";
	cin>> n;
	if(n == 0 || n <= 100){
		cout<<"Don gia 2000d/KW \n";
	}
	else if(n == 101 || n <= 200){
		cout<<"Don gia 2500d/KW \n";
	}
	else if(n == 201 || n <= 300){
		cout<<"Don gia 3000d/KW \n";
	}
	else
		cout<<"Don gia 5000d/KW \n";
	return 0;
}
//bai3
#include <iostream.h>
int main(int argc, char *argv[])
{
	int n,s=0;
 	cout<<"Nhap n: ";
 	cin>> n;
 	for(int i = 1; i <= n; i++){
 		s=s+(2*i);
	}
	cout<<"Tong S = " << s <<endl;
	return 0;
}
//bai4
#include <iostream.h>
int main(int argc, char *argv[])
{
	int n;
	cout<<"Nhap n: ";
	cin>> n;
	for(int i=n; i >= 1; i--){
		for(int j=i; j >= 1; j--){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}