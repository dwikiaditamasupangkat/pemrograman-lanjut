#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void buatdata();
void isisaldo();
void tarik();
void cekdata();
void totalsaldo();
void cari();
void carinorekening();
void carialamat();
void cariumur();
void carisaldo();
void transfer();


struct tanggallahir{
	int tanggal;
	int bulan;
	int tahun;
};
struct alamat{
	char jalan[20];
	char kota[20];
	char prov[20];
	
};
struct nasabah{
	char nama[25];
	char norekening[10];
	char bank[10];
	tanggallahir tanggallahir;
	int saldo;
	alamat alamat;
	
}tabungan[100];

int i=0;

main(){
	
	int ulang=1, pilihan;
	while(ulang==1){
		puts("======= Selamat datang =======");
		puts("+===== Di BANK INDONESIA ====+");
		puts("| 1. Buat data nasabah       |");
		puts("| 2. Isi Saldo               |");
		puts("| 3. Tarik Saldo             |");
		puts("| 4. Cek data nasabah        |");
		puts("| 5. Cari data nasabah       |");
		puts("| 6. Lihat total saldo bank  |");
		puts("| 7. Transfer                |");
		puts("| 0. Keluar                  |");
		puts("==============================");
		printf("\nmasukkan pilihan : ");
        scanf("%d",&pilihan);
		system("cls");
        
        switch(pilihan){
        	case 1 : buatdata();
        	break;
        	case 2 : isisaldo();
        	break;
        	case 3 : tarik();
        	break;
        	case 4 : cekdata();
        	break;
        	case 5 : cari();
        	break;
        	case 6 : totalsaldo();
        	break;
        	case 7 : transfer();
        	break;
        	case 0 : 
			printf("\n==========================");
			printf("\n|      Terima Kasih      |");
			printf("\n==========================\n");
			ulang=0;
		}
	}
		                      
}

void buatdata(){
	puts("============ Selamat datang ============");
	puts("+========== Di BANK INDONESIA =========+");
	fflush(stdin);
	printf("| Masukkan nama anda                 : ");
	gets(tabungan[i].nama);
	fflush(stdin);
	printf("| Masukkan no rekening               : ");
	gets(tabungan[i].norekening);
	fflush(stdin);
	printf("| masukkan nama Bank                 : ");
	gets(tabungan[i].bank);
	fflush(stdin);
	printf("| masukkan tanggal lahir(dd-mm-yyyy) : ");
	scanf("%d-%d-%d", &tabungan[i].tanggallahir.tanggal,&tabungan[i].tanggallahir.bulan,&tabungan[i].tanggallahir.tahun);
	fflush(stdin);
	printf("| masukkan alamat nama jalan         : ");
	gets(tabungan[i].alamat.jalan);
	fflush(stdin);
	printf("| masukkan alamat nama kota          : ");
	gets(tabungan[i].alamat.kota);
	fflush(stdin);
	printf("| masukkan alamat nama provinsi      : ");
	gets(tabungan[i].alamat.prov);
	fflush(stdin);
	printf("| masukkan jumlah saldo              : ");
	scanf("%d", &tabungan[i].saldo);
	fflush(stdin);
	i++;
	puts("========================================");	
	getch();
	system("cls");
}

void isisaldo(){
	if(i==0){
		printf("\n=================================");
		printf("\n|          Data Kosong          |");
		printf("\n=================================");
	}
	else{
		char norekening[10];
		int b=0, ketemu=0;
	    float isi=0;
	    printf("\n*************************************");
	    printf("\n|             ISI SALDO             |");
	    printf("\n|-----------------------------------|");
	    fflush(stdin);
		printf("\n Masukkan no rekening : ");
	    gets(norekening);
	    printf("**************************************");
	    system("cls");
		for(b=0;b<i;b++){
	    	if(strcmp(tabungan[b].norekening, norekening)==0){
	    		ketemu++;
	    		printf("\n\n=================================================");
	    		printf("\n|                   ISI SALDO                   |");
	    		printf("\n=================================================");
				printf("\n| No rekening anda           : %s",tabungan[b].norekening);
	            printf("\n| Nama anda                  : %s",tabungan[b].nama);
	            printf("\n| Saldo                      : %d",tabungan[b].saldo);
	            printf("\n| masukkan nominal pengisian : ");
	            scanf("%f",&isi);
	            tabungan[b].saldo+=isi;
	            printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++");
	            printf("\nSaldo anda sekarang          : %d",tabungan[b].saldo);
	            printf("\n=================================================");
			}
			if(ketemu==0){
				printf("\n=================================");
				printf("\n|     no rekening tidak ada     |");
				printf("\n=================================");
	        }
		}		
	}
	getch();
	system("cls");
}

