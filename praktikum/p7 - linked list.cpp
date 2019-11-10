#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//========================================================

struct node {
	 int data;
    struct node *next;
};
typedef struct node node;

node *createNode(void);
void tambahawal(node **head);
void tambahdata(node **head);
void tambahakhir(node **head);
void tranverse(node *head);
void insertnode(node **head, node *pPre, node *pNew);
void deletenode(node **head, node *pPre, node *pCur);
void hapusdata(node **head);
void hapusdataakhir(node **head);
void hapusdataawal(node **head);
void deleteList(node *head);
void jumlahvalue(node *head);
//========================================================

int main(){
  	node *head;
  	char pilihan;

  	head = NULL;
  	do{
    	printf("masukkan pilihan\n");
    	printf("1. Tambah data\n");
    	printf("2. hapus data\n");
    	printf("3. cetak data\n");
    	printf("4. lihat jumlah value data\n");
    	printf("0. keluar\n");
    	printf("masukkan pilihan: ");
	    fflush(stdin);
	    scanf("%c", &pilihan);
		system("cls");
		switch(pilihan){
			case '1' :
				int tambah;
				printf("masukkan pilihan\n");
				printf("1. tambah data di awal\n");
				printf("2. tambah data di tengah\n");
				printf("3. tambah data di akhir\n");
				printf("masukkan pilihan: ");
				scanf("%d", &tambah);
				system("cls");
				switch(tambah){
					case 1 :
						tambahawal(&head);
						break;
					case 2 :
						tambahdata(&head);
						break;	
					case 3 :
						tambahakhir(&head);
						break;
				}
			break;
			case '2' :
				int menghapus;
				printf("masukkan pilihan\n");
				printf("1. hapus data di awal\n");
				printf("2. hapus sesuai value\n");
				printf("3. hapus data di akhir\n");
				printf("masukkan pilihan: ");
				scanf("%d", &menghapus);
				system("cls");
				switch(menghapus){
					case 1 :
						hapusdataawal(&head);
						break;
					case 2 :
						hapusdata(&head);
						break;	
					case 3 :
						hapusdataakhir(&head);
						break;
				}
			break;
			case '3' :
				tranverse(head);
	       		getch();
	       		system("cls");
			break;
			case '4' :
				jumlahvalue(head);
			break;	
		}
  	} while (pilihan != '0');
  		deleteList(head);
  		system("cls");
}
//========================================================

node *createNode(void){
	node *ptr;
	
	ptr = (node *)malloc(sizeof(node));
	return(ptr);
}

//========================================================

