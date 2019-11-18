#include <stdio.h>
#include <conio.h>
#include <string.h>

//iqbal alfiansyah 18081010123;
int main(){ 
awal:
	int a,m;
	int cari;
	int npm[3]={1,2,3};
	float ipk[3]={3.5,4.0,2.2};
	printf("\nmasukan pilihan\n1.urutan dari npm tekecil\n2. urutan dari npm terbesar\n3. pencarian\n4. exit\nMasukan Pilihan =");
	scanf("%d",&m);
	
	switch(m){
	case 1:
		for (a=0;a<3;a++){
			printf("\nnpm = %d\nipk = %f",npm[a],ipk[a]);
		}
		goto awal;
		break;
	case 2 :
		
		for(a=2;a>=0;a--){
		printf("\nnpm = %d\nipk = %f",npm[a],ipk[a]);
		}
		goto awal;
		break;

	
	case 3 :
		printf("cari npm ke = ");
		scanf("%d",&cari);
		
		if(cari == npm[cari-1]  ){
			printf("====data====");
			printf("\n%d\n%f\n",npm[cari-1],ipk[cari-1]);
			goto awal;
			break;
		}else{
			printf("tidak ada");
			goto awal;
			break;
		}
		break;
	case 4 : printf("thank you very much ");
	break;
		
	default : printf("pilih 1,2,3");
	break;
	
	
	
	}
	return 0;
}
