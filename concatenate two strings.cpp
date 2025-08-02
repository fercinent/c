#include<stdio.h>
#include<string.h>
int main(){
	char name_1[30];
	char name_2[20];
	int count=0;
	
	printf("enter the first name: ");
	gets(name_1);
	
	printf("enter the second name: ");
	gets(name_2);
	 printf("\n");
	puts(name_1);
	puts(name_2);
	
	printf("the concatnate string is : ");
	
	
	strcat(name_1,name_2);
	puts(name_1);
	printf("\n");
	
	printf("the total char of string is: ");
	count=strlen(name_1);
	printf("%d",count);
	
	return 0;
	
}
