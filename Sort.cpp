#include<bits/stdc++.h>
using namespace std;
void bubbleSortRight(int a[], int n){
	for (int i = 1; i < n; i++){
		for(int j = 0; j < n-i; j++){
			if(a[j]>a[j+1]){
				int tp = a[j];
				a[j] = a[j+1];
				a[j+1] = tp;
			}
		}
	}
}
void bubbleSortLeft(int a[], int n){
	for(int i = 0; i< n-1 ;i++){
		for(int j =  n-1; j>i; j--){
			if(a[j]<a[j-1]){
				int tp = a[j];
				a[j] = a[j-1];
				a[j-1] = tp;
			}
		}
	}
}
void selectionSort(int a[], int n){
	for (int i = 0; i< n-1; i++){
		int m = i;
		for(int j = i+1; i < n ;j++){
			if(a[j] < a[m]){
				m = j;
			}
			if(m != i){
				int tp= a[m];
				a[m] =a[i];
				a[i]=tp;
			}
		}
	}
}
int main(){
	int n;
    cout << "Nhap so phan tu mang : "; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cout << "a[" << i << "] = "; 
        cin >> a[i];
    }
	cout<<"Mang chua xap sep: ";
	for(int j = 0; j<n ;j++){
		cout<<a[j]<<" ";
	}
	bubbleSortRight(a,n);
	cout<<"\n Mang xap sap theo thuat toan noi bot (Tu trai qua phai ) :";
	for(int j = 0; j<n ;j++){
		cout<<a[j]<<" ";
	}
	bubbleSortLeft(a,n);
	cout<<"\n Mang xap sap theo thuat toan noi bot (Tu phai qua trai ) :";
	for(int j = 0; j<n ;j++){
		cout<<a[j]<<" ";
	}
	selectionSort(a,n);
	cout<<"\n Mang xap sap theo thuat chon max :";
	for(int j = 0; j<n ;j++){
		cout<<a[j]<<" ";
	}
}
