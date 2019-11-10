#include <stdio.h>
#include <stdlib.h>

int ascending(int data[], int jml){
	if (jml == 1) 
        return data[jml]; 
    else{
    	for(int j=0; j<jml-1; j++){
            if(data[j+1]<data[j]){
                int copy=data[j+1];
                data[j+1]=data[j];
                data[j]=copy;
            }
		}
		return ascending(data,jml-1);
	}
}
int descending(int data[], int jml){
	if (jml == 1) 
        return data[jml]; 
    else{
    	for(int j=0; j<jml-1; j++){
            if(data[j+1]>data[j]){
                int copy=data[j+1];
                data[j+1]=data[j];
                data[j]=copy;
            }
		}
		return descending(data,jml-1);
	}
}


main(){
    int jml, pilihan;
	
	
    printf("Input jumlah batas data: ");
    scanf("%d",&jml);
	int data[jml];
	
	for(int i=0; i<jml; i++){
        printf("data [%d] : ",i+1);
        scanf("%d",&data[i]);
    }
    
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
    		for(int i=0; i<jml; i++){
        		printf("%d ", data[i]);
    		}
    		printf("\n\nsetelah dilakukan sorting:\n");
			ascending(data,jml);
			for(int i=0; i<jml; i++){
        		printf("%d ", data[i]);
    		}
		break;
		case 2 :
			printf("sebelum dilakukan sorting:\n");
    		for(int i=0; i<jml; i++){
        		printf("%d ", data[i]);
    		}
    		printf("\n\nsetelah dilakukan sorting:\n");
			descending(data,jml);
			for(int i=0; i<jml; i++){
        		printf("%d ", data[i]);
    		}
		break;
	}
}

