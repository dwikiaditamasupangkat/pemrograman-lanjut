#include <stdio.h>
#include <stdlib.h>

int pangkat (int x, int n){
	if(n==0){
		return 1;	
	}
	else{
		return x*pangkat(x,n-1);
	}
}

main(){
	int menu,x,n,b;
	int a=0;
	
	while(a==0){
		printf("=====Menghitung bilangan berpangkat=====\n");
		printf("1. bentuk rekursif\n");
		printf("2. bentuk iteratif\n");
		printf("3. keluar\n");
		printf("masukkan pilihan : ");
		scanf("%d",&menu);
		switch(menu){
			case 1 :
				printf("\nBentuk Rekursif");
				printf("\nBilangan yang akan dipangkatkan : ");
				scanf("%d", &x);
				printf("pangkat bilangan : ");
				scanf("%d", &n);
				printf("\nhasil bilangan %d pangkat %d adalah %d\n\n", x, n, pangkat(x,n));
			break;
			
			case 2 :
				b=1;
				printf("\nBentuk Iteratif");
				printf("\nBilangan yang akan dipangkatkan : ");
				scanf("%d", &x);
				printf("pangkat bilangan : ");
				scanf("%d", &n);
				
				for(int y=1; y<=n;y++){
					b=b*x;
				}
				printf("\nhasil bilangan %d pangkat %d adalah %d\n\n", x, n, b);
				
			break;
			
			case 3 :
				a=1;
				system("cls");
				printf("\n\n\t=====terima Kasih=====\n\n");
			break;
			default :
				printf("\n\nmasukan salah\n\n");
										
		}
		
	}
	
	return 0;
}
