#include<stdio.h>

int main(){

    float num1;
    float num2;
    char operator;

    int isint1=0;//or else boolean
    int isint2=0;

    printf("enter first num");
    scanf("%f",&num1);

    printf("enter second num");
    scanf("%f",&num2);

    isint1=(num1==(int)num1);  //check value is int or not: if its true then isint1=1

    isint2=(num2==(int)num2); 

    printf("enter the operation +,-,/,%%");

    scanf(" %c",&operator);

    switch(operator){

        case '+':
                 printf("sum of two number is %f\n ",num1+num2);
                 break;

        case '-':
                 printf("sub of two number is %f\n ",num1-num2);
                 break;
                 
        case '*':
                 printf("Mul of two number is %f\n ",num1*num2);
                 break;
                 
        case '/':
                 if(num2==0){
                    printf(" division by zero");
                 }
                 else{
                    printf("Division of two number is %f\n",num1/num2);

                 }
                 break;    
                 
        case '%':
                 if(!isint1 || !isint2){
                    printf(" error Modulo operator requires integer operands");
                 }
                 else if((int)num2==0){
                    printf(" error division by 0");
                 }
                 else{
                    printf(" modulo of two number %d\n",(int)num1%(int)num2);

                 }

                 break;  
                 
        default:
            printf("Error: Invalid operator.\n");
            break;         
                     

    }



}