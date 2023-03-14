#include<stdio.h>
#include<string.h>
int main(){
	char a[]="genius";
	char b[]="infinity";
	
	char c[50];
	char d[50];
	
	 printf("please Enter username : ");
	 scanf("%s",c);
	 printf("please Enter password : ");
	 scanf("%s",d);
	 
	 if(strcmp(a,c)==0 && strcmp(b,d) == 0){
	 	printf("login success");
	 }
	 else{
	 	printf("please try again login detail don't match ");
	 }
	 
	
	return 0;
}
