#include <stdio.h>
#include <conio.h>

struct data{
	float IPK[10];
	int NPM[10];
};

main(){
//	printf("----------array--------\n");
//	float IPK[10];
//	int NPM[10];
//	for(int i=0; i<10; i++){
//		printf("Pengisian Data Ke-%i\n",i+1);
//       	printf("NPM		: ");
//	   	fflush(stdin);
//	   	scanf("%d",&NPM[i]);
//       	printf("IPK		: ");
//	   	scanf("%f",&IPK[i]);
//	}
//	
//	for(int i=0; i<10; i++){
//		printf("NPM %d memiliki IPK %f\n",NPM[i],IPK[i]);
//	}
	
	printf("---------------array of struct----------------\n");
	struct data mhs[10];
	int i;
   	for(i=0;i<3;i++){
       	printf("Pengisian Data Ke-%i\n",i+1);
       	printf("NPM		: ");
	   	fflush(stdin);
	   	scanf("%d",&mhs[i].NPM[i]);
       	printf("IPK		: ");
	   	scanf("%f",&mhs[i].IPK[i]);
   	}
   	for(int i=0; i<3; i++){
		printf("NPM %d memiliki IPK %f\n",mhs[i].NPM[i],mhs[i].IPK[i]);
	}
	
	
	
}


