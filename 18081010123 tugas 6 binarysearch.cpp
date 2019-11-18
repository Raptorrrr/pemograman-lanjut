#include <stdio.h>

void tampilarray(int n, int arr[]){
	
	int i;
	for (i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

int rekursif(int front, int mid, int back,int find, int arr[]){ 
	int index=-1;
	
	printf("\nRekursif \n");
	
	while(front<=back){
	printf("Depan\tTengah\tAkhir\n");
	printf("%d\t%d\t%d\n",front,mid,back);
	mid=(front+back)/2;
		if(find>arr[mid]){
			return rekursif((front=mid+1),mid,back,find,arr);
		}
		if(find<arr[mid]){
			return rekursif(front,mid,(back=mid-1),find,arr);
		}
		if(find==arr[mid]){
			printf("ada");
			index=mid;
			break;
		}
	}
	if(index==-1){
		printf("tidak ada");
	}
	
}
main(){
	
	printf("\t\t\t\t\t Iqbal Alfiansyah 18081010123 \t\t\t\t\t\n");
	int tabint[10] = {34 , 67 , 23 , 28 , 98, 15 , 89 , 67 , 28 ,18};
	
	int i,j,data_sisip,search,awal=0,akhir=9,tengah=0;
	
	for(i=0;i<10;i++){
		data_sisip = tabint[i]; //mendeklarasikan yg baru untuk data sisipnya

		j=i-1; //J pada while yang berfungsi untuk membandingkan dengan data sebelummnya
		
		while ((data_sisip < tabint[j] ) && (j >= 0)){ //untuk membandingkan array yg aawal dngan yg baru 
			tabint[j+1] = tabint[j]; //setelah dicek benar maka indek J akan maju satu 
	    	j=j-1;//setelah dibandingkan dengan angka sebelumnya maka di bandingkan dengan angka sebelumnya lagi 
		}
		tabint[j+1] = data_sisip; //menempatkan data sisipan pada array
		
	}
	tampilarray(10,tabint);
	
	
	printf("\nmasukan angka = ");
	scanf("%d",&search);
	int index=-1;
	
	printf("\nIterasi\n");
	printf("Depan\tTengah\tAkhir\n");
	while(awal<=akhir){
		
		tengah=(awal+akhir)/2;
		printf("%d\t%d\t%d\n",awal,tengah,akhir);
		if(search>tabint[tengah]){
			awal=tengah+1;
		}
		if(search<tabint[tengah]){
			akhir=tengah-1;
		}
	
		if(search==tabint[tengah]){
			printf("ada\n");
			index=tengah;
			break;
		}

	}
	if(index==-1){
		printf("data tidak ditemukan\n");
	}
	rekursif(awal,tengah,akhir,search,tabint);	
	
	
}
