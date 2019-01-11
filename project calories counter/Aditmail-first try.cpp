#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

using namespace std;

int selection;

//Menampilkan Menu Utama
void mainMenu();
void KalKons();
void KalKonsMenu();

//Menampilkan Menu Makanan
void makanan();
void makananMenu();

//Menampilkan Menu Makanan Pokok
void MakananPokok();
void MakananPokokMenu();

//Menampilkan Jenis-Jenis Makanan Pokok
void NsP();
void Ktg();
void KtpLtg();
void NsU();
void Bmie();
void NsG();
void Rt();
void Spg();
void BbA();                                          
void Wff();

//Menampilkan Menu Lauk Pauk
void LaukPauk();
void LaukPaukMenu();

//Menampilkan Jenis-Jenis Lauk Pauk
void AyP();
void DgP();
void BDS();
void EmD();
void ILG();
void GC();
void RD();
void SA();
void SS();
void TD();

//Menampilkan Menu Makanan Siap Saji
void SiapSaji();
void SiapSajiMenu();

//Menampilkan Jenis-Jenis Makanan Siap Saji
void Asn();
void GdGd();
void Pmk();
void Tgs();
void Ham();
void Pzz();
void StK();
void KFC();
void TG();
void Smy();

//Menampilkan Menu Buah-Buahan
void Buah();
void BuahMenu();

//Menampilkan Jenis-Jenis Buah
void Apl();
void JB();
void Dk();
void Blm();
void Psg();
void Drn();
void Jrk();
void Smk();
void Rmbt();
void Mgg();

//Menampilkan Menu Minuman
void minuman();
void minumanMenu();

//Menampilkan Jenis-Jenis Minuman
void AiP();
void Teh();
void Kopi();
void EsKlp();
void EsCdl();
void SsSk();
void Ccl();
void ThSu();
void Mlsk();
void JsB();

//Menampilkan Menu Kalori yang Dibakar
void KalBar();
void KalBarMenu();

//Menampilkan Menu Menghitung Berat Badan
void BeBan();
void BeBanMenu();

//Menampilkan Jenis-Jenis Ukuran Berat Badan Pria
void pria();
void BekBanLkMenu();
void KecilLk();
void SedangLk();
void BesarLk();

//Menampilkan Jenis-Jenis Ukuran Berat Badan Wanita
void wanita();
void BekBanPrMenu();
void KecilPr();
void SedangPr();
void BesarPr();

//Menampilkan Tampilan Animasi
void prompt(string t);

//Menampilkan Menu Tips dan Trik
void TpTr();

//Menampilkan Menu Check Riwayat Makanan & Minuman
void CheckRiwayat();
void checkMenu();
void CheckMakanan();
void CheckMinuman();

//Menampilkan Menu Reset Riwayat Makanan & Minuman
void Reset();
void ResetMenu();
void ResetMakanan();
void ResetMinuman();

//Menampilkan Menu Tentang
void About();

string a = "Terimakasih Telah Menggunakan Program Sederhana ini..	\n";

void main(){
	int selection;

	do{
		mainMenu();
		cin >> selection;
		while(selection < 1 || selection > 8){
			cout <<"Wrong input! Please try again... ";
			cin >> selection;
		}
		switch(selection){
		case 1:
			KalKons();
			break;
		case 2:
			KalBar();
			break;
		case 3:
			BeBan();
			break;
		case 4:
			TpTr();
			break;
		case 5:
			CheckRiwayat();
			break;
		case 6:
			Reset();
			break;
		case 7:
			About();
		}
	}while(selection != 8);
	prompt(a);
	system("pause");
}

//Tampilan Menu Utama
void mainMenu(){
	system("CLS");
	prompt (" --------------------------------------	\n");
	prompt ("|              Welcome to              |	\n");
	prompt ("|           CALORIES COUNTER           |	\n");
	prompt (" --------------------------------------	\n\n");

	cout << " --------------------------------------	\n";
	cout << "| [1] Hitung Kalori yang Anda Konsumsi | 	\n";
	cout << "| [2] Hitung kalori yang Anda Bakar    |	\n";
	cout << "| [3] Ukur Berat Badan Ideal Anda      |	\n";
	cout << "| [4] Tips & Trick                     |	\n";
	cout << "| [5] Cek Riwayat                      |	\n";
	cout << "| [6] Reset Riwayat                    |	\n";
	cout << "| [7] Tentang                          |	\n";
	cout << "| [8] Keluar                           |	\n";
	cout << " --------------------------------------	\n\n";

	cout << "Yang Anda pilih?		\n";
}

//Kode no [1] Kalori yang Anda Konsumsi
void KalKons(){
	int selection;
	do{
		system("CLS");
		KalKonsMenu();
		cin >> selection;
		while(selection < 1 || selection > 3){
			cout << "invalid selection, try again ? ";
			cin >> selection;
		};

		switch(selection){

		case 1 :
			makanan();
			break;
		case 2 :
			minuman();
			break;
		};		
	}while(selection != 3);
	
}

