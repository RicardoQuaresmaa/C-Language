#include<stdio.h>    

int main(){

// Tek sat�rl�k yorum sat�r�

/* 
Temel de�i�kenlerimiz char,int,float,double,short,long

char - 1 byte (8 bit)  0-255 ASCII tablosundaki de�erler ...
int - 4 byte  [ -2^16 + 2^16 ]
float - kesirli
double - kesirli kapsaml�

[[ char,int,float,double ]]

%d ; int de�erler i�in printfde format belirleyici olarak kullan�l�r...
%s ; karakter dizileri i�in kullan�l�r.

*/

int x = 5;
float f = 3.1;
float d = 4.21;
printf("%d \n",x);
printf("%f \n\n\n",f);

printf("%f %f",f,d);


char c1 = 'c';
printf("%c",c1);  // ekrana c basar...
printf("%d \n\n\n",c1);  // ekrana ASCII tablosundaki c'nin de�erini basar.

printf("%s","Cprogramlama");


return 0;
}
