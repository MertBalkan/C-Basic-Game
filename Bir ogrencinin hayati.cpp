//BU PROGRAM MERT BALKAN TARAFINDAN YAPILMISTIR PAYLASMAK SERBESTTIR.
#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>

using namespace std;

int secim = 0;
int gecis = 0;
int kazanilanPara = 0;
int oyunPara = 0;
int mutluluk = 100;
int aclik = 100;
int j = 0;
int kayit = 0;

float kilo = 80.0;

bool yarismaBittimi = false;

string isim;

void yap();
void banka();
void is();
void dolas();
void ruhsalBilgiler();
void spor();

class oyun{
	
	public:
	int soruSayisi = 0;
				
	char soru;
	char eh;
	
	string kadar = " kadar \n\n";
	string kaybet = "\aMaalesef kaybettiniz kazandiginiz para : ";
	string tebrik = "\aTebrikler ! kazandiginiz para : "; 

	void kaz(char);
	void kayip(char,char,char);
	void devamEtmek();
	void baslangic();
	void sorular();	
};

class market{
	public:
		
	int cikolata = 20;
	int cips = 10;
		
	int sut = 30;
	int et = 40;
		
	int domates = 20;
	int biber = 20;
		
	void Market(){
	cout << "-----Balkan markete hosgeldiniz-----\n";
	cout << "Fiyatlar hakkinda bilgi sahibi olmak icin bir rakama basiniz.\n";
	cin >> gecis;
	cout <<  "1-cikolata:" << cikolata << "\n2-cips:" << cips << "\n3-domates:" << domates << "\n4-biber:" << biber << "\n5-et:" << et << "\n6-sut:" << sut;
	cout << "\nNe almak isterseniz tuslayin.\n";
	int secim2;
	cin >> secim2;
	switch(secim2){
		case 1:{
		oyunPara-=cikolata;
		aclik+=cikolata;
		cout << "\nSatin alindi.\n";
		yap();
		break;
	}
		case 2:{
		oyunPara-=cips;
		aclik+=cips;
		cout << "\nSatin alindi.\n";
		yap();
		break;
	}
		case 3:{
		oyunPara-=domates;
		aclik+=domates;
		cout << "\nSatin alindi.\n";
		yap();
		break;	
	}
		case 4:{
		oyunPara-=biber;
		aclik+=biber;		
		cout << "\nSatin alindi.\n";
		yap();
		break;	
	}
		case 5:{
		oyunPara-=et;
		aclik+=et;
		cout << "\nSatin alindi.\n";
		yap();
		break;
	}
		case 6:{
		oyunPara-=sut;
		aclik+=sut;
		cout << "\nSatin alindi.\n";
		yap();
		break;	
	}
		}	
	}
};
void seviyeler();

void oyun::baslangic(){
	
	cout << "-----Kim milyoner olmak ister yarismasina hosgeldiniz-----\n";
	cout << "Devam etmek icin herhangi bir rakama basiniz.\n";
	cin >> gecis;
}

void oyun::devamEtmek(){
	
	if(soruSayisi == 5){
		cout << "5.soruya kadar gelmeyi basardiniz.\n";
		cout << "Cekilmek istiyor musunuz ? (e = Evet,h = Hayir)\n";
		cin >> eh;
	if(eh == 'e'){
		cout << tebrik << oyunPara << kadar;
		cout << "Gecmek icin bir rakama basin.\n";
		cin >> gecis;
		yap();
	}
	if(eh == 'h'){
		cout << "Yarismamiz devam ediyor.\n\n";	
		}
	}	
}

void oyun::kayip(char y1,char y2,char y3){
	
	if(soru == y1 || soru == y2 || soru == y3){
		cout << kaybet << oyunPara << kadar;
		cout << "Gecmek icin bir rakama basin.\n";
		cin >> gecis;
		yap();
	}
}

void oyun::kaz(char dogru){
	
	if(soru == dogru){
		oyunPara+=500;
		cout << tebrik << oyunPara << kadar;
	}
} 

