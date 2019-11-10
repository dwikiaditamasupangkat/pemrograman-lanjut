#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct laptop{
	char tipe[30];
	char merek[30];
	double harga;
	
};

typedef struct laptop pc;

int main(){
	
	pc lenovo;
	//lenovo.tipe = "lenovo carbon x1";
	strcpy(lenovo.tipe, "lenovo carbon x1");
	strcpy(lenovo.merek, "lenovo");
	//lenovo.merek = "lenovo";
	lenovo.harga = 10000000;
	
	printf("%s \n", lenovo.tipe);
	printf("%s \n", lenovo.merek);
	printf("%lf \n", lenovo.harga);
	
	//belajar pointer yaitu mencari letak penyimpanan
	//cara langsung
	int nilai = 23;
	printf("nilai = %d \n", nilai);
	printf("letak memori nilai = %d \n", &nilai);
	
	//cara melihat via pointer
	int *pnilai = &nilai;
	printf("value nilai di akses dari pointer = %d \n", *pnilai);
}
