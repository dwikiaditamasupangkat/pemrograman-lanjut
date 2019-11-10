#include <stdio.h>
#include <stdlib.h>

void input(int data[], int jml);
void output(int data[], int jml);
void ascending(int data[], int jml);
void descending(int data[], int jml);


main(){
    int jml, pilihan;
	
	
    printf("Input jumlah batas data: ");
    scanf("%d",&jml);
	int data[jml];
	input(data,jml);
    
	printf("\ntipe sorting :\n");
    printf("1. ascending\n");
    printf("2. descending\n");
    fflush(stdin);
	printf("masukkan pilihan : ");
    scanf("%d",&pilihan);
    system("cls");
    
    switch(pilihan){
    	case 1 : 
    		printf("sebelum dilakukan sorting:\n");
    		output(data,jml);
    		printf("\n\nsetelah dilakukan sorting:\n");
			ascending(data,jml);
			output(data,jml);
		break;
		case 2 :
			printf("sebelum dilakukan sorting:\n");
    		output(data,jml);
    		printf("\nsetelah dilakukan sorting:\n");
			descending(data,jml);
			output(data,jml);
		break;
	}
}

void input(int data[], int jml){
    for(int i=0; i<jml; i++){
        printf("data [%d] : ",i+1);
        scanf("%d",&data[i]);
    }
}
void output(int data[], int jml){
    for(int i=0; i<jml; i++){
        printf("%d ", data[i]);
    }
}
 
void ascending(int data[], int jml){
    int indeks;
    int copy;
	for(int i=0; i<jml; i++){
    	indeks=i;
		for(int j=i; j<jml; j++){
    		if(data[j]<data[indeks]){
				indeks=j;
			}
		}
		copy=data[indeks];
        data[indeks]=data[i];
        data[i]=copy;
	}
}

void descending(int data[], int jml){
    int indeks;
    int copy;
	for(int i=0; i<jml; i++){
    	indeks=i;
		for(int j=i; j<jml; j++){
    		if(data[j]>data[indeks]){
    			indeks=j;
			}
		}
		copy=data[indeks];
        data[indeks]=data[i];
        data[i]=copy;
	}
}
