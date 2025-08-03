#include<stdio.h>
#include<string.h>
int main(){
	int i;
	char s1[20];
	char s2[30];
	int flag = 0;
	printf("enter the first string : ");
	gets(s1);
	printf("enter the second string : ");
	gets(s2);
	
	for(i=0;s1[i] !='\0'||s2[i] !='\0';i++){
		if(s1[i]!=s2[i]){
			flag=1;
			break;
		}
		
	}

		if(flag==0){
			printf("same");
		}else{
			printf("not same");
		}
	return 0;
}