//Menu tampilan no [1] Kalori yang Anda Konsumsi
void KalKonsMenu(){
	system("CLS");
	cout<< "[1] Makanan					\n";
	cout<< "[2] Minuman					\n";
	cout<< "[3] Kembali ke Menu Awal?	\n\n";

	cout << "Yang Anda pilih?\n";
}

//Menu tampilan no [1] Makanan
void makananMenu(){
	system("CLS");
	cout << "[1] Makanan Pokok					\n";
	cout << "[2] Lauk Pauk						\n";
	cout << "[3] Makanan Siap Saji				\n";
	cout << "[4] Buah - Buahan					\n";
	cout << "[5] Kembali ke Menu Sebelumnya?	\n\n";

	cout << "Yang Anda pilih?\n";
}

//Kode no [1] Makanan
void makanan(){
int selection;
	do{
		system("CLS");
		makananMenu();

		cin >> selection;
		while (selection < 1 || selection > 5){
			cout << "invalid selection, try again ? ";
			cin >> selection;
		};

		switch(selection){
		case 1 :
			MakananPokok();
			break;
		case 2 :
			LaukPauk();
			break;
		case 3 :
			SiapSaji();
			break;
		case 4 :
			Buah();
			break;
		};		
	}while(selection != 5);	
}

//Tampilan Menu no [1] Makanan pokok
void MakananPokokMenu(){
	system("CLS");
	cout << "[1]  Nasi Putih					\n";
	cout << "[2]  Kentang / Singkong			\n";
	cout << "[3]  Ketupat / Lontong				\n";
	cout << "[4]  Nasi Uduk						\n";
	cout << "[5]  Bihun / Mie					\n";
	cout << "[6]  Nasi Goreng					\n";
	cout << "[7]  Roti							\n";
	cout << "[8]  Spaghetti						\n";
	cout << "[9]  Bubur Ayam					\n";
	cout << "[10] Waffle						\n";
	cout << "[11] Kembali ke Menu Sebelumnya?	\n\n";

	cout << "Yang Anda pilih?\n";

}

//Kode no [1] Makanan Pokok
void MakananPokok(){
int selection;
	do{
		
		MakananPokokMenu();
		cin >> selection;
		while( selection < 1 || selection > 11){
			cout << "invalid selection, try again ? ";
			cin  >> selection;

		};
		
		switch(selection){
		case 1 :
			NsP();
			break;
		case 2 :
			Ktg();
			break;
		case 3 :
			KtpLtg();
			break;
		case 4 :
			NsU();
			break;
		case 5 :
			Bmie();
			break;
		case 6 :
			NsG();
			break;
		case 7 :
			Rt();
			break;
		case 8 :
			Spg();
			break;
		case 9 :
			BbA();                                          
			break;
		case 10:
			Wff();
			break;

		};
		system("pause\n");
	} while(selection != 11);
	}

void NsP(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Nasi.Putih";
	files << nama << ".175" <<".Kalori\n";
	files.close();
	cout << "Nasi Putih mengandung 175 Kalori\n";

}

void Ktg(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Kentang/Singkong";
	files << nama <<".35" <<".Kalori\n";
	files.close();
	cout << "Kentang / Singkong mengandung 156 Kalori\n";
	
}

void KtpLtg(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Ketupat/Lontong";
	files << nama <<".156" <<".Kalori\n";
	cout  << "Ketupat / Lontong mengandung 35 Kalori\n";	
	files.close();
}

void NsU(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Nasi.Uduk";
	files << nama <<".506" <<".Kalori\n";
	cout  << "Nasi Uduk mengandung 506 Kalori\n";	
	files.close();
}

void Bmie(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Bihun/Mie";
	files << nama <<".311" <<".Kalori\n";
	cout << "Bihun / Mie mengandung 311 Kalori\n";		
	files.close();
}

void NsG(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Nasi.Goreng";
	files << nama <<".267" <<".Kalori\n";
	cout << "Nasi Goreng mengandung 267 Kalori	\n";
	files.close();
}

void Rt(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Roti";
	files << nama <<".165" <<".Kalori\n";
	cout << "Roti mengandung 165 Kalori\n";
	files.close();
}

void Spg(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Spaghetti";
	files << nama <<".642" <<".Kalori\n";
	cout << "Spaghetti mengandung 642 Kalori\n";
	files.close();
}

void BbA(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Bubur.Ayam";
	files << nama <<".165" <<".Kalori\n";
	cout << "Bubur Ayam mengandung 165 Kalori\n";
	files.close();
}

void Wff(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Waffle";
	files << nama <<".400" <<".Kalori\n";
	cout << "Waffle mengandung 400 Kalori\n";
	files.close();
}

//Tampilan Menu no [2] Lauk Pauk
void LaukPaukMenu(){
	system("CLS");
	cout << "[1]  Ayam Panggang					\n";
	cout << "[2]  Daging Panggang				\n";
	cout << "[3]  Bakso Daging Sapi				\n";
	cout << "[4]  Empal Daging					\n";
	cout << "[5]  Ikan Lele Goreng				\n";
	cout << "[6]  Gulai Cumi					\n";
	cout << "[7]  Rendang Daging				\n";
	cout << "[8]  Sate Ayam						\n";
	cout << "[9]  Sop Sapi						\n";
	cout << "[10] Telur Dadar					\n";
	cout << "[11] Kembali ke Menu Sebelumnya?	\n\n";

	cout << "Yang Anda pilih?\n";
}