void oyun::sorular(){
	baslangic();
	mutluluk+=50;
	
	cout << "SORU 1:\n" << "Asagidaki savaslardan hangisi Selcuklular ile Mogollar arasinda gerceklesmistir?\n";
	cout << "a)Dandanakan b)Pasinler c)Malazgirt d)Katvan \n";
	cin >> soru;
	kaz('d');
	kayip('a','b','c');
	soruSayisi++;
	
	cout << "SORU 2:\n" << "Hitlerin olum sebebi nedir?\n";
	cout << "a)Intihar b)Savas c)Suikast d)Yanma \n";
	cin >> soru;
	kaz('a');
	kayip('b','c','d');
	soruSayisi++;	
	
	cout << "SORU 3:\n" << "Yunan mitolojisine gore simsek Tanrisi kimdir?\n";
	cout << "a)Hades b)Zeus c)Ra d)Hermes \n";
	cin >> soru;
	kaz('b');
	kayip('a','c','d');
	soruSayisi++;
	
	cout << "SORU 4:\n" << "Savas sanati kitabi'nin yazari kimdir?\n";
	cout << "a)Hitler b)Sun Tzu c)Napolyon Bonapart d)Mustafa Kemal Ataturk \n";
	cin >> soru;
	kaz('b');
	kayip('a','c','d');
	soruSayisi++;
	
	cout << "SORU 5:\n" << "Islam dinine gore denizin ortasini 2'ye bolen peygamber kimdir?\n";
	cout << "a)Hz.Isa b)Hz.Muhammed c)Hz.Musa d)Hz.Nuh \n";
	cin >> soru;
	kaz('c');
	kayip('a','b','d');
	soruSayisi++;
	
	devamEtmek();
	
	cout << "SORU 6:\n" << "Hangi unlunun/bilim adaminin mezari 24 saat canli yayinla izlenebilir?\n";
	cout << "a)Andy Wohel b)Salvador Dali c)Elvis Presley d)Albert Einstein \n";
	cin >> soru;
	kaz('a');
	kayip('c','b','d');
	soruSayisi++;
	
	cout << "SORU 7:\n" << "Hangisi Aya ilk ayak basan astronot'tur?\n";
	cout << "a)John Glenn b)Sally Rider c)Yuri Gagarin d)Neil Armstrong \n";
	cin >> soru;
	kaz('d');
	kayip('a','b','c');
	soruSayisi++;
	
	cout << "SORU 8:\n" << "Talewords adli oyun firmasi asagidaki sehirlerden hangisinde bulunmaktadir?\n";
	cout << "a)Ankara b)Istanbul c)Antalya d)Konya \n";
	cin >> soru;
	kaz('a');
	kayip('c','b','d');
	soruSayisi++;
	
	cout << "SORU 9:\n" << "Asagidaki matematikcilerden hangisi ogrencisini suda bogarak oldurmustur?\n";
	cout << "a)Oklid b)Pisagor c)Ramaujan d)Tales \n";
	cin >> soru;
	kaz('b');
	kayip('c','d','a');
	soruSayisi++;
	
	cout << "SORU 10:\n" << "Boceklerde asagidakilerden hangisi bulunur?\n";
	cout << "a)Seluloz b)Kitin c)Hucre ceperi d)Glikojen \n";
	cin >> soru;
	kaz('b');
	kayip('a','c','d');
	soruSayisi++;
	
	yarismaBittimi = true;
	cout << "Yarismacimiz\a\n" << isim << "'i tebrik ediyoruz ve bir sonraki yarismacimisi davet ediyoruz.\n"; 
	cout << "Gecmek icin herhangi bir rakama basiniz.\n";
	cin >> gecis;
}

