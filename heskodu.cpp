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
	cout<<"    ----HES KODU ALMA ÝÞLEMLERÝ----"<<endl;
	cout<<"************************************************"<<endl;
	cout<<"E-Devlet sistemi ile hes kodu üretme"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<"kimlik bilgileri"<<endl;
	cout<<"********************************"<<endl;
	cout<<"adýnýz:"<<endl;
	cin>>ad;
	cout<<"soyadýnýz:"<<endl;
	cin>>soyad;
	cout<<"TC kimlik numaranýz:"<<endl;
	cin>>tc;
	cout<<"seçim yapýnýz:"<<endl;
	cout<<"1-kendim için"<<endl;
	cout<<"2-18 yaþýný doldurmamýþ çocuðum için"<<endl;
	cout<<"seçiminiz:"<<endl;
	cin>>secim;
	cout<<"kod bilgileri"<<endl;
	cout<<"hes kodu açýklama ekleyin(hes kodunuza isim verin)"<<endl;
	cin>>aciklama;
	cout<<"Geçerlilik süresi"<<endl;
	cout<<"1-süreli"<<endl;
	cout<<"2-süresiz"<<endl;
	cout<<"seçiminiz:";
	cin>>secim;
	if(secim==1){
		int d,m;
		cout<<"gün sayýsýný girin=";//123
        cin>>d;
         m=d/30;//123/30=4 4 AY 
         d=d%30;//123%30=3 3 GÜN
         int i=rand();
     cout<<"hes kodunuzun geçerlilik süresi :"<<m<<"ay"<<" "<<d<<"gün"<<endl;

}
else{
	cout<<"geçerlilik süresi"<<rand()<<"gün"<<endl;
}

	int enf=9;
	int ena=0;
	int char1=0;
	int char2=25;
	int s1=10, s2=99,s3=1000,s4=9999;
	int randsayi;
	char randchar;
    int rands=rand()%(s2-s1+1)+s1;//çift hane
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