//Kode no [2] Lauk Pauk
void LaukPauk(){
	int selection;
	do{
		system("CLS");
		LaukPaukMenu();
		cin >> selection;
		while( selection < 1 || selection > 11){
			cout << "invalid selection, try again ? ";
			cin  >> selection;
		};

		switch(selection){
		case 1 :
			AyP();
			break;
		case 2 :
			DgP();
			break;
		case 3 :
			BDS();
			break;
		case 4 :
			EmD();
			break; 
		case 5 :
			ILG();
			break;
		case 6 :
			GC();
			break; 
		case 7 :
			RD();
			break; 
		case 8 :
			SA();
			break;
		case 9 :
			SS();
			break;
		case 10:
			TD();
			break;
		};
		system("pause\n");
	} while(selection != 11);

}

void AyP(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Ayam.Panggang";
	files << nama <<".164,3" <<".Kalori\n";
	cout << "Ayam Panggang mengandung 164,3 Kalori\n";
	files.close();
}

void DgP(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Daging.Panggang";
	files << nama <<".150" <<".Kalori\n";
	cout << "Daging Panggang mengandung 150 Kalori\n";
	files.close();
}

void BDS(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Bakso.Daging.Sapi";
	files << nama <<".260" <<".Kalori\n";
	cout << "Bakso Daging Sapi mengandung 260 Kalori\n";
	files.close();
}

void EmD(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Empal.Daging";
	files << nama <<".147" <<".Kalori\n";
	cout << "Empal Daging mengandung 147 Kalori\n";
	files.close();
}

void ILG(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Ikan.Lele.Goreng";
	files << nama <<".57,5" <<".Kalori\n";
	cout << "Ikan Lele Goreng mengandung 57,5 Kalori\n";
	files.close();
}

void GC(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Gulai.Cumi";
	files << nama <<".183" <<".Kalori\n";
	cout << "Gulai Cumi mengandung 183 Kalori\n";
	files.close();
}

void RD(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Rendang.Daging";
	files << nama <<".285,5" <<".Kalori\n";
	cout << "Rendang Daging mengandung 285,5 Kalori\n";
	files.close();
}

void SA(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Sate.Ayam";
	files << nama <<".466" <<".Kalori\n";
	cout << "Sate Ayam mengandung 466 Kalori\n";
	files.close();
}

void SS(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Sop.Sapi";
	files << nama <<".227" <<".Kalori\n";
	cout << "Sop Sapi mengandung 227 Kalori\n";
	files.close();
}

void TD(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Telur.Dadar";
	files << nama <<".188" <<".Kalori\n";
	cout << "Telur Dadar mengandung 188 Kalori\n";
	files.close();
}

//Tampilan Menu no [3] Siap Saji
void SiapSajiMenu(){
	system("CLS");
	cout << "[1]  Asinan						\n";
	cout << "[2]  Gado - Gado					\n";
	cout << "[3]  Pempek						\n";
	cout << "[4]  Tongseng						\n";
	cout << "[5]  Hamburger						\n";
	cout << "[6]  Pizza							\n";
	cout << "[7]  Sate Kambing					\n";
	cout << "[8]  Kentucky Fried Chicken		\n";
	cout << "[9]  Toge Goreng					\n";
	cout << "[10] Siomay						\n";
	cout << "[11] Kembali ke Menu Sebelumnya?	\n\n"; 
	
	cout << "Yang Anda pilih?\n";
}

//Kode no [3] Siap Saji
void SiapSaji(){
	int selection;
	do{
		system("CLS");
		SiapSajiMenu();
		cin >> selection;
		while( selection < 1 || selection > 11){
			cout << "invalid selection, try again ? ";
			cin  >> selection;
		};

		switch(selection){
		case 1 :
			Asn();
			break;
		case 2 :
			GdGd();
			break;
		case 3 :
			Pmk();
			break; 
		case 4 :
			Tgs();
			break;
		case 5 :	
			Ham();
			break;
		case 6 :
			Pzz();
			break;
		case 7 :
			StK();
			break;
		case 8 :
			KFC();
			break;
		case 9 :
			TG();
			break;
		case 10 :
			Smy();
			break;
		};		
		system("pause\n");
	}while(selection != 11);	

}

void Asn(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Asinan";
	files << nama <<".208" <<".Kalori\n";
	cout << " Asinan mengandung 208 Kalori\n";
	files.close();
}

void GdGd(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Gado-Gado";
	files << nama <<".295" <<".Kalori\n";
	cout << " Gado - Gado mengandung 295 Kalori\n";
	files.close();
}

void Pmk(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Pempek";
	files << nama <<".384" <<".Kalori\n";
	cout << " Pempek mengandung 384 Kalori\n";
	files.close();
}

