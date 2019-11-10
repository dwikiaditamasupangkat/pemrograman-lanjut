#include <stdio.h>
#include <conio.h>

main(){
	int ketemu=0;
	int i=0;
	int caridata;
	int angka[10] ={5,8,2,7,3,12,6,1,4};
	
	printf("Masukkan angka yang dicari : "); 
    scanf("%d",&caridata);
	angka[9]=caridata;
	while(angka[i]!=caridata){
		i++;
	}
	if(i<9){
		printf("angka ADA");
	}
	else
		printf("angka TIDAK ADA");
}
