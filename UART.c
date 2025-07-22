//#include<reg51.h>

//void delay_ms(unsigned int time){
//int i,j;
//	for(i=0;i<time;i++)
//		for(j=0;j<123;j++);

//}
//char arr1[50]="https://github.com/yuveshmenghare";
//char arr2[5]="is my";
//char arr3[50]=" git-hub account.My name is Yuvesh Menghare";

//int main(){
//	int i=0;
//SCON = 0x50;
//TMOD = 0x20;
//TH1 = 253;
//TR1 = 1;
//	
//	while(1){
//	
//	for (i=0;i<50;i++){
//	SBUF = arr1[i];
//	while(TI==0);
//	delay_ms(1000);
//	TI=0;
//	};
//	
//	for(i=0;i<5;i++){
//	SBUF = arr2[i];
//	while(TI==0);
//	delay_ms(1000);
//	TI=0;
//	};
//	
//	for(i=0;i<50;i++){
//	SBUF = arr3[i];
//	while(TI==0);
//	delay_ms(1000);
//	TI=0;
//	};
//	}
//}





#include <reg51.h>

void delay_ms(unsigned int time){
    int i, j;
    for(i = 0; i < time; i++)
        for(j = 0; j < 123; j++);
}

char arr1[50] = "https://github.com/yuveshmenghare";
char arr2[5] = "is my";
char arr3[50] = "git-hub account.My name is Yuvesh Menghare";

void main(){
    int i = 0;
    SCON = 0x50;
    TMOD = 0x20;
    TH1 = 253;
    TR1 = 1;

    while(1){
        for(i = 0; arr1[i] != '\0'; i++){
            SBUF = arr1[i];
            while(TI == 0);
            TI = 0;
            delay_ms(500);
        }

        for(i = 0; arr2[i] != '\0'; i++){
            SBUF = arr2[i];
            while(TI == 0);
            TI = 0;
            delay_ms(500);
        }

        for(i = 0; arr3[i] != '\0'; i++){
            SBUF = arr3[i];
            while(TI == 0);
            TI = 0;
            delay_ms(500);
        }
    }
}