void Tgs(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Tongseng";
	files << nama <<".331" <<".Kalori\n";
	cout << " Tongseng mengandung 331 Kalori\n";
	files.close();
}

void Ham(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Hamburger";
	files << nama <<".257" <<".Kalori\n";
	cout << " Hamburger mengandung 257 Kalori\n";
	files.close();
}

void Pzz(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Pizza";
	files << nama <<".163" <<".Kalori\n";
	cout << " Pizza mengandung 163 Kalori\n";
	files.close();
}

void StK(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Sate.Kambing";
	files << nama <<".729" <<".Kalori\n";
	cout << " Sate Kambing mengandung 729 Kalori\n";
	files.close();
}

void KFC(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Kentucky.Fried.Chicken";
	files << nama <<".250" <<".Kalori\n";
	cout << " Kentucky Fried Chicken mengandung 250 Kalori\n";
	files.close();
}

void TG(){ 
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Toge.Goreng";
	files << nama <<".243" <<".Kalori\n";
	cout << " Toge Goreng mengandung 243 Kalori\n";
	files.close();
}

void Smy(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Siomay";
	files << nama <<".361" <<".Kalori\n";
	cout << " Siomay mengandung 361 Kalori\n";
	files.close();
}

//Tampilan Menu no [4] Buah 
void BuahMenu(){
	system("CLS");
	cout << "[1]  Apel							\n";
	cout << "[2]  Jambu Biji					\n";
	cout << "[3]  Duku							\n";
	cout << "[4]  Belimbing						\n";
	cout << "[5]  Pisang						\n";
	cout << "[6]  Durian						\n";
	cout << "[7]  Jeruk							\n";
	cout << "[8]  Semangka						\n";
	cout << "[9]  Rambutan						\n";
	cout << "[10] Mangga						\n";
	cout << "[11] Kembali ke Menu Sebelumnya?	\n\n";

	cout << "Yang Anda pilih?\n";
}

//Kode no [4] Buah
void Buah(){
	int selection;
	do{
		system("CLS");
		BuahMenu();
		cin >> selection;
		while( selection < 1 || selection > 11){
			cout << "invalid selection, try again ? ";
			cin  >> selection;
		};
		switch(selection){
		case 1 :
			Apl();
			break;
		case 2 :
			JB();
			break;
		case 3 :
			Dk();
			break;
		case 4 :
			Blm();
			break;
		case 5 :
			Psg();
			break;
		case 6 :
			Drn();
			break;
		case 7 :
			Jrk();
			break;
		case 8 :
			Smk();
			break;
		case 9 :
			Rmbt();
			break;
		case 10 :
			Mgg();
			break; 
		};		
		system("pause\n");
	}while(selection != 11);	

}

void Apl(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Apel";
	files << nama <<".92" <<".Kalori\n";
	cout << " Apel mengandung 92 Kalori\n";
	files.close();
}

void JB(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Jambu.Biji";
	files << nama <<".157" <<".Kalori\n";
	cout << " Jambu Biji mengandung 157 Kalori\n";
	files.close();
}

void Dk(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Duku";
	files << nama <<".81" <<".Kalori\n";
	cout << " Duku mengandung 81 Kalori\n";
	files.close();
}

void Blm(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Belimbing";
	files << nama <<".80" <<".Kalori\n";
	cout << " Belimbing mengandung 80 Kalori\n";
	files.close();
}

void Psg(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Pisang";
	files << nama <<".80" <<".Kalori\n";
	cout << " Pisang mengandung 80 Kalori\n";
	files.close();
}

void Drn(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Durian";
	files << nama <<".134" <<".Kalori\n";
	cout << " Durian mengandung 134 Kalori\n";
	files.close();
}

void Jrk(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Jeruk";
	files << nama <<".70" <<".Kalori\n";
	cout << " Jeruk mengandung 70 Kalori\n";
	files.close();
}

void Smk(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Semangka";
	files << nama <<".50" <<".Kalori\n";
	cout << " Semangka mengandung 50 Kalori\n";
	files.close();
}

void Rmbt(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Rambutan";
	files << nama <<".69" <<".Kalori\n";
	cout << " Rambutan mengandung 69 Kalori\n";
	files.close();
}

void Mgg(){
	ofstream files;

	files.open("Makanan.txt",ios::app);
	string nama = "Mangga";
	files << nama <<".90" <<".Kalori\n";
	cout << " Mangga mengandung 90 Kalori\n";
	files.close();
}

//Tampilan Menu no [2] Minuman
void minumanMenu(){
	system("CLS");
	cout << "[1]  Air Putih						\n";
	cout << "[2]  Teh							\n";
	cout << "[3]  Kopi							\n";
	cout << "[4]  Es Kelapa						\n";
	cout << "[5]  Es Cendol						\n";
	cout << "[6]  Susu Skim						\n";
	cout << "[7]  Coca Cola						\n";
	cout << "[8]  Teh Susu						\n";
	cout << "[9]  Milkshake						\n";
	cout << "[10] Jus Buah						\n";
	cout << "[11] Kembali ke Menu Sebelumnya?	\n\n";
	
	cout << "Yang Anda pilih?\n";
}

