/* 

Tim kiem nhi phan + tim kiem tat ca cac vi tri ( mutil binary search )

*/


#include<iostream>
#include<stdlib.h>
#include<time.h>


using namespace std ;


int binarySearch (int a[] , int n ,int x)
{
	int m , l = 0 , r = n-1 ;
	while(l<=r){
		m = (l+r)/2 ;
		if(x == a[m]) return m ;
		else if(x > a[m]) l = m + 1 ;
		else if(x < a[m]) r = m - 1 ;
	}
	return -1 ;
}

void mutil_binarySearch (int a[] , int n ,int x)
{
	int m , l = 0 , r = n-1 , lc = 1 ;
	while(l<=r){
		m = (l+r)/2 ;
		int g = m-1 , b = m + 1 ;
		if(x == a[m]){
			lc = 0 ;
			cout<<"Tat ca cac vi tri cua phan tu "<<x<<endl ;
			cout<<m<<endl ;
			while(x == a[g] || x == a[b])
			{
				if(x == a[g]) cout<<g<<endl ;
				if(x == a[b]) cout<<b<<endl ;
                g-- ;
                b++ ;
			}
		break ;
		}
		else if(x > a[m]) l = m + 1 ;
		else if(x < a[m]) r = m - 1 ;
	}
	if(lc == 1) cout<<"Khong tim thay !" ;
//	return -1 ;
}

void addArray (int a[] , int n)
{
	srand(time(NULL)) ;
	a[0] = rand()%50 ;
	for(int i = 1 ; i<n ;i++)
	{
		a[i] = a[i-1] + rand()%20 ;  
	}
}
void Input (int a[] , int n)
{
	for(int i = 1 ; i<n ;i++)
	{
		cin>>a[i] ;
	}
}
void Output (int a[] , int n)
{
	for(int i = 0 ; i<n ;i++)
	{
		cout<<a[i]<<
		endl ;
	}
}

int main()
{
	int n , a[100] , x , h;
	cin>>n ;
	addArray(a,n) ;
	Output(a,n) ;
	cout<<"Nhap phan tu can tim : " ;
	cin>>x ;
	int result = binarySearch(a,n,x) ;
	if(result != -1 ) cout<<"Vi tri cua "<<x<<" la : "<<result<<endl ;
	else cout<<"Khong tim thay ! "<<endl ;
	
	cout<<endl ;
	
	cout<<"Multi Binary Search"<<endl;
	cout<<"-------------------"<<endl ;
	cout<<"Nhap mang moi : " << endl ;
	Input(a,n);
	cout<<"Nhap phan tu can tim : " ;
	cin>>h ;
	mutil_binarySearch(a,n,h) ;
	
}