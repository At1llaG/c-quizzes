#include <stdio.h>
#include <string.h>

/*
struct Books{
	int id;
	char  title[50];
};

typedef struct Books Book;

int main(){
	Book Book1;
	Book Book2;
	
	Book1.id=102;
	Book2.id=103;	
	
	printf("\n %d",Book1.id);
	printf("\n %d",Book2.id);
		
}


*/

typedef struct Books{
	int id;
	char  title[50];
}Kitap;


int main(){
	Kitap Book1;
	Kitap Book2;
	
	Book1.id=102;
	Book2.id=103;	
	
	printf("\n %d",Book1.id);
	printf("\n %d",Book2.id);
		
}