//Kode no [2] Minuman
void minuman(){
	int selection;
	do{
		system("CLS");
		minumanMenu();
		cin >> selection;
		while( selection < 1 || selection > 11){
			cout << "invalid selection, try again ? ";
			cin  >> selection;
		};

		switch(selection){
		case 1 :
			AiP();
			break;
		case 2 :
			Teh();
			break;
		case 3 :
			Kopi();
			break;
		case 4 :
			EsKlp();
			break;
		case 5 :
			EsCdl();
			break;
		case 6 :
			SsSk();
			break;
		case 7 :
			Ccl();
			break;
		case 8 :
			ThSu();
			break;
		case 9 :
			Mlsk();
			break;
		case 10 :
			JsB();
			break;
		};		
		system("pause\n");
		}while(selection != 11);	
}

void AiP(){
	ofstream files;

	files.open("Minuman.txt",ios::app);
	string nama = "Air.Putih";
	files << nama <<".0" <<".Kalori\n";
	cout << " Air Putih mengandung 0 Kalori\n";
	files.close();
}

void Teh(){
	ofstream files;

	files.open("Minuman.txt",ios::app);
	string nama = "Teh";
	files << nama <<".5" <<".Kalori\n";
	cout << " Teh mengandung 5 Kalori\n";
	files.close();
}

void Kopi(){
	ofstream files;

	files.open("Minuman.txt",ios::app);
	string nama = "Kopi";
	files << nama <<".18" <<".Kalori\n";
	cout << " Kopi mengandung 18 Kalori\n";
	files.close();
}

void EsKlp(){
	ofstream files;

	files.open("Minuman.txt",ios::app);
	string nama = "Es.Kelapa";
	files << nama <<".42" <<".Kalori\n";
	cout << " Es Kelapa mengandung 42 Kalori\n";
	files.close();
}

void EsCdl(){
	ofstream files;

	files.open("Minuman.txt",ios::app);
	string nama = "Es.Cendol";
	files << nama <<".168" <<".Kalori\n";
	cout << " Es Cendol mengandung 168 Kalori\n";
	files.close();
}

void SsSk(){
	ofstream files;

	files.open("Minuman.txt",ios::app);
	string nama = "Susu.Skim";
	files << nama <<".54" <<".Kalori\n";
	cout << " Susu Skim mengandung 54 Kalori\n";
	files.close();
}

void Ccl(){
	ofstream files;

	files.open("Minuman.txt",ios::app);
	string nama = "Coca-Cola";
	files << nama <<".630" <<".Kalori\n";
	cout << " Coca - Cola mengandung 630 Kalori\n";
	files.close();
}

void ThSu(){
	ofstream files;

	files.open("Minuman.txt",ios::app);
	string nama = "Teh.Susu";
	files << nama <<".75" <<".Kalori\n";
	cout << " Teh Susu mengandung 75 Kalori\n";
	files.close();
}

void Mlsk(){
	ofstream files;

	files.open("Minuman.txt",ios::app);
	string nama = "Milkshake";
	files << nama <<".900" <<".Kalori\n";
	cout << " Milkshake mengandung 900 Kalori\n";
	files.close();
}

void JsB(){
	ofstream files;

	files.open("Minuman.txt",ios::app);
	string nama = "Jus.Buah";
	files << nama <<".165" <<".Kalori\n";
	cout << " Jus Buah mengandung 165 Kalori\n";
	files.close();
}

//Tampilan Menu Utama no [2] Kalori yang Dibakar
void KalBarMenu(){
	system("CLS");
	cout << "[1]  Bersepeda 				\n";
	cout << "[2]  Lompat Tali 				\n";
	cout << "[3]  Berenang 					\n";
	cout << "[4]  Berlari 					\n";
	cout << "[5]  Senam Aerobik 			\n";
	cout << "[6]  Bertennis 				\n";
	cout << "[7]  Squash Jump				\n";
	cout << "[8]  Mengemudi					\n";
	cout << "[9]  Jogging 					\n";
	cout << "[10] Office Work 				\n";
	cout << "[11] Kembali ke Menu Awal		\n\n";
	
	cout << "Yang Anda pilih?\n";
}

