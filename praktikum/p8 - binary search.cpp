#include <stdio.h>
#include <conio.h>

main(){
	int angka[9] ={3,9,11,12,15,17,23,31,35};
	int caridata, i=0, ketemu=0;
	int awal=0, akhir=8;
	int tengah=(awal+akhir)/2;
	printf("Masukkan angka yang dicari : "); 
    scanf("%d",&caridata);
    while(i<9){
    	if(caridata == angka[tengah]){
			ketemu=1;
			break;
		}else if(caridata > angka[tengah]){
    		awal=tengah+1;
    		tengah=(awal+akhir)/2;
		}else if(caridata < angka[tengah]){
			akhir=tengah-1;
			tengah=(awal+akhir)/2;
		}
		i++;	
	}
	if(ketemu==1){
		printf("angka DITEMUKAN");
	}else
		printf("angka TIDAK DITEMUKAN");		
}

    
