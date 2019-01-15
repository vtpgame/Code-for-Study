#include<iostream>
#include<string>

using namespace std ;

struct Data{
	string n ;
	string m ;
};Data a[200] ;

void InputData () ;
void Xuli ()
{
	int lc = 1 ;
	string s ;
	cout<<"Nhap tu can dich : ";
	cin>>s ;
	std::transform(s.begin() , s.end() , s.begin() ,::tolower) ;
	for(int i = 0 ; i<26 ; i++)
	{
		if(s == a[i].n) 
		{
			lc = 0 ;
			cout<<"=> Nghia cua '"<<s<<"' la : "<<a[i].m<<endl ;
			cout<<"-------------------------------"<<endl ;
		}
	}
	if(lc == 1 ) cout<<"Khong tim thay !!"<<endl ;
}
int main()
{
	cout<<"Tu dien Anh -> Viet"<<endl ;
	cout<<"-------------------"<<endl ;
	InputData();
	Xuli() ;
}


void InputData ()
{
  a[0].n = "student" ; a[0].m = "Hoc Sinh , Sinh vien" ;
  a[1].n = "school" ; a[1].m = "Truong hoc" ;
  a[2].n = "chair" ; a[2].m = "Cai ghe" ;
  a[3].n = "program" ; a[3].m = "Chuong trinh" ;
  a[4].n = "love" ; a[4].m = "Tinh yeu" ;
  a[5].n = "walk" ; a[5].m = "Di bo , di dao" ;
  a[6].n = "bus" ; a[6].m = "Xe buyt" ;
  a[7].n = "teacher" ; a[7].m = "Giao vien" ;
  a[8].n = "class" ; a[8].m = "Lop hoc" ;
  a[9].n = "pen" ; a[9].m = "Cay but mut" ;
  a[10].n = "pencil" ; a[10].m = "Cay but chi" ;
  a[11].n = "country" ; a[11].m = "Dat nuoc ,Lang que" ;
  a[12].n = "flag" ; a[12].m = "La co" ;
  a[13].n = "king" ; a[13].m = "Vua , chua" ;
  a[14].n = "queen" ; a[14].m = "Hoang hau " ;
  a[15].n = "tree" ; a[15].m = "Cay" ;
  a[16].n = "fan" ; a[16].m = "Cay quat , nguoi ham mo" ;
  a[17].n = "bed" ; a[17].m = "Giuong ngu" ;
  a[18].n = "door" ; a[18].m = "Cua" ;
  a[19].n = "open" ; a[19].m = "Mo (Mot vat nao do)" ;
  a[20].n = "close" ; a[20].m = "Dong (Mot vat nao do)" ;
  a[21].n = "window" ; a[21].m = "Cua so" ;
  a[22].n = "girl" ; a[22].m = "Con gai" ;
  a[23].n = "boy" ; a[23].m = "Con trai" ;
  a[24].n = "computer" ; a[24].m = "May tinh de ban" ;
  a[25].n = "cellphone" ; a[25].m = "Dien thoai di dong" ;
  //a[].n = "" ; a[].m = "" ;
  
  
  
  
}