#include <stdio.h>
struct mahasiswa{
	char nama[15];
	char npm[15];
};

typedef struct mahasiswa mhs;

int main() {
  mahasiswa mhs[50];	

  int i, j, jmlsmt, jmlmk, sks[50][30], skssmt[14], jumlahsks, totalsks=0;
  char mk[30], nilaihuruf[50][30], matkul[50][50][30];
  float ipk,nr[14], totalnr=0,jumlahnilai,nilai;
  
  	printf("Masukan Nama = ");
	scanf("%s",&mhs[0].nama);
	fflush(stdin);
	printf("Masukan Npm = ");
	scanf("%s",&mhs[0].npm);
	fflush(stdin);
  printf("==============================================\n");
  printf("\tProgram Menghitung IPK Mahasiswa\n");
  printf("==============================================\n");
  printf("Masukkan jumlah semester: ");
  scanf("%d", &jmlsmt);
  if (jmlsmt < 2 || jmlsmt > 14) {
    printf("Jumlah semester salah!\n");
    return 0;
  }
  else {
    for (i = 0; i < jmlsmt; i++) {
      jumlahnilai = 0;
      jumlahsks = 0;
      printf("Masukkan jumlah mata kuliah semester %d: ", i + 1);
      scanf("%d", &jmlmk);
      if (jmlmk < 2) {
        printf("Jumlah matakuliah kurang dari 2 setiap semester\n");
        return 0;
      }
      else {
        for (j = 0; j < jmlmk; j++) {
          printf("Masukkan mata kuliah ke %d\n", j + 1);
          printf("Masukkan nama matkul: ");
          scanf(" %s", matkul[i][j]);
          fflush(stdin);
          printf("Masukkan jumlah sks matkul: ");
          scanf("%d", &sks[i][j]);
          printf("Masukkan nilai matkul: ");
          scanf(" %c", &nilaihuruf[i][j]);
          fflush(stdin);
          printf("--------------------------------------------\n");
          if (nilaihuruf[i][j] == 'A') {
            nilai = 4 * sks[i][j];
          }
          else if (nilaihuruf[i][j] == 'B') {
            nilai = 3 * sks[i][j];
          }
          else if (nilaihuruf[i][j] == 'C') {
            nilai = 2 * sks[i][j];
          }
          else if (nilaihuruf[i][j]=='D') {
            nilai = 1 * sks[i][j];
          }
          else if (nilaihuruf[i][j]=='E') {
            nilai = 0 * sks[i][j];
          }
          else {
            printf("Input salah!\n");
            return 0;
          }
          jumlahnilai = jumlahnilai + nilai;
          jumlahsks = jumlahsks + sks[i][j];
        }
        if(jumlahsks > 24){
          printf("Jumlah SKS semester lebih dari 24\n");
          return 0;
          
        } else {
          skssmt[i] = jumlahsks;
          nr[i] = jumlahnilai / jumlahsks;
        }   
      }
    }
  }
  printf("==============================================\n");
  printf("\t\tTranskrip Nilai\n");
  printf("==============================================\n");
  for(i = 0; i < jmlsmt; i++){
  	printf("Nama=	%s",mhs[0].nama);
  	printf("Npm	=	%s",mhs[0].npm);
    printf("\nHasil Semester %d :\n", i+1);
    printf("\n%12s%12s%12s","Mata Kuliah", "SKS", "Nilai\n");
    for(j = 0; j < jmlmk; j++){
      printf("%12s%12d%12c\n",matkul[i][j],sks[i][j],nilaihuruf[i][j]);
    }
    printf("\nSKS\t: %d\n", skssmt[i]);
    printf("NR\t: %.2f\n", nr[i]);
    totalsks = totalsks + skssmt[i];
    totalnr = totalnr + nr[i];
    printf("--------------------------------------------\n");
  }
  ipk = totalnr/jmlsmt;
  printf("\nTotal SKS\t: %d\n", totalsks);
  printf("IPK\t\t: %.2f\n", ipk);
  printf("==============================================\n");
  return 0;

}
