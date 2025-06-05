#include<stdio.h>
//simple calculator program
int main(){
    int Choice;
    float First_Num,Second_num,C;
    char Name[50];

    printf("Enter your First Number:- ");
    scanf("%f",&First_Num);
    printf("Enter your Second Number:- ");
    scanf("%f",&Second_num);

    printf("[1] - Addition\n");
    printf("[2] - Subtraction\n");
    printf("[3] - Division\n");
    printf("[4] - Multipication\n");
    printf("[5] - Lrger Number");
    printf("[6] - Smaller Number");

    printf("Enter your choice:- ");
    scanf("%d",&Choice);

    switch(Choice){
    case 1:
        C=First_Num+Second_num;
        strcpy (Name,"Addition");
        break;
    case 2:
        if(First_Num>Second_num){
            C=First_Num-Second_num;
        }else{
            C=Second_num-First_Num;
        }
        strcpy (Name,"Subtraction");
        break;
    case 3:
        C=First_Num*Second_num;
        strcpy (Name,"Division");
        break;
    case 4:
        if(First_Num>Second_num){
            C=First_Num/Second_num;
        }else{
            C=Second_num/First_Num;
        }
        strcpy (Name,"Multipication");
        break;
    case 5:
        C=(First_Num>Second_num)? First_Num:Second_num;
        strcpy (Name,"Lrger Number");
        break;
    case 6:
        C=(First_Num<Second_num)? First_Num:Second_num;
        strcpy (Name,"Smaller Number");
        break;
    default:
        strcpy (Name,"you Enter Wrong Number");
    };
    printf("%s is %f",Name,C);




    return 0;
}
