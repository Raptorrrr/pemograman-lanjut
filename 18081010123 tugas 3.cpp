#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>


struct nama{ char namadepan[20],namabelakang[20];
};
struct alamat{ char jalan[40],kecamatan[25],provinsi[20],kota[20];
};
struct kelahiran{
		int tanggal;
		int bulan;
		int tahun;
	};
struct bank{	
	char bank[20],rekening[15],notelp[10];
	int saldo,umur;
	struct nama name;
	struct alamat adress;
	struct kelahiran birth;
}bnk[50];

void nasabah();
void view();
void saldo();
void search();
void maxmin();
void total();


int main(){ 
	int pilihan,i=0;
	int pilih;
	int ulang;
	int x;
	
	while(pilihan){
	printf("menu");
	printf("\n1. input data nasabah");
	printf("\n2. lihat data nasabah");
	printf("\n3. isi saldo ");
	printf("\n4. cari data nasabah");
	printf("\n5. saldo terbanyak dan saldo paling sedikit");
	printf("\n6. Total Saldo nasabah");
	printf("\n7. keluar");
	printf("\nPilihan 	= ");
	scanf("%d",&pilihan);
	switch(pilihan){
		case 1:
			nasabah();
			break;
		case 2:
			view();
			break;
		case 3 :
			saldo();
			break;
		case 4:
			search();
			break;
		case 5 :
			maxmin();
			break;
		case 6 :
			total();
			break;
		case 7: 
		printf("Terima kasih npm 123 heheheheheheheheheheheheheeh");
			return 0;
			break;
		default : printf("masukan pilihan 1,2,3,4,5,6,7 ");
	}
		
		
	}
	return 0;
}

int i =0;

void nasabah(){
	int pilih;
	int ulang;
	
	printf("\n===========================================================================\n");
	printf("Masukkan Nama Depan : ");
	scanf("%s",&bnk[i].name.namadepan);
	fflush(stdin);
	printf("Masukan Nama Belakang : ");
	scanf("%s",&bnk[i].name.namabelakang);
	fflush(stdin);
	printf("\n===========================================================================");
	while(ulang);
	printf("\nPilih Bank\n");
	printf("1. BNI\n");
	printf("2. BRI\n");
	printf("3. Mandiri\n");
	printf("4. BCA\n");
	printf("Masukkan Pilihan : ");
	scanf("%d",&pilih);
		switch(pilih){
					case 1:
						{
							strcpy(bnk[i].bank,"BNI");
							printf("\nBank BNI terpilih");
							printf("\nMasukkan No rek			: ");
							scanf("%s",&bnk[i].rekening);
						}
						break;
					case 2:
						{
							strcpy(bnk[i].bank,"BRI");
							printf("Bank BRI terpilih");
							printf("\nMasukkan No rek			: ");
							scanf("%s",&bnk[i].rekening);	
						}
						break;
					case 3:
						{
							strcpy(bnk[i].bank,"Mandiri");
							printf("Bank Mandiri terpilih");
							printf("\nMasukkan No rek			: ");
							scanf("%s",&bnk[i].rekening);
						}
						break;
					case 4:
						{
							strcpy(bnk[i].bank,"BCA");
							printf("Bank BCA terpilih");
							printf("\nMasukkan No rek			: ");
							scanf("%s",&bnk[i].rekening);
						}
						break;
					default :
						printf("Pilihan Tidak Ada");
						ulang == 0;
				}
				printf("==========================================================\n");
				printf("masukkan umur			: ");
				scanf("%d",&bnk[i].umur);
				fflush(stdin);
				printf("==========================================================\n");
				printf("Tanggal lahir\n");
				printf("masukkan tanggal lahir		: ");
				scanf("%d",&bnk[i].birth.tanggal);
				fflush(stdin);
				printf("masukkan bulan lahir		: ");
				scanf("%d",&bnk[i].birth.bulan);
				fflush(stdin);
				printf("masukkan tahun lahir		: ");
				scanf("%d",&bnk[i].birth.tahun);
				fflush(stdin);
				printf("==========================================================\n");
				printf("Alamat\n");
				printf("masukkan nama jalan		: ");
				gets(bnk[i].adress.jalan);
				fflush(stdin);
				printf("masukkan nama kecamatan		: ");
				gets(bnk[i].adress.kecamatan);
				fflush(stdin);
				printf("masukkan nama kota		: ");
				gets(bnk[i].adress.kota);
				fflush(stdin);
				printf("masukkan nama provinsi		: ");
				gets(bnk[i].adress.provinsi);
				fflush(stdin);
				printf("==========================================================\n");
				printf("Saldo\n");
				printf("masukkan jumlah saldo		: ");
				scanf("%d",&bnk[i].saldo);
				fflush(stdin);
				printf("==========================================================\n");
				printf("\n\n Tekan untuk kembali ke menu!");
				i++;	
				getch();
				system("cls");
}

