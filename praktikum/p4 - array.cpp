#include <stdio.h>
#include <conio.h>

main(){
	int ketemu=0;
	int caridata;
	int n = 20;
	int angka[20] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	
	printf("urutan");
	for(int i=0; i<20; i++){
		printf("angka : %d\n", angka[i]);
	}
	printf("--------------------------------------------------");
	printf("\n\nterbalik\n");
	for(int i=19; i>=0; i--){
		printf("angka : %d\n", angka[i]);
	}
	printf("----------------------------------------------------");
	printf("\n\nMasukkan data yang dicari = "); 
    scanf("%d",&caridata);
	for(int i=0; i<20; i++){
		if(angka[i]==caridata){
			printf("data yang anda cari terpadat pada indeks [%d] dengan nilai %d",i,angka[i]);
			ketemu++;
			printf("\nlooping ke %d",i+1);
			break;
		}	
	}
	if(ketemu==0){
		printf("data tidak ada");
	}
    
}

