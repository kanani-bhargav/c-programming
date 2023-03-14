#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	int i,len;
	int letter=0,digit=0,special=0;
	
	x:

	 printf("\nplease Enter password : ");
	 scanf("%s",a);
	 len=strlen(a);
	 
	 if(len>=6) {
	 	for(i=0;i<=len;i++){
	 	if((a[i]>='a' && a[i]<='z') ||(a[i]>='A' && a[i]<='Z')){
	 		letter=1;
		 }
		 else if(a[i]>='0' && a[i]<='9'){
		 	digit=1;
		 }
		 else{
		 	special=1;
		 }
	   }
	   if((letter&&digit&&special)==1){
	   	printf("password valid");
	   }
	   else{
	   	printf("password invalid");
	   }
	 }                             
	 
	 else{
	 	printf("password invalid");
	 }
	 goto x;
	
	return 0;
}
