#include<regx51.h>
sbit R1=P2^0; sbit y1=P2^1;sbit g1=P2^2;
sbit R2=P2^3; sbit y2=P2^4;sbit g2=P2^5;
sbit R3=P3^3; sbit y3=P3^4;sbit g3=P3^5;
sbit R4=P3^0; sbit y4=P3^1;sbit g4=P3^2;
void delay(unsigned int k);
void main(){
	R1=0;	R2=1;	R3=1;	R4=1;
	y1=0;y2=0;y3=0;y4=0;
	g1=1;g2=0;g3=0;g4=0;
	
	delay(45);
	R2=0; //red off
	y2=1;delay(5);//yellow on
	y2=0; //yellow off
	g1=0;R1=1;
	g2=1;delay(45);
	
	
	R3=0; //red off
	y3=1;delay(5);//yellow on
	y3=0;//yellow off
	g2=0;R2=1;
	g3=1;delay(45);
	
	R4=0;
	y4=1;delay(5);
	y4=0;
	g3=0;R3=1;
	g4=1;delay(45);
	
	R1=0;R4=0;
	y1=1;delay(5);
	y1=0;
	g4=1;
	
	
}
void delay(unsigned int k){
	int i,j;
	for(i=0;i<500;i++){
		for(j=0;j<500;j++);
	}
}

