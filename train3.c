#include<stdio.h>
int main(void){
FILE *ftr;
int rollno;
ftr=fopen("hello.txt","w");
if(ftr==NULL){
printf("Unable to open file");
return 0;
}
printf("Enter the rollno:");
scanf("%d",&rollno);
fprintf(ftr,"%d",rollno);
fclose(ftr);
}
