#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa{
	char nama[20];
	char NPM[20];
	float nilai[10];
	int matkulpilihan[10];
	float IPK;
}nilaimahasiswa[10];

main(){
	char nama_matkul[10][25]={"Metode Numerik","Pancasila","Sistem Operasi","Statistik komputer","Kewirausahaan","Bela Negara","Pemrograman Lanjut"};
	float SKS[10]={3,2,3,4,2,3,4};
	int ulang=0, pilihan, i=0, jumlah, matkul;
	float totalnilai=0, totalSKS=0;
	while(ulang==0){
		system("cls");
		puts("===============================");
		puts("Data Nilai Mahasiswa");
		puts("-------------------------------");
		puts("1. masukkan data");
		puts("2. lihat data");
		puts("0. keluar");
		puts("===============================");
		fflush(stdin);
		printf("\nmasukkan pilihan : ");
        scanf("%d",&pilihan);
		system("cls");
		switch(pilihan){
			case 1 :
				printf("Masukkan Data");
				printf("\n=============================");
				fflush(stdin);
				printf("\nMasukkan nama : ");
				gets(nilaimahasiswa[i].nama);
				fflush(stdin);
				printf("Masukkan NPM    : ");
				gets(nilaimahasiswa[i].NPM);
				printf("\n-------------------------------");
				printf("\nDaftar Mata Kuliah");
				printf("\n1. Metode Numerik \n2. Pancasila \n3. Sistem Operasi \n4. Statistik komputer \n5. Kewirausahaan \n6. Bela negara \n7. Pemrograman Lanjut");
				printf("\n-------------------------------");
				fflush(stdin);
				for	(int j=0;j<7;j++){
					fflush(stdin);
					printf("\nMasukkan Nilai %s : ", nama_matkul[j]);
					scanf("%f", &nilaimahasiswa[i].nilai[j]);
				}
				for(int n=0;n<7;n++){
					totalnilai		= totalnilai + ((nilaimahasiswa[i].nilai[n])*(SKS[n]));
					totalSKS		= totalSKS	+ SKS[n];
				}
				nilaimahasiswa[i].IPK = totalnilai/totalSKS;
				
				i++;
				getch();
				break;
			case 2 :
				if(i==0){
					printf("===== Data tidak Ada =====");
				}else{
					printf("\n===========================================");
					printf("\nData Nilai Mahasiswa");
					printf("\n===========================================");
					for(int b=0;b<i;b++){
						printf("\nNama Mahasiswa    : %s",nilaimahasiswa[b].nama);
						printf("\nNPM               : %s",nilaimahasiswa[b].NPM);
						for	(int a=0;a<7;a++){
							printf("\nNilai Mata kuliah %s : %f", nama_matkul[a],nilaimahasiswa[b].nilai[a]);
						}
						printf("\nIPK               : %f\n",nilaimahasiswa[b].IPK);
					}
				} 
				getch();
				break;			
			case 0 :
				ulang=1;
		}
	}
	
	
}
