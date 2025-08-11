#include<stdio.h>
int main(){

 int a=10,b=11;
 int *p,*q;
 p=&a;
 q=&b;
 
 printf("value of a %d \n",a);
 printf("value of %d \n",*p);
 printf("adress of a is %x\n",&a);
 
 return 0;
 
}
