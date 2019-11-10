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
    int copy=0;
    for(int i=0; i<jml-1; i++){
        for(int j=0; j<jml-1; j++){
            if(data[j+1]<data[j]){
                copy=data[j+1];
                data[j+1]=data[j];
                data[j]=copy;
            }
        }
    }
}

void descending(int data[], int jml){
    int copy=0;
    for(int i=0; i<jml-1; i++){
        for(int j=0; j<jml-1; j++){
            if(data[j+1]>data[j]){
                copy=data[j+1];
                data[j+1]=data[j];
                data[j]=copy;
            }
        }
    }
}
