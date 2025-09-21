#include<stdio.h>

void party();
void candidate();
void voter();
void vote();
<<<<<<< HEAD
void loadpar();
=======
>>>>>>> 1d0bd6f16bebe86baffcf2d6807e1ecb8aaaf19c

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
   case 4: vote(); continue;
}
}
}
}
void vote()//tmp test



{
int v,v1=0,v3,v5=1,pa,ca;
while (v1<1){
printf("\n1. Vote \n2. Post three preferences\n3. back\n\nwhat is your choice:");
scanf("%d",&v);
<<<<<<< HEAD

if (v<4 && v>0);{
 if(v==1){
 loadpar();
 printf("\nSelect the party :");
 
 
=======
//*
if (v<4 && v>0);{
 if(v==1){
 printf("\nSelect the party :");
>>>>>>> 1d0bd6f16bebe86baffcf2d6807e1ecb8aaaf19c
 scanf("%d",&pa);
for(int v2=1;v2<=5;v2++){//5 wenuwata candidate list
if (v2==pa){
    //party file ekata add Karanna
    printf("\nVote to candidate :");
    scanf("%d",&ca);
        for(int v4=1;v4<=5;v4++){//5 wenuwata candidate list
        if (v4==ca){
        printf("\nVote successfully \n**********************\n");
        //candidate ge variable ekata add Karanna
        //vote file ekata add Karanna
        }
        else{
        continue;}
        }
    }
else{
    continue;
    }

 }
}
if(v==2){
while (v5<4){
 printf("\nSelect the party %d:",v5);
 scanf("%d",&pa);
 for(int v2=1;v2<=5;v2++){//5 wenuwata candidate list
if (v2==pa){
    //party file ekata add Karanna
    printf("\nVote to candidate :");
    scanf("%d",&ca);
        for(int v4=1;v4<=5;v4++){//5 wenuwata candidate list
        if (v4==ca){
        printf("\n%d Vote updated\n-------------------\n\nNext one\n",v5);
        //candidate ge variable ekata add Karanna
        //vote file ekata add Karanna
        }
        else{
        continue;}
        }
        }
    }
/*else{
    continue;
    }*/
    v5++;
}
printf("\nVote successfully\n************************\n");
}
if (v==3)
{
    v1++;
}


else{
    printf("\nTry again\n");
    continue;}

}
<<<<<<< HEAD
}
}
void loadpar(){
    char ch[25];
    FILE *par;
    //printf("enter name");
    //scanf(" %s",ch);
    par=fopen("par.txt","r");
    if(par==NULL){
        printf("try again");    }
    else{
        char ch;
    while ((ch = fgetc(par)) != EOF) {
        printf("%c",ch);
        
        if (ch=='_')
        {
            printf("\b\t");
        }
        
    }
fclose(par);

    }
}
=======


}
}
>>>>>>> 1d0bd6f16bebe86baffcf2d6807e1ecb8aaaf19c
