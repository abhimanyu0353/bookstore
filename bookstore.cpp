#include<stdio.h>
#include<string.h>
void storevalues(struct book*);
void printvalues(struct book*);
void searchbook(char*,struct book*);
struct book{
	int id,price;
	char name[20],author[20];
};
int main(){
	
	struct book b[5];
	char a[10];
	storevalues(b);
	printvalues(b);
	printf("enter the book name to search for");
	scanf("%s",a);
     searchbook(a,b);
     
 
}

void storevalues(struct book* br){
	int i=0;
	for(i=0;i<5;i++){
		printf("enter book id");
		scanf("%d",&br[i].id);
		printf("enter book name");
		scanf("%s",&br[i].name);
		printf("enter author name");
		scanf("%s",&br[i].author);
		printf("enter price of book");
		scanf("%d",&br[i].price);
	}
}
void printvalues(struct book* s){
	int i=0;
	for(i=0;i<3;i++){
		printf("Book Id %d\n Book name %s\nAuthor Name %s \n Price of book %d\n",s[i].id,s[i].name,s[i].author,s[i].price);
	}
}

void searchbook(char* x,struct book* b){
	for(int i=0;i<5;i++){
	if(strcmp(x,b[i].name)==0){
		    
					printf("\nBook  found at index%d",i);
     		break;
     		 }
     		 printf("book is not in your store ");

	}
	 		
}
