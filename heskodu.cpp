#include<iostream>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<ctime>

using namespace std;

struct hescode{
int hesayi;
char heschar;
}randome[50];


int main(){

	setlocale(LC_ALL,"turkish");
	system("color 4F");
	srand(time(NULL));
	int secim,sure1,sure2;
	double tc;
	string ad,aciklama;
	string soyad;
	cout<<"    ----HES KODU ALMA ��LEMLER�----"<<endl;
	cout<<"************************************************"<<endl;
	cout<<"E-Devlet sistemi ile hes kodu �retme"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"kimlik bilgileri"<<endl;
	cout<<"********************************"<<endl;
	cout<<"ad�n�z:"<<endl;
	cin>>ad;
	cout<<"soyad�n�z:"<<endl;
	cin>>soyad;
	cout<<"TC kimlik numaran�z:"<<endl;
	cin>>tc;
	cout<<"se�im yap�n�z:"<<endl;
	cout<<"1-kendim i�in"<<endl;
	cout<<"2-18 ya��n� doldurmam�� �ocu�um i�in"<<endl;
	cout<<"se�iminiz:"<<endl;
	cin>>secim;
	cout<<"kod bilgileri"<<endl;
	cout<<"hes kodu a��klama ekleyin(hes kodunuza isim verin)"<<endl;
	cin>>aciklama;
	cout<<"Ge�erlilik s�resi"<<endl;
	cout<<"1-s�reli"<<endl;
	cout<<"2-s�resiz"<<endl;
	cout<<"se�iminiz:";
	cin>>secim;
	if(secim==1){
		int d,m;
		cout<<"g�n say�s�n� girin=";//123
        cin>>d;
         m=d/30;//123/30=4 4 AY 
         d=d%30;//123%30=3 3 G�N
         int i=rand();
     cout<<"hes kodunuzun ge�erlilik s�resi :"<<m<<"ay"<<" "<<d<<"g�n"<<endl;

}
else{
	cout<<"ge�erlilik s�resi"<<rand()<<"g�n"<<endl;
}

	int enf=9;
	int ena=0;
	int char1=0;
	int char2=25;
	int s1=10, s2=99,s3=1000,s4=9999;
	int randsayi;
	char randchar;
    int rands=rand()%(s2-s1+1)+s1;//�ift hane
    int rands1=rand()%(s4-s3+1)+s3;//4 hane
    randsayi=rand()%(enf-ena+1)+ena;//tek hane
    char ch = 'A';
    char ch1 = 'B';
    char random=rand()%90;
    char random1;
    ch=rand()%90;
    ch1=rand()%90;
    random=rand()%(char2-char1+1)+char1;
    random=rand()%(char2-char1+1)+char1;
    ch=random+ch;
    ch1=random+ch1;
    
    if(ch>65&&ch1>66){
	
            randome[50].hesayi=randsayi;
            randome[50].hesayi=rands;
            randome[50].hesayi=rands1;
            randome[50].heschar=char(ch);
            randome[50].heschar=char(ch1);
   }          

  cout<<"heskodunuz:"<<char(ch)<<randsayi<<char(ch1)<<randsayi<<"-"<<rands1<<"-"<<rands<<endl;
 
   return 0;
	}

