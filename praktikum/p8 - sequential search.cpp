#include <stdio.h>
#include <conio.h>

main(){
	int ketemu=0;
	int loop=1;
	int caridata;
	int angka[10] ={5,8,2,7,3,12,6,1,4,11};
	
	printf("Masukkan angka yang dicari : "); 
    scanf("%d",&caridata);
	for(int i=0; i<10; i++){
		printf("looping ke %d\n",loop);
		loop++;
		if(angka[i]==caridata){
			ketemu=1;
			break;
			
		}	
	}
	if(ketemu==1){
		printf("angka ADA");
	}else
		printf("angka TIDAK ADA");	
	
}