int main(){	
	oyun x;	

	cout << "Hikayeye baslamadan once isminin ne olmasini istersin?\n";	
	cin >> isim;
	yap();

}
void banka(){
	
	string durumlar[4] = {" kotu\n"," orta\n"," iyi\n"," batiyorsun\n"};	
	
	if(oyunPara <=500 && oyunPara >=0){
		cout << "Suan durumunuz: " << durumlar[0];  		
	}
	if(oyunPara >=500 && oyunPara <=1000){
		cout << "Suan durumuz: " << durumlar[1];
	}
	if(oyunPara >= 1000){
		cout << "Suan durumunuz: " << durumlar[2];
	}
	if(oyunPara <= 0){
		cout << "Suan durumunuz: " << durumlar[3] << "Paranizi -200'e kadar indirmeyin.\n";
	}
	if(oyunPara <= -200){
		cout << "YOKSULLUK ICINDE UNUTULUP GITTIN.\n";
		cin >> gecis;
		exit(0);
	}
	cout << "Merhaba " << isim << " Bankanizda:" << oyunPara+kazanilanPara << " kadar " << "para var.\n";
	yap();
}
void is(){
	kazanilanPara+=50;
	cout << "Birkac saatlik yorucu bir calismadan sonra eve geliyorsun\n";
	mutluluk-=10;
	aclik-=10;
	kilo-=0.1;	
	yap();
}
void dolas(){
	mutluluk+=5;
	aclik-=10;
	cout << "\nMutluluk seviyen artti ancak eve gelince karninin aciktigini hisediyorsun.\n";
	yap();	
}
void ruhsalBilgiler(){
	cout << "Mutluluk seviyem :" <<mutluluk << endl;
	cout << "Aclik seviyem :" << aclik << endl;
	yap();
}
void spor(){
	int secim3 = 0;
	cout << "Spor salonuna hosgeldiniz.\n";
	cout << "Ne yapmak istersiniz?\n1->Kayit\n2->Cikis\n3->Hareket\n4->Kilomu ogrenmek\n";
	cout << "Spor salonuna kayit yapmak icin 5000 kadar paran olmasi lazim.\n";
	cin >> secim3;
	switch(secim3){
		case 1:{
		if(oyunPara >= 5000){
		oyunPara-=5000;
		kayit++;
		if(kayit == 1){	
			cout << "Kayit olundu.\n";
			yap();
		}
		if(kayit >=2){
			cout << "Zaten kayitlisin.\n";
			yap();
		}
	}		
		else{
			cout << "Yetersiz para.\n";
			yap();
		}
			break;
		}
		case 2:{
			yap();
			break;
		}
		case 3:{
			if(kayit == 0){
				cout << "Lutfen once kayit olunuz.\n";
				yap();
			}
			if(kayit!=0){
				float verilenKilo = 0;
				verilenKilo = 0.5;
				kilo-=verilenKilo;
				cout << verilenKilo << " kadar kilo verdin.\n";
				yap();
			}
			break;
		}
		case 4:{
			if(kayit == 0){
				cout << "Lutfen once kayit olunuz.\n";
				yap();
			}
			if(kayit!=0){
				cout << "Suan kilonuz: " << kilo << " kadar.\n";
				yap();
			}
			break;
		}
	}
}
void seviyeler(){
	
	//mutluluk max 100 olur burada.
	if(mutluluk >=100){
		mutluluk = 100;
	}
	/////////////////////////////////
	if(aclik >=100){
		aclik = 100;
	}
	if(aclik == 50){
		Beep(587,500);
		Beep(587,500);
		cout << "COK ACIKTIM!!!\n";
	}
	if(aclik == 10){
		Beep(587,500);
		Beep(587,500);
		cout << "KARNIMI HISSETMEMEYE BASLIYORUM.\n";
	}
	if(aclik == 0){
		Beep(587,500);
		Beep(587,500);
		Beep(587,500);
		cout << "HAYATIMDAN NEFRET EDIYORUM INTIHAR EDECEGIM :(\n";
		cin >> j;
		exit(0);
	}
	if(mutluluk == 70){
		Beep(587,500);
		Beep(587,500);
		cout << "SIKILIYORUM!!!.\n";
	}
	if(mutluluk == 20){
		Beep(587,500);
		Beep(587,500);
		cout << "BUNA BIR DUR DEYIP GEZMELIYIM!!!\n";
	}
	if(mutluluk == 0){
		Beep(587,500);
		Beep(587,500);
		Beep(587,500);
		cout << "HAYATIMDAN NEFRET EDIYORUM INTIHAR EDECEGIM :(\n";
		cin >> j;
		exit(0);
	}
}
void yap(){
	
	oyun x;
	market y;
	
	seviyeler();
	
	cout << "\nMerhaba " << isim << " Suan hangisini yapmak istersin?\n";
	cout << "1->Milyonerlik yarismasina katilmak\n2->Banka\n3->Market\n4->Iste calis\n5->Dolas\n6->Ruhsal/FizikselBilgiler\n7->Spor Salonu\n";
	
	cin >> secim;
	switch(secim){
		case 1:{
			x.sorular();
			yap();
			break;
		}
		case 2:{
			banka();
			break;
		}
		case 3:{
			y.Market();
			yap();
			break;
		}
		case 4:{
			is();
			break;
		}
		case 5:{
			dolas();
			break;
		}
		case 6:{
			ruhsalBilgiler();
			break;
		}
		case 7:{
			spor();
			break;
		}
		default:{
			cout << "Yanlis bir rakam girildi.\n";
			yap();
			break;
		}
	}	
}
