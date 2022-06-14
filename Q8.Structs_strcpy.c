#include <stdio.h>
#include <string.h>

struct Books{
	int id;
	char  title[50];
};

int main(){
	struct Books Book1;
	struct Books Book2;
	
	
	strcpy( Book1.title, "C Programming");
	Book1.id=102;
	
	strcpy( Book2.title, "C++ Programming");
	Book2.id=103;	
	
	
	printf("\n %d",Book1.id);
	printf("\n %s",Book1.title);
	
	printf("\n %d",Book2.id);
	printf("\n %s",Book2.title);
	
		
}


