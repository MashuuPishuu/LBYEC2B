#include <stdio.h>
typedef struct{
	char name[20],origin[50],destination[50],dept[50],arriv[50];
	int age;
}person;



main(){
	person *customer;
	char operator;
	switch(operator){
		case 'a':
			printf("\nAdd Customer");
			printf("\nEnter name: ");
			scanf("%c",person->name);
		case 'b':
		printf("Edit Customer");
		case 'c':
		printf("Search Customer");
		case 'd':
		printf("Delete Customer");
		case 'e':
		printf("Display Customer");
		default:
		printf("Exit Customer");
		
	}
}