void insertnode(node **head, node *pPre, node *pNew){
    if (pPre == NULL){
       //menambahkan diawal atau pada empty list
	    pNew -> next = *head;
    	*head = pNew;
    }
    else {
       //menambahkan node di tengah atau di akhir
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}

//========================================================

void deletenode(node **head, node *pPre, node *pCur)
{
	if (pPre == NULL)
	   *head = pCur -> next;
	else
       pPre -> next = pCur -> next;
	free(pCur);
}

//========================================================

void tambahawal(node **head){
  	int bilangan;
  	node *pTemp;

  	
  
  	fflush(stdin);
  	printf("masukkan bilangan integer : ");
 	 fflush(stdin);
  	scanf("%d", &bilangan);
  	pTemp = (node *)malloc(sizeof(node));

  	if (pTemp != NULL){
  		pTemp->data = bilangan;
      	pTemp->next = NULL;
      	insertnode(head, NULL, pTemp);
  	}
  	else{
      	printf("Alokasi memori gagal");
      	getch();
  	}
	system("cls");
}

//========================================================

void tambahdata(node **head){
  	int letak, bilangan;
  	node *pTemp, *pCur;
  	
	  if(*head == NULL){
		printf("Data Anda Kosong");
		getch();
		system("cls");
		return;
	}
  
  	tranverse(*head);
 	printf("\nletak pemasukan data baru setelah data bernilai : ");
 	fflush(stdin);
  	scanf("%d", &letak);
  	

  	pCur = *head;
  	while (pCur != NULL && pCur -> data != letak) {
    	pCur = pCur -> next;
  	}

  	pTemp = (node *)malloc(sizeof(node));

  	if (pCur == NULL){
    	printf("\nnode tidak ditemukan");
    	getch();
  	}
  	else if (pTemp == NULL){
     	printf("\nalokasi memori gagal");
     	getch();
  	}
  	else{
  		printf("\nData baru yang dimasukkan : ");
  		fflush(stdin);
  		scanf("%d", &bilangan);
     	pTemp->data = bilangan;
     	pTemp->next = NULL;
     	insertnode(head, pCur, pTemp);
  	}	
  	
  	system("cls");
}

//========================================================

void tambahakhir(node **head){
	node *baru,*pTemp;
	int bilangan;
	
	baru = *head;
	pTemp = NULL;
	fflush(stdin);
  	printf("masukkan bilangan integer : ");
  	fflush(stdin);
  	scanf("%d", &bilangan);
  	pTemp = (node *)malloc(sizeof(node));
  	if (pTemp == NULL){
	  	    printf("\nalokasi memori gagal");
		    getch();
		    return ;
	}
  	//Awal
  	if(*head == NULL){
		 pTemp->data = bilangan;
	     pTemp->next = NULL;
	     insertnode(head, NULL, pTemp);
	}
	//Akhir
	else {
		while(baru != NULL && baru -> next != NULL){
			baru = baru -> next;
		}
		     pTemp->data = bilangan;
		     pTemp->next = NULL;
		     insertnode(head, baru, pTemp);
	}
	
	system("cls");	
}

//========================================================

void tranverse(node *head){
   	node *pWalker;
	
	if(head == NULL){
		printf("Data Anda Kosong");
		
		return;
	}
	pWalker = head;
	printf("value : ");
	while (pWalker != NULL){
   	printf("%d -> ", pWalker -> data);
   	pWalker = pWalker -> next;
	}
   	printf("NULL");
   	
   	
}

//========================================================

void hapusdataawal(node **head){
	node *hapus;
	
	if(*head == NULL){
		printf("Data Anda Kosong");
		getch();
		return;
	}
	hapus=*head;
	*head = hapus->next;
	free(hapus);
	printf("hapus sukses\ndata sekarang :\n\n");
	tranverse(*head);
	getch();
	system("cls");
}
//========================================================

void hapusdataakhir(node **head){
	node *hapus,*temp;
	
	if(*head == NULL){
		printf("Data Anda Kosong");
		getch();
		return;
	}
	hapus = *head;
	temp = NULL;
	while(hapus -> next != NULL){
		temp = hapus;
		hapus = hapus -> next;
	}
	
	if(temp == NULL){
		*head = hapus->next;
	}else{
		temp->next = hapus->next;
	}
		
	free(hapus);
	printf("hapus sukses\ndata sekarang :\n\n");
	tranverse(*head);
	getch();
	system("cls");
}

//========================================================

void hapusdata(node **head)
{
  	int letak;
  	node *pCur, *pPre;

  	system("cls");
  	if(*head == NULL){
		printf("Data Anda Kosong");
		getch();
		return;
	}
  	tranverse(*head);
  	printf("\nData yang akan dihapus : ");
  	fflush(stdin);
  	scanf("%d", &letak);

  	pPre = NULL;
  	pCur = *head;
  	while (pCur != NULL && pCur -> data != letak) {
    	pPre = pCur;
    	pCur = pCur -> next;
  	}
	
  	if (pCur == NULL){
     	printf("\nnode tidak ditemukan");
     	getch();
  	}
  	else{
	   	deletenode(head, pPre, pCur);
		system("cls");
		printf("Hapus sukses\ndata sekarang :\n\n");
		tranverse(*head);
		getch();
		system("cls");
	}
}

//========================================================

void jumlahvalue(node *head){
	node *pWalker;
	int jumlahvalue=0;
    if(head == NULL)
		printf("Data Anda Kosong");
	else{
		pWalker = head;
		tranverse(head);
		while (pWalker != NULL){
	   		jumlahvalue=jumlahvalue + pWalker -> data;
	   		pWalker = pWalker -> next;
		}
	   	printf("\nJumlah value : %d",jumlahvalue);	
	}
	
	getch();
	system("cls");
}

//========================================================

void deleteList(node *head){
  node *pTemp;


  while(head != NULL){
     pTemp = head;
     head = head->next;
     free(pTemp);
  }
}
//========================================================
