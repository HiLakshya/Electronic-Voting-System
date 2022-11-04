#include<stdio.h>
#include<string.h>
int main(){
    int flag=1;
    while (flag==1){
    char Sname[45];
    char Sgen[1];
    char Sbranch[3];
    char Syear[1];
    char Sstudy[5];
    printf("Enter your name:");
    gets(Sname);
    printf("\n");
    if (!(strcmp(Sname,"Q"))){
        flag=0;
        break;
        }
    printf("Enter your gender:");
    gets(Sgen);
    printf("\n");
    printf("Enter your year:");
    gets(Syear);
    printf("\n");
    printf("BTECH or BBA?:");
    gets(Sstudy);
    printf("\n");
    if (!(strcmp(Sstudy,"BTECH"))){
        //print btech info
        //whtever the  input variable is
        //read text file
        printf("Enter your Branch:");
        gets(Sbranch);
        printf("\n");
    }
    else if (!(strcmp(Sstudy,"BBA"))){
        printf("BBA");
    }
    
    }
    printf("QUIT");
    
    return 0;

}