void tarik(){
	if(i==0){
		printf("\n=================================");
		printf("\n|          Data Kosong          |");
		printf("\n=================================");
	}
	else{
		char norekening[10];
		int b=0;
	    int tarik;
	    printf("\n*************************************");
	    printf("\n|            TARIK SALDO            |");
	    printf("\n|-----------------------------------|");
	    fflush(stdin);
		printf("\n Masukkan no rekening : ");
	    gets(norekening);
	    printf("*************************************");
	    system("cls");
		for(b=0;b<i;b++){
	    	if(strcmp(tabungan[b].norekening, norekening)==0){
	    		printf("\n\n=================================================");
	    		printf("\n|                  TARIK SALDO                  |");
	    		printf("\n=================================================");
	    		printf("\n| No rekening anda           : %s",tabungan[b].norekening);
	            printf("\n| Nama anda                  : %s",tabungan[b].nama);
	            printf("\n| Saldo                      : %d",tabungan[b].saldo);
	            printf("\n| masukkan nominal penarikan : ");
	            scanf("%d",&tarik);
	            printf("\n=================================================");
	            system("cls");
				if(tabungan[b].saldo<tarik){
	            	printf("\n==================================================");
	            	printf("\n|               Saldo tidak cukup                |");
	            	printf("\n==================================================");
	            }
				else{
					tabungan[b].saldo-=tarik;
					printf("\n==================================================");
	            	printf("\n|                Penarikan Sukses                |");
	            	printf("\n|                                                |");
					printf("\n Saldo anda sekarang          : %d",tabungan[b].saldo);
	            	printf("\n==================================================");
				}   	
			}
		}
			
	}
	
	getch();
	system("cls");
}

void cekdata(){
	int b;
	if(i!=0){
		printf("\n=============================================================================");
    	printf("\n|                               Data Nasabah                                |");
		printf("\n=============================================================================");
		for(b=0;b<i;b++){
			printf("\n\n| nasabah ke %d",b+1);
			printf("\n=============================================================================");
	    	printf("\n| No rekening    : %s",tabungan[b].norekening);
	        printf("\n| Nama           : %s",tabungan[b].nama);
	        printf("\n| Bank           : %s",tabungan[b].bank);
	        printf("\n| tanggal lahir  : %d-%d-%d",tabungan[b].tanggallahir.tanggal, tabungan[b].tanggallahir.bulan, tabungan[b].tanggallahir.tahun);
	        printf("\n| Alamat         : jalan %s, kota %s, provinsi %s",tabungan[b].alamat.jalan, tabungan[b].alamat.kota, tabungan[b].alamat.prov);
	        printf("\n| Saldo          : %d",tabungan[b].saldo);
	        printf("\n=============================================================================");
	    }
		
	}
	else{
		printf("\n=================================");
		printf("\n|          Data Kosong          |");
		printf("\n=================================");
	}
	getch();
	system("cls");
}

void totalsaldo(){
	int total=0;
	int b;
	for(b=0;b<i;b++){
		total+=tabungan[b].saldo;
	}
	printf("\n==================================================");
	printf("\ntotal nasabah seluruhnya : %d",i);
	printf("\n\ntotal saldo seluruhnya : %d",total);
	printf("\n==================================================");
	getch();
	system("cls");
}