void view(){
	int j = 0;
	if(i!=0){
    	printf("\nData Semua Nasabah");
		while(j<i){
			printf("\n\n| Nasabah %s %s",bnk[j].name.namadepan,bnk[j].name.namabelakang);
			printf("\n");
	    	printf("\n No rekening    : %s",bnk[j].rekening);
	        printf("\n\n| Nama %s %s",bnk[j].name.namadepan,bnk[j].name.namabelakang);
	        printf("\n Bank           : %s", bnk[j].bank);
	        printf("\n umur           : %d", bnk[j].umur);
	        printf("\n tanggal lahir  : %d-%d-%d", bnk[j].birth.tanggal,bnk[j].birth.bulan,bnk[j].birth.tahun);
	        printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",bnk[j].adress.jalan,bnk[j].adress.kecamatan,bnk[j].adress.kota,bnk[j].adress.provinsi);
	        printf("\n Saldo          : %d",bnk[j].saldo);
	        printf("\n===========================================================================");
	        printf("\n\n Tekan untuk kembali ke menu!");
	        j++;
	    }
		
	}
	
	else if(i==0){
		printf("Input data dulu");
		printf("\n\n Tekan untuk kembali ke menu!");
	}
	getch();
	system("cls");
}


void saldo(){
	int j=0;
	int isi;
	char norek[20];
	
	printf("\n=====================================================");
	printf("\n			Pengisian Saldo			");
	printf("\n=====================================================");
	fflush(stdin);
	printf("\nMasukkan no rekening : ");
	gets(norek);
	system("cls");
	while(j<i){
		if(strcmp(bnk[j].rekening,norek)==0){
			printf("\n=====================================================");
			printf("\nHalo %s %s				", bnk[j].name.namadepan,bnk[j].name.namabelakang);
			printf("\nSilakan Menambah Saldo Anda");
			printf("\n=====================================================");
			printf("\nMasukkan nominal saldo : ");
			scanf("%d",&isi);
			bnk[j].saldo+=isi;
			printf("\nSaldo baru anda adalah : %d", bnk[j].saldo);
			printf("\n\n Tekan untuk kembali ke menu!");
		}
		else if(i == 0){
			printf("data tidak di temukan");
			printf("\n\n Tekan untuk kembali ke menu!");
		}
		j++;
	}
	getch();
	system("cls");
}

