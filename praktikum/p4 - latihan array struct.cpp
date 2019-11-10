#include <stdio.h>
#include <conio.h>

struct ipkmhs{
	char npm[11];
	char nama[30];
	float ipk;
};

int main(){
	struct ipkmhs mhs[5];
	int i;
   	for(i=0;i<5;i++){
       printf("Pengisian Data Mahasiswa Ke-%i\n",i+1);
       printf("NIM        : ");
	   fflush(stdin);
	   gets(mhs[i].npm);
       printf("NAMA       : ");
	   fflush(stdin);
	   gets(mhs[i].nama);
       printf("IPK		  : ");
	   scanf("%f",&mhs[i].ipk);
	   printf("==========================================\n");
   	}
   	printf("\n==== mahasiswa dengan IPK sama atau diatas 3 ====");
   	for(i=0;i<5;i++){
   		if(mhs[i].ipk>=3){
   			printf("\nNama : %s \n NPM : %s \n IPK : %f", mhs[i].nama, mhs[i].npm, mhs[i].ipk);
	   }
	}
	
	printf("\n==== mahasiswa dengan IPK dibawah 3 ====");
	for(i=0;i<5;i++){
		if(mhs[i].ipk < 3){			
			printf("\nNama : %s \n NPM : %s \n IPK : %f", mhs[i].nama, mhs[i].npm, mhs[i].ipk);
		}	
	}
	
   
   
   
}
