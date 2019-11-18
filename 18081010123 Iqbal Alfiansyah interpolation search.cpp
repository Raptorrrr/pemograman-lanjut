#include <stdio.h>

void bublesort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
			for(j=0;j<n-1;j++){		
				if(arr[j]>arr[j+1]){
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
	}
}

void view(int n, int arr[]){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
}

int interpolation(int arr[],int key,int lo,int hi){
	int index=-1;
	int pos;
	printf("pos\thi\tlo\n");
	while( lo <= hi && key >= arr[lo]  &&  key <= arr[hi]  ){
		pos = (key-arr[lo])/(arr[hi]-arr[lo])*(hi-lo)+lo;
		
		printf("%d\t%d\t%d\n",pos,hi,lo);
		
		if(arr[pos]>key){
			hi =pos-1;
		} 	
		if(arr[pos]<key){
			lo =pos+1;
		}
		if(arr[pos]==key){
			printf("Data Ditemukan di no %d",pos);
			index=1;
			break;
		}
		
	}
	if(index!=1){
		printf("Data tidak ditemukan");
	}
	
}
main(){
	printf("\t\t\tIqbal Alfiansyah\t\t\t\n\t\t\t18081010123\t\t\t\n\n");
	int bank[10] = {1,2,3,5,7,11,13,17,19,21};
	int search,low=0,high=9;
	bublesort(bank,10);
	view(10,bank);
	printf("\nMasukan data yang dicari = ");
	scanf("%d",&search);
	interpolation(bank,search,low,high);
	
}
