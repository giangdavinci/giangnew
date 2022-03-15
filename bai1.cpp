#include <iostream.h>
int main(int argc, char *argv[])
{
	int n;
	cout<<" nhap vao gia tri cua n: ";
    cin >> n;
    int dem = 0;
	cout<< " cac uoc so cua "<< n << " la: " << endl ;
	for ( int i = 1; i <= n; i++){
				if( n % i == 0){
					cout << i << " ";
					}
		}
	return 0;
}