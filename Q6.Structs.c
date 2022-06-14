#include <stdio.h>
#include <string.h>

struct Books{
	int id;
	char  title[50];
};

int main(){
	struct Books Book1;
	struct Books Book2;
	
	Book1.id=102;
	Book2.id=103;	
	
	printf("\n %d",Book1.id);
	printf("\n %d",Book2.id);
		
}

