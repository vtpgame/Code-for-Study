#include<iostream>
#define f(n) for(int i = 0 ; i<n ; i++)

using namespace std ;


void  hv (int &a , int &b)
{
	int hv = a ;
	a = b ;
	b = hv ;
}

void bubbleSearch (int a[] , int n)
{
	for(int i = n-1 ; i>0 ; i--)
	{
		for(int j = 0 ; j<i ; j++)
		{
			if(a[j] > a[j+1]) hv(a[j],a[j+1]) ;
		}
	}
}


void input (int a[] , int n )
{
	f(n){
		cin>>a[i] ;
	}
}
void output (int a[] , int n)
{
	f(n){
		cout<<a[i] ;
	}
}


int main()
{
	int n , a[100] ;
	cin>>n ;
	input(a,n) ;
	bubbleSearch(a,n) ;
	output(a,n) ;
}