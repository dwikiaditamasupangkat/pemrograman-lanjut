#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

main(){
	double panjangab, panjangbc, panjangtotal;
	int a;
	printf("masukkan banyak lintasan : ");
	scanf("%d",&a);
	int jarak[a][3][3];
	for(int i=0;i<a;i++){
		printf("lintasan ke %d\n",i+1);
		for(int j=0; j<3; j++){
				printf("titik ke %d\n",j+1);
				printf("masukkan kordinat x: ");
				scanf("%d",&jarak[i][j][0]);
				printf("masukkan kordinat y: ");
				scanf("%d",&jarak[i][j][1]);
				printf("masukkan kordinat z: ");
				scanf("%d",&jarak[i][j][2]);
		}
	}
	getch();
	system("cls");
	for(int i=0;i<a;i++){
		printf("lintasan ke %d\n",i+1);
		for(int j=0;j<3;j++){
			printf("titik ke %d\n",j+1);
			printf("kordinat : \n");
			printf("x\ty\tz\n");
			printf("-------------------\n");
			for(int k=0;k<3;k++){
				printf("%d\t",jarak[i][j][k]);
			}
		printf("\n\n");
		}
		printf("\n");
		panjangab = sqrt(pow((jarak[i][1][0]-jarak[i][0][0]),2) + pow((jarak[i][1][1]-jarak[i][0][1]),2) + pow((jarak[i][1][2]-jarak[i][0][2]),2));
		panjangbc = sqrt(pow((jarak[i][2][0]-jarak[i][1][0]),2) + pow((jarak[i][2][1]-jarak[i][1][1]),2) + pow((jarak[i][2][2]-jarak[i][1][2]),2));		
		panjangtotal = panjangab+panjangbc;
		printf("panjang lintasan ke %d adalah : %lf\n",i+1,panjangtotal);
	}
}