void search(){
	int memilih;
	int loop;
	int j = 0;
	
	while(loop==0);
	printf("\n=====================================================");
	printf("\n                    Menu Cari");
	printf("\n=====================================================");
	printf("\n1. cari dengan jalan");
	printf("\n2. cari dengan kecamatan");
	printf("\n3. cari dengan kota");
	printf("\n4. cari dengan provinsi");
	printf("\n5. cari dengan umur");
	printf("\n=====================================================");
	fflush(stdin);
	printf("\nPilih : ");
	scanf("%d",&memilih);
	system("cls");
	
	switch(memilih){
		case 1:
			char jalan[50];
			printf("\n=====================================================");
			printf("\nCari Jalan		");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan nama jalan : ");
			gets(jalan);
			system("cls");
			while(j<i){
				if(strcmp(bnk[j].adress.jalan,jalan)==0);
					printf("\n\n| Nasabah %s",bnk[j].name.namadepan);
					printf("\n");
			    	printf("\n No rekening    : %s",bnk[j].rekening);
	    		    printf("\n Nama           : %s", bnk[j].name.namadepan);
	        		printf("\n Bank           : %s", bnk[j].bank);
	        		printf("\n umur           : %d", bnk[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", bnk[j].birth.tanggal,bnk[j].birth.bulan,bnk[j].birth.tahun);
	    		    printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",bnk[j].adress.jalan,bnk[j].adress.kecamatan,bnk[j].adress.kota,bnk[j].adress.provinsi);
	        		printf("\n Saldo          : %d",bnk[j].saldo);
	    	    	printf("\n===========================================================================");
	        		printf("\n\n Tekan untuk kembali ke menu!");
	        		
				j++;
			}
			if(i == 0){
				printf("data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}
			getch();
			system("cls");
			break;
		case 2:
			char kecamatan[20];
			printf("\n=====================================================");
			printf("\nCari kecamatan		");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan nama kecamatan : ");
			gets(kecamatan);
			system("cls");
			while(j<i){
				if(strcmp(bnk[j].adress.kecamatan,kecamatan)==0);
					printf("\n\n| Nasabah %s",bnk[j].name.namadepan);
					printf("\n");
			    	printf("\n No rekening    : %s",bnk[j].rekening);
	    		    printf("\n Nama           : %s", bnk[j].name.namadepan);
	        		printf("\n Bank           : %s", bnk[j].bank);
	        		printf("\n umur           : %d", bnk[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", bnk[j].birth.tanggal,bnk[j].birth.bulan,bnk[j].birth.tahun);
	    		    printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",bnk[j].adress.jalan,bnk[j].adress.kecamatan,bnk[j].adress.kota,bnk[j].adress.provinsi);
	        		printf("\n Saldo          : %d",bnk[j].saldo);
	    	    	printf("\n===========================================================================");
	        		printf("\n\n Tekan untuk kembali ke menu!");

				j++;
			}
			if(i == 0){
				printf("data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}
			getch();
			system("cls");
			break;
		case 3:
			char kota[20];
			
			printf("\n=====================================================");
			printf("\nCari kota		");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan nama kota : ");
			gets(kota);
			system("cls");
			while(j<i){
				if(strcmp(bnk[j].adress.kota,kota)==0);
					i++;
					printf("\n\n| Nasabah %s",bnk[j].name.namadepan);
					printf("\n");
			    	printf("\n No rekening    : %s",bnk[j].rekening);
	    		    printf("\n Nama           : %s", bnk[j].name.namadepan);
	        		printf("\n Bank           : %s", bnk[j].bank);
	        		printf("\n umur           : %d", bnk[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", bnk[j].birth.tanggal,bnk[j].birth.bulan,bnk[j].birth.tahun);
	    		    printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",bnk[j].adress.jalan,bnk[j].adress.kecamatan,bnk[j].adress.kota,bnk[j].adress.provinsi);
	        		printf("\n Saldo          : %d",bnk[j].saldo);
	    	    	printf("\n===========================================================================");
	        		printf("\n\n Tekan untuk kembali ke menu!");

				j++;
			}
			if(i == 0){
				printf("data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}
			getch();
			system("cls");
			break;
		case 4:
			char provinsi[50];
			printf("\n=====================================================");
			printf("\nCari provinsi		");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan nama provinsi : ");
			gets(provinsi);
			system("cls");
			while(j<i){
				if(strcmp(bnk[j].adress.provinsi,provinsi)==0);
					printf("\n\n| Nasabah %s",bnk[j].name.namadepan);
					printf("\n");
			    	printf("\n No rekening    : %s",bnk[j].rekening);
	    		    printf("\n Nama           : %s", bnk[j].name.namadepan);
	        		printf("\n Bank           : %s", bnk[j].bank);
	        		printf("\n umur           : %d", bnk[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", bnk[j].birth.tanggal,bnk[j].birth.bulan,bnk[j].birth.tahun);
	    		    printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",bnk[j].adress.jalan,bnk[j].adress.kecamatan,bnk[j].adress.kota,bnk[j].adress.provinsi);
	        		printf("\n Saldo          : %d",bnk[j].saldo);
	    	    	printf("\n===========================================================================");
	        		printf("\n\n Tekan untuk kembali ke menu!");

			}
			if(i == 0){
				printf("data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}
			getch();
			system("cls");
			break;
		case 5:
			int umurmax,umurmin;
			int sekarang;
			int umur1,umur2;
			int umur;

			printf("\n=====================================================");
			printf("\nCari dengan rentan umur		");
			printf("\n=====================================================");
			fflush(stdin);
			printf("\nMasukkan umur kurang dari : ");
			scanf("%d",&umurmax);
			printf("\nMasukkan umur lebih  dari : ");
			scanf("%d",&umurmin);
		
			while(j<i){
				if(bnk[j].umur <= umurmax && umurmin <= bnk[j].umur){
					printf("\n\n| Nasabah %s",bnk[j].name.namadepan);
					printf("\n");
			    	printf("\n No rekening    : %s",bnk[j].rekening);
	    		    printf("\n Nama           : %s", bnk[j].name.namadepan);
	        		printf("\n Bank           : %s", bnk[j].bank);
	        		printf("\n umur           : %d", bnk[j].umur);
			        printf("\n tanggal lahir  : %d-%d-%d", bnk[j].birth.tanggal,bnk[j].birth.bulan,bnk[j].birth.tahun);
	    		    printf("\n Alamat         : jalan %s, kecamatan %s, kota %s, provinsi %s",bnk[j].adress.jalan,bnk[j].adress.kecamatan,bnk[j].adress.kota,bnk[j].adress.provinsi);
	        		printf("\n Saldo          : %d",bnk[j].saldo);
	    	    	printf("\n===========================================================================");
	        		printf("\n\n Tekan untuk kembali ke menu!");

				}	
			j++;
		}
			
			if(i == 0){
				printf("data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}

			getch();
			system("cls");
			break;
	}
}

void maxmin(){
	int max = bnk[0].saldo;
	int min = bnk[0].saldo;
	int j;

	for(j=0;j<i;j++){
		if(max < bnk[j].saldo){
			max = bnk[j].saldo;
			max=max;
		}
	}

	for(j=0;j<i;j++){
		if(min > bnk[j].saldo){
			min = bnk[j].saldo;
		}
	}
	
	for(j=0;j<i;j++){
		if(bnk[j].saldo==min){
			printf("\n\n Nasabah %s dengan saldo minimal",bnk[j].name.namadepan);
			printf("\n");
	    	printf("\n No rekening    : %s",bnk[j].rekening);
    		printf("\n Nama           : %s",bnk[j].name.namadepan);
	        printf("\n Bank           : %s",bnk[j].bank);
	        printf("\n Saldo          : %d",bnk[j].saldo);
	    	printf("\n===========================================================================");
	        printf("\n\n Tekan untuk kembali ke menu!");
		}
		if(bnk[j].saldo==max){
			printf("\n\n Nasabah %s dengan saldo maksimal",bnk[j].name.namadepan);
			printf("\n");
	    	printf("\n No rekening    : %s",bnk[j].rekening);
    		printf("\n Nama           : %s",bnk[j].name.namadepan);
	        printf("\n Bank           : %s",bnk[j].bank);
	        printf("\n Saldo          : %d",bnk[j].saldo);
	    	printf("\n===========================================================================");
	        printf("\n\n Tekan untuk kembali ke menu!");
		}
		
	}
		if(i == 0){
				printf("data tidak di temukan");
				printf("\n\n Tekan untuk kembali ke menu!");
			}
		getch();
		system("cls");
	
}

void total(){
	int j;
	int jumlah=0;
	
	for(j=0;j<i;j++){
		jumlah = jumlah + bnk[j].saldo;
	}
	printf("\n=====================================================");
	printf("\nTotal saldo dari %d nasabah : %d",i,jumlah);
	printf("\n=====================================================");
	printf("\n\n Tekan untuk kembali ke menu!");
	getch();
	system("cls");
	
}


