#include <stdio.h>
int arr[] = { 23,35,11,63,81,97,54,32,56,76};
 
void merge(int low, int mid, int high){
	int temp[high+1];
	int i = low;
	int j = mid+1;
	int k = 0;
	
	while (i <= mid && j <= high)
	{
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    
    while (i <= mid)
        temp[k++] = arr[i++];		
    while (j <= high)
        temp[k++] = arr[j++];
    	k--;
    
    while (k >= 0)
	{
        arr[k + low] = temp[k];
        k--;
	}
}

void sort(int low, int high){
	int mid;
   
    if(low < high) {
      mid = (low + high) / 2;
      sort(low, mid);
      sort(mid+1, high);
      merge(low, mid, high);
	  }else { 
      return;
   }
}

int main(){
	int i;
	printf("-----iqbal_alfiansyah-----------\n");
	printf("-----18081010123----------------\n");
	printf("-----merging_sort---------------\n");
	printf("Array awal : \n");
	for (i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	sort(0,9);
	
	printf("\nData sesudah di merge sort\n");
   
   	for(i =0; i<10; i++){   
      printf("%d ", arr[i]);
	}
	
}