//Kode no [2] Kalori yang Dibakar
void KalBar(){
	int selection;
	do{
		system("CLS");
		KalBarMenu();
		cin >> selection;
		while( selection < 1 || selection > 11){
			cout << "invalid selection, try again ? ";
			cin  >> selection;
		};

		switch(selection){
		case 1 :
			cout << " Bersepeda dapat Membakar +- 950 Kalori / Jam		\n";
			break;
		case 2 :
			cout << " Lompat Tali dapat Membakar +- 850 Kalori / Jam	\n";
			break;
		case 3 :
			cout << " Berenang dapat Membakar +- 840 Kalori / Jam		\n";
			break;
		case 4 :
			cout << " Berlari dapat Membakar +- 748 Kalori / Jam		\n";
			break;
		case 5 :
			cout << " Senam Aerobik	dapat Membakar +- 680 Kalori / Jam	\n";
			break;
		case 6 :
			cout << " Bertennis dapat Membakar +- 350 Kalori / Jam		\n";
			break;
		case 7 :
			cout << " Squash Jump dapat Membakar +- 650 Kalori / Jam	\n";
			break;
		case 8 :
			cout << " Mengemudi dapat Membakar +- 110 Kalori / Jam		\n";
			break;
		case 9 :
			cout << " Jogging dapat Membakar +- 500 Kalori / Jam		\n";
			break;
		case 10 :
			cout << " Office Work dapat Membakar +- 140 Kalori / Jam	\n";
			break;
		};		
		system("pause\n");
		}while(selection != 11);	
}

//Tampilan Menu Utama no [3] Mengukur Berat Badan
void BeBanMenu(){
	system("CLS");
	cout << "Jenis Kelamin Anda Adalah ?	\n";
	cout << "[1] Pria						\n";
	cout << "[2] Wanita						\n";
	cout << "[3] Kembali ke Menu Awal?		\n\n";

	cout << "Yang Anda pilih?\n";
}

//Kode no [3] Mengukur Berat Badan
void BeBan(){
	int selection;
	do{
		system("CLS");
		BeBanMenu();
		cin >> selection;
		while(selection < 1 || selection > 3){
			cout << "invalid selection, try again ? ";
			cin >> selection;
		};

		switch(selection){

		case 1 :
			pria();
			break;
		case 2 :
			wanita();
			break;
		};		
	}while(selection != 3);
	
}

//Kode Mengukur Berat Badan Pria [1]
void pria(){
	int selection;
	do{
		system("CLS");
		BekBanLkMenu();
		cin >> selection;
		while(selection < 1 || selection > 4){
			cout << "invalid selection, try again ? ";
			cin >> selection;
		};

		switch(selection){

		case 1 :
			KecilLk();
			break;
		case 2 :
			SedangLk();
			break;
		case 3 :
			BesarLk();
			break;
		};
	}while(selection != 4);

}

//Tampilan Menu Bentuk Badan Pria
void BekBanLkMenu(){
	system("CLS");
	cout << "Bentuk Badan Anda ?				\n";
	cout << "[1] Kecil							\n";
	cout << "[2] Sedang							\n";
	cout << "[3] Besar							\n";
	cout << "[4] Kembali ke Menu Sebelumnya ?	\n\n";


	cout << "Yang Anda Pilih?\n";
}

//Kode Bentuk Badan Pria Kecil
void KecilLk(){
	string berat;

	cout << "Masukkan Tinggi Badan Anda ?	\n";
	cin  >> selection;

	if(selection <= 160){
		berat = "Berat Ideal Anda berada diantara 54 - 56 Kg";}
	else if(selection <= 165){
		berat = "Berat Ideal Anda berada diantara 55 - 59 Kg";}
	else if(selection <= 170){
		berat = "Berat Ideal Anda berada diantara 58 - 62 Kg";}
	else if(selection <= 175){
		berat = "Berat Ideal Anda berada diantara 62 - 66 Kg";}
	else if(selection <= 180){
		berat = "Berat Ideal Anda berada diantara 66 - 70 Kg";}
	else if(selection <= 185){
		berat = "Berat Ideal Anda berada diantara 68 - 74 Kg";}
	else if(selection <= 190){
		berat = "Berat Ideal Anda berada diantara 73 - 78 Kg";}
	else{ berat = "Berat Ideal Anda berada diantara 76 - 82 Kg";}

	cout << berat << "\n";
	system("pause\n");
}

//Kode Bentuk Badan Pria sedang
void SedangLk(){
	string berat;

	cout << "Masukkan Tinggi Badan Anda ?	\n";
	cin  >> selection;

	if(selection <= 160){
		berat = "Berat Ideal Anda berada diantara 55 - 60 Kg";}
	else if(selection <= 165){
		berat = "Berat Ideal Anda berada diantara 58 - 63 Kg";}
	else if(selection <= 170){
		berat = "Berat Ideal Anda berada diantara 61 - 67 Kg";}
	else if(selection <= 175){
		berat = "Berat Ideal Anda berada diantara 65 - 71 Kg";}
	else if(selection <= 180){
		berat = "Berat Ideal Anda berada diantara 68 - 75 Kg";}
	else if(selection <= 185){
		berat = "Berat Ideal Anda berada diantara 72 - 80 Kg";}
	else if(selection <= 190){
		berat = "Berat Ideal Anda berada diantara 76 - 84 Kg";}
	else{ berat = "Berat Ideal Anda berada diantara 78 - 86 Kg";}

	cout << berat << "\n";
	system("pause\n");
}

