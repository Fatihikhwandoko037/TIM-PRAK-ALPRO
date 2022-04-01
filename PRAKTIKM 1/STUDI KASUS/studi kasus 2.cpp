#include<iostream>
using namespace std;
class slipGaji {
	public:
		void antrian();
		void input();
		void proses();
		void Gaji();
		void output();
		
	private:
		int antri,pilih, jenis,kerja,jabatan,posisi;
		float gaji,bonus,bonus2;
		string a;
		
};

void slipGaji::input(){

		cout<<"============= Welcome to Our Project =============="<<endl;
		cout<<"================== Pilih Bidang ==================="<<endl;
		cout<<"========== 1. Django Python : 13 Juta / bulan ====="<<endl;
		cout<<"========== 2. Express JS    : 15 Juta / bulan ====="<<endl;
		cout<<"========== 3. Spring Java   : 8 Juta / bulan  ====="<<endl;
		cout<<"========== 5. Rails Ruby    : 8 Juta / bulan  ====="<<endl;
		cout<<"========== 5. Laravel PHP   : 18 Juta / bulan ====="<<endl;
		cout<<"========== 6. Angular JS    : 15 Juta / bulan ====="<<endl;
		cout<<"==================================================="<<endl;
		cout<<"\nJenis Kerja : ";cin>>jenis;
		cout<<"Pengalaman Kerja : ";cin>>kerja;
		cout<<"jabatan (1. Ketua/ 2. anak buah): ";cin>>jabatan;
		
	
}
void slipGaji::Gaji(){
	switch (jenis) {
		case 1:	gaji=13;break;
		case 2:	gaji=15;break;
		case 3:	gaji=8 ;break;
		case 4:	gaji=8 ;break;
		case 5:	gaji=18;break;
		case 6:	gaji=15;
	}
}
void slipGaji::proses(){
	if (kerja > 4){
		bonus= gaji*0.04;
		gaji=gaji+bonus;
		if (posisi == 1){
			bonus2= gaji*0.06;
			gaji= gaji+bonus+bonus2;
		}
	}
	else{
	gaji=gaji;	
	if (jabatan == 1){
			bonus2= gaji*0.06;
			gaji= gaji+bonus2;
		}
	}
}


void slipGaji::output(){
	cout<<"==================================="<<endl;
	cout<<"\nGaji yang anda dapatkan adalah : "<<gaji<<" Juta/bulan"<<endl;
	
	
}
int main(){
	slipGaji x;
	x.input();
	x.Gaji();
	x.proses();
	x.output();
	
	return 0;
}
