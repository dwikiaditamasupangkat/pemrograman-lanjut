#include <stdio.h>
#include <conio.h>

int interpolation(int caridata, int low, int high, int pos, int angka[]){
	pos = (caridata-angka[low])/(angka[high]-angka[low])*(high-low)+low;
	
	if(angka[pos] == caridata){
			return printf("angka DITEMUKAN pada indeks ke %d",pos);
	}
	else{
		if(pos > high){
			return printf("angka TIDAK DITEMUKAN");
		}
		else if(angka[pos] > caridata){
			high = pos - 1;
			return interpolation(caridata, low, high, pos, angka); 
		}
		else if(angka[pos] < caridata){
			low = pos + 1;
			return interpolation(caridata, low, high, pos, angka);
		}
	}
}

main(){
	int angka[9] ={3,9,11,12,15,17,23,31,35};
	int low=0;
	int high=8;
	int pos;
	int caridata;
	int ketemu=0;
	
	printf("masukkan angka yang dicari : ");
	scanf("%d",&caridata);
	interpolation(caridata, low, high, pos, angka);

}
