#include <stdio.h>
int main(){

int dia;
int mes;
int ano;

scanf("%d %d %d", &dia, &mes, &ano);
  
if(dia==4 && mes==10 && ano==1582){
	dia=15;
}

else if(dia ==31 && mes ==12){
	
	dia =1;
	mes =1;
	ano = ano+1;
}
 else  if (mes==4 && dia ==30){
 	 dia =1;
 	 mes =mes+1;
 }
 else if (mes==6 && dia ==30){
 dia =1;
 mes=mes+1;
 }
 else if(mes==9 && dia==30){
 	dia=1;
 	mes=mes+1;
 }
else if(mes ==11 && dia ==30){
	dia=1;
	mes=mes+1;
}
 else if((mes ==1 || mes ==3 || mes==5 || mes==7 || mes==8 || mes ==10) && dia==31){
 	dia =1;
 	mes=mes+1;
 }
 
else if( mes==2 && dia==29){
	dia=1;
	mes=3;
}
 else if(mes ==2 && dia ==28 && !( ano %4==0 &&(ano %100!=0 || ano%400==0))){
 	dia =1;
 	mes=3;
 }
 else {
 	dia=dia+1;
 }

 printf("%2d %2d %4d", dia, mes, ano);
 
 return 0;
 
}

