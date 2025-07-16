#include<stdio.h>
int insert(int a[],int pos,int e){
	if(pos+1== 5){
		printf("error array is full");
	}
	else
	{
		pos++;
		a[pos]=e;
	}
	return pos;
}
int delete(int a[],int pos){
	if(pos==-1){
		printf("error array is empty");
	}
	else{
		printf("\ndelete:%d\n",a[pos]);
		pos--;
	}
	return pos;
}
void display(int a[],int pos){
	int i;
	if(pos==-1){
		printf("array is empty\n");
		
	}
	else{
		printf("the array contents ;\n");
		for(i=0;i=pos;i++){
			printf("%d\n",a[i]);
		}
	}
	printf("/n");
}
int menu(){
	int ch;
	printf("\n 1.insert \n 2.delete \n 3.diplay \n 4. exit \n enter your choise:");
	scanf("%d",&ch);
	return ch;
}
void processarray(){
	int a[5];
	int pos=-1;
	int ch ,val;
	while((ch=menu())!=4)
	{
		switch(ch){
			case 1:
				printf("enter value to insert:");
				scanf("%d",&val);
				pos=insert(a,pos,val);
				break;
			case 2:
			    pos=delete(a,pos);
			    break;
			case 3:
				display(a,pos);
				break;
			default:
				printf("error:wrong choise\n");
			}
				
			
		}
    }
		
	int main(){
		processarray();
		return 0;
	}
