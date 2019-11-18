#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data_mahasiswa
{
	char npm[20];
	float ipk;
};
typedef struct data_mahasiswa mhs;

int main()
{
	char a[20];
	int i,m;
	mhs data[3];
	//data[0].npm = "1808101";
	strcpy(data[0].npm,"18081010121");
	data[0].ipk = 3.3;

	//data[1].npm = "1808102";
	strcpy(data[1].npm,"18081010122");
	data[1].ipk = 3.4;
	
	//data[2].npm = "1808103";
	strcpy(data[2].npm,"18081010123");
	data[2].ipk = 3.9;
while(m!=4){	
	printf("\n1 menampilkan data\n2. mengurutkan data dari terbesaar ke terkecil\n3. mencari data\n4. exit\n masukan nilai = ");
	scanf("%d",&m);

	
switch(m){

case 1: for(i = 0 ; i<3 ; i++)
			{
		printf("%s = %f \n\n", data[i].npm, data[i].ipk);
		}
	break;
	
case 2 :	printf("di urutkan dari npm terbesar ke yang terkecil");
		for (i= 3;i>=0;i--){
			printf("%s = %f \n\n", data[i].npm, data[i].ipk);
		}
		break;
	
case 3:	printf("Masukan NPM yang di cari = ");
	scanf("%s",a);
			int index=-1;
			for(i=0;i<3;i++){
				if(!strcmp(a,data[i].npm)){
					printf("IPK nya : %f",data[i].ipk);
					index=i;
				}
			}
			if(index==-1){
				printf("Data tidak ada");
			}
	break;

case 4 : printf("teerima kasih saya iqbal alfiansyah");
break;

default : printf ("pilih 1,2,3,4");	
		}	
  	}
}
//iqbal alfiansyah 18081010123
