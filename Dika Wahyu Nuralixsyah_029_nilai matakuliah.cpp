#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int nilai_matkul,matkul;
	char nama [35],nim[35],prodi[35],nama_matkul[35],grade[35]="Grade Nilai Mata Kuliah";
	char *Tmatkul,*Tgrade,*Tnama,*Tnim,*Tprodi;
	Tmatkul=nama_matkul;
	Tgrade=grade;
	Tnama=nama;
	Tnim=nim;
	Tprodi=prodi;
	string grd;
	
	cout<<"=================================================="<<endl;
	cout<<"| 			Program NiLai Mata Kuliah 			|"<<endl; 
	cout<<"=================================================="<<endl;
	cout<<"\n";
	
	cout<<"Masukkan Nama : "; cin.getline(Tnama,35);
	cout<<"Masukkan NIM  : "; cin.getline(Tnim,35);
	cout<<"Masukkan Prodi: "; cin.getline(Tprodi,35);
	cout<<"Masukkan Jumlah Data Matkul : "; cin>>matkul;
	
	cout<<"===================================================="<<endl;
	cout<<"\n";
	
	for (int i=1; i<=matkul; i++)
	{
		cout<<"Data Nama Matkul : ";cin>>Tmatkul;
		cout<<"Masukkan Nilai Matkul : "; cin>>nilai_matkul;
		
		if ((nilai_matkul>=90) && (nilai_matkul<=100))
		{
			grd="A";
		}
		else if ((nilai_matkul>=80)&&(nilai_matkul<90))
		{
			grd="B";
		 } 
		else if ((nilai_matkul>=80)&&(nilai_matkul<80))
		{
			grd="C";
		}
		else if ((nilai_matkul>60)&&(nilai_matkul<70))
		{
			grd="D";
		}
		else if ((nilai_matkul>=50)&&(nilai_matkul<60))
		{
			grd="E";
		}
		else 
		{
			grd="Tidak Lulus";
		}
		cout<<"| "<<Tgrade<<"  :"<<grade<<endl;
		cout<<"================================================"<<endl;
		cout<<"\n";
	}
	
	cout<<"\n";
	cout<<" 		Tabel Nilai 		"<<endl;
	cout<<" ============================"<<endl;
	cout<<" Nilai Matkul 		Grade	"<<endl;
	cout<<" >= 90-100			  A		"<<endl;
	cout<<" >= 80-<90			  B		"<<endl;
	cout<<" >= 70-<80			  C		"<<endl;
	cout<<" >= 60->70 			  D		"<<endl;
	cout<<" >= 50->60			  E		"<<endl;
	cout<<" 	<50 	     Tidak Lulus"<<endl;
	cout<<"============================="<<endl;
	cout<<("\n");
	
	cout<<"Terima Kasih Telah Menggunakan Layanan Ini :) "<<endl;
	getch();
}
