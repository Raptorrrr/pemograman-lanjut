#include <stdio.h>
#include <conio.h>
/*iqbal alfiansyah 18081010123 */

int pangkatiterasi(int a, int b){
	int hasil = a;
	for (int i=1;i<b;i++){
		hasil = hasil*a;
	}
	return hasil;
}

int pangkatrekursif(int a, int b){
	if(b<=1){
		return a;
	}
	else{
		return a*pangkatrekursif(a,(b-1));
	}
}
main(){
	int a,b;
	printf("Angka = ");
	scanf("%d",&a);
	printf("Pangkat = ");
	scanf("%d",&b);
	printf("Hasil dari pangkat iterasi = %d",pangkatiterasi(a,b));
	printf("Hasil dari pangkat rekursif = %d",pangkatrekursif(a,b));
	}
