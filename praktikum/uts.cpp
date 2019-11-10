#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct kontainer{
	int ukuran;
	int berat;
	char vendor[20];
	char muatan[20];
};

main(){
	struct kontainer blokA[3][3]; 
	struct kontainer blokB[3][3];
	struct kontainer blokC[3][3];
	
	blokA[0][0].ukuran=20; blokA[0][0].berat=100; strcpy(blokA[0][0].vendor,"Meratus"); strcpy(blokA[0][0].muatan,"Electronics"); 
	blokA[0][1].ukuran=40; blokA[0][1].berat=150; strcpy(blokA[0][1].vendor,"Mearsk");  strcpy(blokA[0][1].muatan,"Electronics");
	blokA[0][2].ukuran=20; blokA[0][2].berat=100; strcpy(blokA[0][2].vendor,"Meratus"); strcpy(blokA[0][2].muatan,"Goods");
	blokA[1][0].ukuran=60; blokA[1][0].berat=200; strcpy(blokA[1][0].vendor,"Meratus"); strcpy(blokA[1][0].muatan,"Goods");
	blokA[1][1].ukuran=20; blokA[1][1].berat=100; strcpy(blokA[1][1].vendor,"Mearsk"); strcpy(blokA[1][1].muatan,"Chemical");
	blokA[1][2].ukuran=60; blokA[1][2].berat=200; strcpy(blokA[1][2].vendor,"Pelni Logistic"); strcpy(blokA[1][2].muatan,"Electronics");
	blokA[2][0].ukuran=40; blokA[2][0].berat=150; strcpy(blokA[2][0].vendor,"Mearsk"); strcpy(blokA[2][0].muatan,"Chemical");
	blokA[2][1].ukuran=40; blokA[2][1].berat=150; strcpy(blokA[2][1].vendor,"Pelni Logistic"); strcpy(blokA[2][1].muatan,"Goods");
	blokA[2][2].ukuran=20; blokA[2][2].berat=100; strcpy(blokA[2][2].vendor,"Meratus"); strcpy(blokA[2][2].muatan,"Electronics");
	
	printf("============data semua kontainer=================\n");
	int k=1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("kontainer %d\n",k);
			printf("ukuran : %i\n",blokA[i][j].ukuran);
			printf("berat  : %i\n",blokA[i][j].berat);
			printf("vendor : %s\n",blokA[i][j].vendor);
			printf("muatan : %s\n",blokA[i][j].muatan);
			k++;
		}
	}
	printf("===================================================\n\n");
	
	printf("================Blok A=====================\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(strcmp(blokA[i][j].muatan, "Electronics")==0){
				printf("kontainer :\n");
				printf("ukuran : %i\n",blokA[i][j].ukuran);
				printf("berat  : %i\n",blokA[i][j].berat);
				printf("vendor : %s\n",blokA[i][j].vendor);
				printf("muatan : %s\n\n",blokA[i][j].muatan);
			}
		}
	}
	printf("===================================================\n\n");
	
	printf("================Blok B=====================\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(strcmp(blokA[i][j].muatan, "Chemical")==0){
				blokB[i][j].ukuran = blokA[i][j].ukuran;
				blokB[i][j].berat = blokA[i][j].berat;
				strcpy(blokB[i][j].vendor, blokA[i][j].vendor);
				strcpy(blokB[i][j].muatan, blokA[i][j].muatan);	
				
				//("Blok B")
				printf("kontainer :\n");
				printf("ukuran : %i\n",blokB[i][j].ukuran);
				printf("berat  : %i\n",blokB[i][j].berat);
				printf("vendor : %s\n",blokB[i][j].vendor);
				printf("muatan : %s\n\n",blokB[i][j].muatan);
				
			}
		}
	}
	printf("===================================================\n\n");
	
	printf("================Blok C=====================\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(strcmp(blokA[i][j].muatan, "Goods")==0){
				blokC[i][j].ukuran = blokA[i][j].ukuran;
				blokC[i][j].berat = blokA[i][j].berat;
				strcpy(blokC[i][j].vendor, blokA[i][j].vendor);
				strcpy(blokC[i][j].muatan, blokA[i][j].muatan);	
				
				//("Blok C")
				printf("kontainer :\n");
				printf("ukuran : %i\n",blokC[i][j].ukuran);
				printf("berat  : %i\n",blokC[i][j].berat);
				printf("vendor : %s\n",blokC[i][j].vendor);
				printf("muatan : %s\n\n",blokC[i][j].muatan);
			}
		}
	}
	printf("===================================================\n\n");
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(strcmp(blokA[i][j].muatan, "Electronics")!=0){
				
				blokA[i][j].ukuran=NULL;
				blokA[i][j].berat=NULL;
				strcpy(blokA[i][j].vendor,NULL);
				strcpy(blokA[i][j].muatan,NULL);
			}
		}
	}
}