void cari(){
	int pencarian;
	if(i==0){
		printf("\n=================================");
		printf("\n|          Data Kosong          |");
		printf("\n=================================");
		getch();
		system("cls");		
	}else{
		printf("\n==================================================");
		printf("\n|             Pencarian Data Nasabah             |");	
		printf("\n| 1. pencarian berdasarkan no rekening           |");
		printf("\n| 2. pencarian berdasarkan kota/provinsi         |");
		printf("\n| 3. pencarian berdasarkan umur                  |");
		printf("\n| 4. saldo terbanyak dan tersedikit              |");
		printf("\n==================================================");
		fflush(stdin);
		printf("\n Masukkan pilihan : ");
		scanf("%d",&pencarian);
		system("cls");
		switch(pencarian){
			case 1 : carinorekening();
			break;
			case 2 : carialamat();
			break;
			case 3 : cariumur();
			break;
			case 4 : carisaldo();
			break;
		}
	}
	
}

void carinorekening(){
	char norekening[10];
	int b, ketemu=0;
	printf("\n=============================================================================");
    fflush(stdin);
	printf("\n Masukkan No rekening : ");
    gets(norekening);
	printf("\n=============================================================================");
	for(b=0;b<i;b++){
		if(strcmp(tabungan[b].norekening, norekening)==0){
			ketemu++;
			printf("\n\n=============================================================================");
	    	printf("\n| No rekening    : %s",tabungan[b].norekening);
	        printf("\n| Nama           : %s",tabungan[b].nama);
	        printf("\n| Bank           : %s",tabungan[b].bank);
	        printf("\n| tanggal lahir  : %d-%d-%d",tabungan[b].tanggallahir.tanggal, tabungan[b].tanggallahir.bulan, tabungan[b].tanggallahir.tahun);
	        printf("\n| Alamat         : jalan %s, kota %s, provinsi %s",tabungan[b].alamat.jalan, tabungan[b].alamat.kota, tabungan[b].alamat.prov);
	        printf("\n| Saldo          : %d",tabungan[b].saldo);
	        printf("\n=============================================================================");
		}
	}
	if(ketemu==0){
			printf("\n=================================");
			printf("\n|     no rekening tidak ada     |");
			printf("\n=================================");
		}
	getch();
    system("cls");
}

void carialamat(){
	char alamat[20];
	int b, ketemu=0;
	printf("\n=============================================================================");
    fflush(stdin);
	printf("\n Masukkan kota/provinsi : ");
    gets(alamat);
	printf("\n=============================================================================");
	for(b=0;b<i;b++){
		if(strcmp(tabungan[b].alamat.kota, alamat)==0){
			ketemu++;
			printf("\n\n=============================================================================");
	    	printf("\n Nasabah yang tinggal di kota %s",alamat);			
			printf("\n\n=============================================================================");
	    	printf("\n| No rekening    : %s",tabungan[b].norekening);
	        printf("\n| Nama           : %s",tabungan[b].nama);
	        printf("\n| Bank           : %s",tabungan[b].bank);
	        printf("\n| tanggal lahir  : %d-%d-%d",tabungan[b].tanggallahir.tanggal, tabungan[b].tanggallahir.bulan, tabungan[b].tanggallahir.tahun);
	        printf("\n| Alamat         : jalan %s, kota %s, provinsi %s",tabungan[b].alamat.jalan, tabungan[b].alamat.kota, tabungan[b].alamat.prov);
	        printf("\n| Saldo          : %d",tabungan[b].saldo);
	        printf("\n=============================================================================");
		}
		if(strcmp(tabungan[b].alamat.prov, alamat)==0){
			ketemu++;
			printf("\n\n=============================================================================");
	    	printf("\n Nasabah yang tinggal di provinsi %s",alamat);			
			printf("\n\n=============================================================================");
	    	printf("\n| No rekening    : %s",tabungan[b].norekening);
	        printf("\n| Nama           : %s",tabungan[b].nama);
	        printf("\n| Bank           : %s",tabungan[b].bank);
	        printf("\n| tanggal lahir  : %d-%d-%d",tabungan[b].tanggallahir.tanggal, tabungan[b].tanggallahir.bulan, tabungan[b].tanggallahir.tahun);
	        printf("\n| Alamat         : jalan %s, kota %s, provinsi %s",tabungan[b].alamat.jalan, tabungan[b].alamat.kota, tabungan[b].alamat.prov);
	        printf("\n| Saldo          : %d",tabungan[b].saldo);
	        printf("\n=============================================================================");
	    }
	    
	}
	if(ketemu==0){
	    	printf("\n=================================");
			printf("\n|        data tidak ada         |");
			printf("\n=================================");
	    }
	getch();
	system("cls");
}

