#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

main(){
	char nama[20], npm[11], alamat[30], ttl[20], jurusan[15], fakultas[10], nohp[13];
	int angkatan;
	char a='y';
	puts("\n\n-------Selamat Datang di Pendaftaran UKM-------");
	getch();
	system("cls");
	while(a=='y'){
		printf("----Masukkan Data Diri----\n\n");
		fflush(stdin);
		printf("Nama Lengkap : ");
		gets(nama);
		printf("NPM : ");
		gets(npm);
		printf("Tempat, Tanggal lahir :");
		gets(ttl);
		printf("Alamat : ");
		gets(alamat);
		printf("No HP : ");
		gets(nohp);
		printf("Jurusan : ");
		gets(jurusan);
		printf("Fakultas : ");
		gets(fakultas);
		printf("angkatan : ");
		scanf("%d",&angkatan);
		getch();
		//system("cls");
	
		printf("-----------------------------------------------------------------\n\n");	
		printf("----Data Diri Anda-----\n\n");
		printf("Nama Lengkap : %s",nama);
		printf("\nNPM : %s",npm);
		printf("\nTempat, Tanggal Lahir : %s",ttl);
		printf("\nAlamat : %s",alamat);
		printf("\nNo HP : %s",nohp);
		printf("\nJurusan : %s",jurusan);
		printf("\nFakultas : %s",fakultas);
		printf("\nangkatan : %d",angkatan);
		printf("\n\n");
		
		fflush(stdin);
		printf("Apakah ingin mengisi data diri lagi(y/n)?");
		scanf("%c",&a);
		system("cls");
	}
	
	printf("\n---------------Terima Kasih-----------------\n");

}
