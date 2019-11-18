#include <stdio.h>

void tampilarray(int n, int arr[]){
	int a;
	for(a=0;a<n;a++){
		printf("%d,",arr[a]);
	}
	
}

void insertsion(int arr[]){
	int datasisip,i,j;
	
		for(i=0;i<10;i++){
		datasisip=arr[i];
		j=i-1;
		while(datasisip<arr[j] && j>=0){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1] = datasisip;
	}

}

void selection(int arr[]){
	int i,temp,minIndex,j;
	
	for(i=0;i<9;i++){
		minIndex = i;
		
		for(j=i+1;j<10;j++){
			if(arr[minIndex]<arr[j]){
				minIndex=j;
			}
		 
		}
		
	}
}

main(){
	int a[10]={11,34,21,45,29,49,10,54,23,72};
	
	int menu=0;
	while(menu!=3){
		printf("\n1.insertsion\n2.Selection\n3.exit\npilih = ");
		scanf("%d",&menu);
		switch(menu){
			case 1  : insertsion(a);
					  printf("\n");
   					  tampilarray(10,a);
					  break;
			case 2  : selection(a);
					  printf("\n");
					  tampilarray(10,a);
					  break;
			case 3  : printf("\nIqbal alfiansyah 18081010123");
					  break;
			default : printf("\nlalalalalalala");
		}
	}
	
}
