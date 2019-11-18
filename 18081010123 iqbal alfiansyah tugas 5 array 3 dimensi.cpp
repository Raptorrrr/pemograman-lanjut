#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
	float angka[3][3][3]; //=  { { {5,1,3 },{6,2,8},{1,2,5} },{ { -3,2,5 },{-4,3,4},{-5,7,8} } , {{ 6,6,6} , {2,1,2} , {2,6,9}}};
	
	int i,j,k;
	float distand,distand2;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("input new data array [%d] index [%d][%d] = ",i,j,k);
				scanf("%f",&angka[i][j][k]);
			}
		}
	}
	
	printf("\n");
	
	for (i=0;i<3;i++){
		distand2=0;
			for (j=0;j<3;j++){
				distand=0;
					for (k=0;k<3;k++){
						printf(" %.2f ",angka[i][j][k]);
							if (j<2) {  distand = distand + pow(angka[i][j][k]-angka[i][j+1][k],2);	}	
					}
				printf("\n");
				distand=sqrt(distand);
				distand2=distand2+distand;	
			}
			printf("Panjang Lintasan ke-%d = %.3f\n", i+1, distand2);		
	}
	printf("iqbal alfiansyah 18081010123");
}
