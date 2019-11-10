#include <stdio.h>
#include <conio.h>


int biner(int caridata, int awal, int tengah, int akhir, int angka[]){
	if(caridata == angka[tengah]){
		return printf("angka DITEMUKAN pada indeks ke %d",tengah);
	}
	else{
		if(awal >= akhir){
			return printf("angka TIDAK DITEMUKAN");
		}
		else if(caridata > angka[tengah]){
    		awal=tengah+1;
    		tengah=(awal+akhir)/2;
			return biner(caridata, awal, tengah, akhir, angka);
		}else if(caridata < angka[tengah]){
			akhir=tengah-1;
			tengah=(awal+akhir)/2;
			return biner(caridata, awal, tengah, akhir, angka);
		}		
	} 	
}


main(){
	int angka[9] ={3,9,11,12,15,17,23,31,35};
	int caridata, i=0, ketemu=0;
	int awal=0, akhir=8;
	int tengah=(awal+akhir)/2;
	printf("Masukkan angka yang dicari : "); 
    scanf("%d",&caridata);
    biner(caridata, awal, tengah, akhir, angka);
}
