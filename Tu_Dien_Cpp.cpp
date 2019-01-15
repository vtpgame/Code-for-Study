#include <iostream>
#include <stdio.h> 
#include <fstream> 
#include <iostream> 
#include <istream>
#include <cstdlib>
#include <string>
using namespace std;
int fflush( FILE *stream );



struct Data{
	string s ;
	char m[512] ;
	char n[216] ;
};Data a[200] ;

void addData ()               // Nhap data tu file txt vao mang cau truc 
{
  //Data a[200];
  int i = 0 ;
  	
  FILE* f = fopen("test.txt","r");	
  fstream file ;              //Tao mot bien file
  file.open("test.txt") ;     //Mo file
  

  for(i = 0 ; i<5 ;i++)
  {
  	file>>a[i].m;    // Doc du lieu tu file vao mang cau truc
  	while(a[i].n!='\n'&&a[i].n!=EOF)
    {
     //line[i]=c;
     i++;
     a[i].n=fgetc(f);
    }
  }
  for(i = 0 ; i<5 ; i++)
  {
  	cout<<a[i].m<<endl;
  	cout<<a[i].s<<endl ;
  }
  
  file.close() ; 
}

void Xuli ()
{
	char x[256] ;
	cout<<"Nhap tu can dich : " ;
	cin>>x ;
	for(int i = 0 ; i<5 ; i++ )
	{
		if(stricmp(x , a[i].m) == 0) cout<<a[i].s ;
	}
}

int main()
{
  addData() ;
  Xuli() ;
}