void cariumur(){
	int umur1, umur2, tahun1, tahun2;
	int b, ketemu = 0, ketemu2 = 0;
	printf("\n=============================================================================");
    fflush(stdin);
	printf("\n Masukkan umur kurang dari : ");
    scanf("%d",&umur1);
    fflush(stdin);
	printf("\n Masukkan umur lebih dari : ");
    scanf("%d",&umur2);
	printf("\n=============================================================================");
	tahun1 = 2019-umur1;
	tahun2 = 2019-umur2;
	for(b=0;b<i;b++){
		if(tabungan[b].tanggallahir.tahun > tahun1){
			ketemu++;
			printf("\n\n=============================================================================");
	    	printf("\n Nasabah yang umurnya kurang dari %d tahun",umur1);			
			printf("\n\n=============================================================================");
	    	printf("\n| No rekening    : %s",tabungan[b].norekening);
	        printf("\n| Nama           : %s",tabungan[b].nama);
	        printf("\n| Bank           : %s",tabungan[b].bank);
	        printf("\n| tanggal lahir  : %d-%d-%d",tabungan[b].tanggallahir.tanggal, tabungan[b].tanggallahir.bulan, tabungan[b].tanggallahir.tahun);
	        printf("\n| Alamat         : jalan %s, kota %s, provinsi %s",tabungan[b].alamat.jalan, tabungan[b].alamat.kota, tabungan[b].alamat.prov);
	        printf("\n| Saldo          : %d",tabungan[b].saldo);
	        printf("\n=============================================================================");
		}
		
	}
	if(ketemu==0){
	    	printf("\n==========================================================");
			printf("\n Nasabah yang umurnya kurang dari %d tahun tidak ada",umur1);
			printf("\n==========================================================");
	    }
	for(b=0;b<i;b++){
		if(tabungan[b].tanggallahir.tahun < tahun2){
			ketemu2++;
			printf("\n\n=============================================================================");
	    	printf("\n Nasabah yang umurnya lebih dari %d tahun",umur2);			
			printf("\n\n=============================================================================");
	    	printf("\n| No rekening    : %s",tabungan[b].norekening);
	        printf("\n| Nama           : %s",tabungan[b].nama);
	        printf("\n| Bank           : %s",tabungan[b].bank);
	        printf("\n| tanggal lahir  : %d-%d-%d",tabungan[b].tanggallahir.tanggal, tabungan[b].tanggallahir.bulan, tabungan[b].tanggallahir.tahun);
	        printf("\n| Alamat         : jalan %s, kota %s, provinsi %s",tabungan[b].alamat.jalan, tabungan[b].alamat.kota, tabungan[b].alamat.prov);
	        printf("\n| Saldo          : %d",tabungan[b].saldo);
	        printf("\n=============================================================================");
	    }
	}
	if(ketemu2==0){
	    	printf("\n==========================================================");
			printf("\n Nasabah yang umurnya lebih dari %d tahun tidak ada",umur2);
			printf("\n==========================================================");
		}
	getch();
	system("cls");
}