//Kode Bentuk Badan Pria besar
void BesarLk(){
	string berat;

	cout << "Masukkan Tinggi Badan Anda ?	\n";
	cin  >> selection;

	if(selection <= 160){
		berat = "Berat Ideal Anda berada diantara 59 - 66 Kg";}
	else if(selection <= 165){
		berat = "Berat Ideal Anda berada diantara 61 - 69 Kg";}
	else if(selection <= 170){
		berat = "Berat Ideal Anda berada diantara 65 - 73 Kg";}
	else if(selection <= 175){
		berat = "Berat Ideal Anda berada diantara 69 - 77 Kg";}
	else if(selection <= 180){
		berat = "Berat Ideal Anda berada diantara 72 - 81 Kg";}
	else if(selection <= 185){
		berat = "Berat Ideal Anda berada diantara 76 - 86 Kg";}
	else if(selection <= 190){
		berat = "Berat Ideal Anda berada diantara 80 - 81 Kg";}
	else{ berat = "Berat Ideal Anda berada diantara 85 - 96 Kg";}

	cout << berat << "\n";
	system("pause\n");
}

//Kode Mengukur Berat Badan Wanita [2]
void wanita(){
	int selection;
	do{
		system("CLS");
		BekBanPrMenu();
		cin >> selection;
		while(selection < 1 || selection > 4){
			cout << "invalid selection, try again ? ";
			cin >> selection;
		};

		switch(selection){

		case 1 :
			KecilPr();
			break;
		case 2 :
			SedangPr();
			break;
		case 3 :
			BesarPr();
			break;
		};
	}while(selection != 4);

}

//Tampilan Menu no[2] Berat Badan Wanita
void BekBanPrMenu(){
	system("CLS");
	cout << "Bentuk Badan Anda ?				\n";
	cout << "[1] Kecil							\n";
	cout << "[2] Sedang							\n";
	cout << "[3] Besar							\n";
	cout << "[4] Kembali ke Menu Sebelumnya ?	\n\n";

	cout << "Yang Anda Pilih?\n";
}

//Kode Bentuk Badan Wanita kecil
void KecilPr(){
	string berat;

	cout << "Masukkan Tinggi Badan Anda ?	\n";
	cin  >> selection;

	if(selection <= 150){
		berat = "Berat Ideal Anda berada diantara 42 - 45 Kg";}
	else if(selection <= 155){
		berat = "Berat Ideal Anda berada diantara 45 - 50 Kg";}
	else if(selection <= 160){
		berat = "Berat Ideal Anda berada diantara 48 - 51 Kg";}
	else if(selection <= 165){
		berat = "Berat Ideal Anda berada diantara 51 - 54 Kg";}
	else if(selection <= 170){
		berat = "Berat Ideal Anda berada diantara 54 - 58 Kg";}
	else if(selection <= 175){
		berat = "Berat Ideal Anda berada diantara 57 - 62 Kg";}
	else if(selection <= 180){
		berat = "Berat Ideal Anda berada diantara 61 - 66 Kg";}
	else{ berat = "Berat Ideal Anda berada diantara 63 - 69 Kg";}

	cout << berat << "\n";
	system("pause\n");
}

//Kode Bentuk Badan Wanita sedang
void SedangPr(){
	string berat;

	cout << "Masukkan Tinggi Badan Anda ?	\n";
	cin  >> selection;

	if(selection <= 150){
		berat = "Berat Ideal Anda berada diantara 45 - 50 Kg";}
	else if(selection <= 155){
		berat = "Berat Ideal Anda berada diantara 47 - 54 Kg";}
	else if(selection <= 160){
		berat = "Berat Ideal Anda berada diantara 50 - 56 Kg";}
	else if(selection <= 165){
		berat = "Berat Ideal Anda berada diantara 53 - 57 Kg";}
	else if(selection <= 170){
		berat = "Berat Ideal Anda berada diantara 56 - 63 Kg";}
	else if(selection <= 175){
		berat = "Berat Ideal Anda berada diantara 59 - 64 Kg";}
	else if(selection <= 180){
		berat = "Berat Ideal Anda berada diantara 64 - 71 Kg";}
	else{ berat = "Berat Ideal Anda berada diantara 67 - 79 Kg";}

	cout << berat << "\n";
	system("pause\n");
}

//Kode Bentuk Badan Wanita besar
void BesarPr(){
	string berat;

	cout << "Masukkan Tinggi Badan Anda ?	\n";
	cin  >> selection;

	if(selection <= 150){
		berat = "Berat Ideal Anda berada diantara 48 - 56 Kg";}
	else if(selection <= 155){
		berat = "Berat Ideal Anda berada diantara 52 - 59 Kg";}
	else if(selection <= 160){
		berat = "Berat Ideal Anda berada diantara 54 - 61 Kg";}
	else if(selection <= 165){
		berat = "Berat Ideal Anda berada diantara 57 - 65 Kg";}
	else if(selection <= 170){
		berat = "Berat Ideal Anda berada diantara 60 - 68 Kg";}
	else if(selection <= 175){
		berat = "Berat Ideal Anda berada diantara 64 -72 Kg";}
	else if(selection <= 180){
		berat = "Berat Ideal Anda berada diantara 67 - 76 Kg";}
	else{ berat = "Berat Ideal Anda berada diantara 70 - 82 Kg";}

	cout << berat << "\n";
	system("pause\n");
}

