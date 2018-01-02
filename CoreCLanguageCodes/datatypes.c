#include<stdio.h>    

int main(){

// Tek satýrlýk yorum satýrý

/* 
Temel deðiþkenlerimiz char,int,float,double,short,long

char - 1 byte (8 bit)  0-255 ASCII tablosundaki deðerler ...
int - 4 byte  [ -2^16 + 2^16 ]
float - kesirli
double - kesirli kapsamlý

[[ char,int,float,double ]]

%d ; int deðerler için printfde format belirleyici olarak kullanýlýr...
%s ; karakter dizileri için kullanýlýr.

*/

int x = 5;
float f = 3.1;
float d = 4.21;
printf("%d \n",x);
printf("%f \n\n\n",f);

printf("%f %f",f,d);


char c1 = 'c';
printf("%c",c1);  // ekrana c basar...
printf("%d \n\n\n",c1);  // ekrana ASCII tablosundaki c'nin deðerini basar.

printf("%s","Cprogramlama");


return 0;
}
