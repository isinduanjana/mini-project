#include<stdio.h>

void party();
void candidate();
void voter();
void vote();

int m=0,m1;
//int ap[25]={0,1,2,3,4,5,6,7,8,9,10};
int ac[25]={0,1,2,3,4,5,6,7,8,9,10};
int a,vo,v,r;
int cc=0,cp=0;//array zone
int p=0,px;//temp party zone
int c=0,cx,cy;//temp candidate zone
char *ap[10]={"jvp","unp","wer","besic"};//temp
char cn[30],pn[30];

int main(){

while(m<2){
    printf("\nMENU\n==============\n");
    printf("1. Add Party\n2. Add candidates\n3. Add voters\n4. Vote\n5. Show result\nEnter choice :");
    scanf("%d",&m1);
if (m1>0 && m1<6){
switch(m1){
   //case 1: party(); continue;
   //case 2: candidate(); continue;
   //case 3: voter(); continue;
   //case 4: vote(); continue;
}
}
}
}