//Kode Tampilan Animasi
void prompt(string t){
	int i;
	for(i=0; i<t.length(); i++){
		cout << t[i];
		Sleep(25);
	};
}

//Kode Menu Utama no [4] Tips dan Trik
void TpTr(){
	system("CLS");
	cout << "Agar kalori yang anda konsumsi dapat terjaga & teratur dengan baik				\n"; 
	cout << "berikut ini adalah beberapa tips & trik yang dapat Anda terapkan.				\n\n";

	cout << "[a] Kontrol makanan yang dikonsumsi & pertahankan waktu olahraga Anda.			\n";
	cout << "    Gunakan aplikasi pengingat untuk mengatur pola makan Anda					\n";
	cout << "    sehingga dapat tercatat													\n\n";

	cout << "[b] Lihat semua charts dari makanan & nutrisi yang Anda konsumsi.				\n";
	cout << "    Grafik kesehatan & diabetes.												\n\n";
		
	cout << "[c] Perhatikan kalori yang Anda konsumsi berasal dari lemak,					\n";
	cout << "    karbohidrat & protein.\n";
	cout << "    Tinjau kemajuan program sehat Anda dengan nutrisi & kalori grafik.			\n\n";

	cout << "[d] Tetapkan tujuan Anda untuk mendapatkan asupan vitamin & mineral yang cukup.\n";
	cout << "    Perhatikan kafein, lemak, karbohidrat, & sebagainya yang Anda konsumsi.	\n\n";

	cout << "[e] Lacak & atur jadwal & waktu tidur, berat badan serta tekanan darah Anda.	\n\n";

	cout << "[f] Lacak gula darah, A1C, tekanan darah, kolestrol & obat yang Anda konsumsi.	\n\n";

	system("pause\n");
}

//Kode Menu Utama no [5] Cek Riwayat
void CheckRiwayat(){
	do{
		system("CLS");
		checkMenu();
		cin >> selection;
		while(selection < 1 || selection > 3){
			cout << "invalid selection, try again ? ";
			cin >> selection;
		};

		switch(selection){

		case 1 :
			CheckMakanan();
			break;
		case 2 :
			CheckMinuman();
			break;
		};		
	}while(selection != 3);
	
}

//Tampilan Menu Cek Riwayat
void checkMenu(){
	system("CLS");
	cout << "[1] Check Makanan		\n";
	cout << "[2] Check Minuman		\n";
	cout << "[3] Kembali ke Menu Awal?	\n\n";

	cout << "Yang Anda Pilih? ";
}

//Kode Cek Riwayat Makanan
void CheckMakanan(){
	string nama;
	
	ifstream files;

	system("CLS");
	files.open("Makanan.txt");
	cout<<"Riwayat Makanan yang telah dikonsumsi\n\n";

	while(files >> nama){
	cout << nama << "\n\n";
	} 

	cout <<"\n";
	system("pause");
}

//Kode Cek Riwayat Minuman
void CheckMinuman(){
	string nama;
	
	ifstream files;

	system("cls");
	files.open("Minuman.txt");
	cout<<"Riwayat Minuman yang telah dikonsumsi\n\n";

	while(files >> nama){
	cout << nama << "\n\n";
	} 

	cout <<"\n";
	system("pause");
}

//Tampilan Menu Utama no [6] Reset Riwayat Makanan dan Minuman
void ResetMenu(){
	system("CLS");
	cout << "1. Reset Makanan			\n";
	cout << "2. Reset Minuman			\n";
	cout << "3. Kembali ke Menu Awal?	\n\n";

	cout << "Yang Anda Pilih? ";
}

//Kode Reset Riwayat 
void Reset(){
	do{
		system("CLS");
		ResetMenu();
		cin >> selection;
		while(selection < 1 || selection > 3){
			cout << "invalid selection, try again ? ";
			cin >> selection;
		};

		switch(selection){

		case 1 :
			ResetMakanan();
			break;
		case 2 :
			ResetMinuman();
			break;
		};		
	}while(selection != 3);
	
}

//Kode Reset Riwayat Makanan
void ResetMakanan(){
	ofstream files;
	files.open("Makanan.txt");
	files.open("Minuman.txt");

	cout<<"\n\nBerhasil Me-Reset Riwayat\n\n";
	system("pause");
}

//Kode Reset Riwayat Minuman
void ResetMinuman(){
	ofstream files;
	files.open("Minuman.txt");

	cout<<"\n\nBerhasil Me-Reset Riwayat\n\n";
	system("pause");
}

//Tampilan Menu Utama no [7] Tentang
void About(){
	system("CLS");

	cout << "Calories Counter							\n\n";
	cout << "Version Beta 1.0.0							\n";
	cout << "Developed by Aditya Ismail					\n";
	cout << "Mentored  by Gun Gun Gumilar, S.Kom., MMSI	\n";
	cout << "Open Source Simple Application				\n\n";
	cout << "Algorithm and Programming Project			\n";

	system("pause\n");
}