void carisaldo(){
	int min = tabungan[0].saldo, max = tabungan[0].saldo;
	int b, ketemu = 0;
	for(b=0;b<i;b++){
		if(max < tabungan[b].saldo){
			max = tabungan[b].saldo;
		}else{
			max = max;
		}
	}
	for(b=0;b<i;b++){
		if(min > tabungan[b].saldo){
			min = tabungan[b].saldo;
		}else{
			min = min;
		}
	}
	for(b=0;b<i;b++){
		if(tabungan[b].saldo == min){
			ketemu++;
			printf("\n\n=============================================================================");
	    	printf("\n Nasabah saldo minimal");			
			printf("\n\n=============================================================================");
	    	printf("\n| No rekening    : %s",tabungan[b].norekening);
	        printf("\n| Nama           : %s",tabungan[b].nama);
	        printf("\n| Bank           : %s",tabungan[b].bank);
	        printf("\n| tanggal lahir  : %d-%d-%d",tabungan[b].tanggallahir.tanggal, tabungan[b].tanggallahir.bulan, tabungan[b].tanggallahir.tahun);
	        printf("\n| Alamat         : jalan %s, kota %s, provinsi %s",tabungan[b].alamat.jalan, tabungan[b].alamat.kota, tabungan[b].alamat.prov);
	        printf("\n| Saldo          : %d",tabungan[b].saldo);
	        printf("\n=============================================================================");
		}
		if(tabungan[b].saldo == max){
			ketemu++;
			printf("\n\n=============================================================================");
	    	printf("\n Nasabah saldo maksimal");			
			printf("\n\n=============================================================================");
	    	printf("\n| No rekening    : %s",tabungan[b].norekening);
	        printf("\n| Nama           : %s",tabungan[b].nama);
	        printf("\n| Bank           : %s",tabungan[b].bank);
	        printf("\n| tanggal lahir  : %d-%d-%d",tabungan[b].tanggallahir.tanggal, tabungan[b].tanggallahir.bulan, tabungan[b].tanggallahir.tahun);
	        printf("\n| Alamat         : jalan %s, kota %s, provinsi %s",tabungan[b].alamat.jalan, tabungan[b].alamat.kota, tabungan[b].alamat.prov);
	        printf("\n| Saldo          : %d",tabungan[b].saldo);
	        printf("\n=============================================================================");
	    }
	}
	if(ketemu==0){
	    	printf("\n=================================");
			printf("\n|        data tidak ada         |");
			printf("\n=================================");
	    }
	getch();
	system("cls");
}

void transfer(){
	char norekening[10], norekening2[10];
	int b=0, ketemu=0, ketemu2=0;
	int kirim;
	if(i==0){
		printf("\n=================================");
		printf("\n|          Data Kosong          |");
		printf("\n=================================");
		
	}else{
		printf("\n*************************************");
		printf("\n|             TRANSFER              |");
		printf("\n|-----------------------------------|");
		fflush(stdin);
		printf("\n Masukkan no rekening : ");
		gets(norekening);
		printf("*************************************");
		for(b=0;b<i;b++){
		   	if(strcmp(tabungan[b].norekening, norekening)==0){
		   		ketemu++;
		   		printf("\n*************************************");
			    printf("\n|             TRANSFER              |");
			    printf("\n|-----------------------------------|");
			    fflush(stdin);
			    printf("\n| Masukkan no rekening yang dituju : ");
			    gets(norekening2);
			    printf("************************************");
			    for(int a=0;a<i;a++){
			    	if(strcmp(tabungan[a].norekening, norekening2)==0){
				    	ketemu2++;
			    		printf("\n\n*************************************");
					    printf("\n|             TRANSFER              |");
					    printf("\n|-----------------------------------|");
					    printf("\n| tujuan transfer atas nama %s",tabungan[a].nama);
					    fflush(stdin);
						printf("\n| Masukkan jumlah tranfer : ");
					    scanf("%d",&kirim);
					    printf("*************************************");
					    if(tabungan[b].saldo<kirim){
		            		printf("\n\n==================================================");
		            		printf("\n|               Saldo tidak cukup                |");
		            		printf("\n==================================================");
		            	}
						else{
							tabungan[b].saldo-=kirim;
							tabungan[a].saldo+=kirim;
							printf("\n\n==================================================");
			            	printf("\n|                 transfer Sukses                |");
			            	printf("\n|                                                |");
							printf("\n| Saldo anda sekarang          : %d",tabungan[b].saldo);
			            	printf("\n==================================================");
						}
					}else{
						printf("\n=================================");
						printf("\n|     no rekening tidak ada     |");
						printf("\n=================================");
						
					}		
				}	
			}else{
						printf("\n=================================");
						printf("\n|     no rekening tidak ada     |");
						printf("\n=================================");
			}
		}	
	}
	getch();
	system("cls");
}
