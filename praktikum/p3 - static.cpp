#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//static
void cetak(){
	static int count = 0;
	printf("count = %d\n",count++);
}

int main(){
	int i;
	for(i=0;i<5;i++) cetak();
	for(i=0;i<3;i++) cetak();
	return 0;
}

