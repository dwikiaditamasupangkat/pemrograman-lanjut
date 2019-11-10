#include <stdio.h>
#include <conio.h>

main(){
	int angka[9] ={3,9,11,12,15,17,23,31,35};
	int low=0;
	int high=8;
	int pos;
	int caridata;
	int ketemu=0;
	
	printf("masukkan angka yang dicari : ");
	scanf("%d",&caridata);
	
	for(int i=0;i<9;i++){
		
		pos = (caridata-angka[low])/(angka[high]-angka[low])*(high-low)+low;
		
		if(angka[pos] == caridata){
			ketemu = 1;
			break;
		}
		else if(angka[pos] > caridata){
			high = pos - 1;
		}
		else if(angka[pos] < caridata){
			low = pos + 1;
		}
	}
	if(ketemu==1){
		printf("angka DITEMUKAN paada indeks ke %d",pos);
	}
	else
		printf("angka TIDAK DITEMUKAN");

}
