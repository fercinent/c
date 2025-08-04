#include<stdio.h>
#include<string.h>
int main(){
	int i , l;
	int ch=0;
	char name[20];
	printf("enter a string : ");
	gets(name);
	
	printf("the reversed string is  ");
	
	l= strlen(name);
	for(i=0;i<=l/2;i++){
		ch=name[i];
		name[i]=name[l-1-i];
		name[l-1-i]=ch;
	} 
	puts(name);
	
	return 0;
	
}
