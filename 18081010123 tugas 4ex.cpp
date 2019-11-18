#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct mahasiswa{
	char nama[15];
	char npm[15];
};

typedef struct mahasiswa mhs;

int main(){
	int sks[50][30],totalsks,i=0,exit=0,semester,x,y,jmlmatkul,skssmt[14],jumlahsks=0;
	char matkul[30][30],nilaihuruf[50][30];
	float nr[14], totalnr=0,ipk,jumlahnilai,nilai;
	mahasiswa mhs[50];	
	
	do{
		printf("Masukan Nama = ");
		scanf("%s",&mhs[i].nama);
		fflush(stdin);
		printf("Masukan Npm = ");
		scanf("%s",&mhs[i].npm);
		fflush(stdin);
		printf("Masukan Jumlah Semester = ");
		scanf("%d",&semester);
		fflush(stdin);
		if(semester<2){
			printf("Belum Ada Ipk");
			return 0;
		}else{
			for(x =0;x<semester;x++){
				int jumlahnilai =0;
				int jumlahsks = 0;
				printf("Masukan jumlah mata kuliah = ");
				scanf("%d",&jmlmatkul);
				if(jmlmatkul<2){
					printf("Jumlah matkul kurang dari 2"); 
					return 0;
				}else{
					for (y=0;y<jmlmatkul;y++){
						printf("masukan nama mata kuliah = ");
						scanf("%s",&matkul[x][y]);
						fflush(stdin);
						printf("masukan jumlah sks = ");
						scanf("%d",&sks[x][y]);
						fflush(stdin);
						printf("Masukan Nilai Huruf Matkul (A,B,C,D) = ");
						scanf("%c",&nilaihuruf[x][y]);
							fflush(stdin);
						
						if(nilaihuruf[x][y]=='A'){
							nilai= 4*sks[x][y];
						}
						else if(nilaihuruf[x][y]=='B'){
							nilai = 3*sks[x][y];
						}
						else if(nilaihuruf[x][y]=='C'){
							nilai = 2*sks[x][y];
						}
						else if (nilaihuruf[x][y] == 'D'){
							nilai=1*sks[x][y];
						}				
						else if (nilaihuruf[x][y]=='E'){
							nilai = 0;
						}else{
							printf("nilai salah");	
							return 0;
						}
						jumlahnilai = jumlahnilai + nilai;
						jumlahsks = jumlahsks+sks[x][y];	
					}
					if(jumlahsks > 24){
						printf("Jumlah sks melebihi batas");
						return 0;
					}else{
						skssmt[x] = jumlahsks;
						nr[x] = jumlahnilai / jumlahsks;
					}
				}
			}
		}
	
		
		system("cls");
		
		printf("==============================================\n");
  		printf("\t\tTranskrip Nilai\n");
  		printf("==============================================\n");
  		
  		for(x=0;x<semester;x++){
  			printf("Nama=	%s",mhs[x].nama);
  			printf("Npm	=	%s",mhs[x].npm);
  			printf("\nHasil Semester %d :\n", x+1);
  			   printf("\nSKS\t: %d\n", skssmt[x]);
    printf("NR\t: %.2f\n", nr[x]);
    	totalsks = totalsks + skssmt[x];
    		totalnr = totalnr + nr[x];
  		}
  		
    		ipk = totalnr/semester;
  			printf("ipk =	%f",ipk);
  			
  		printf("\n\n1.exit\n2.lanjutkan\npilihan =  ");
  		scanf("%d",&exit);
  		
	}while(exit!=1);
	printf("Terima kasih iqbal alfiansyah 180810123");
}


