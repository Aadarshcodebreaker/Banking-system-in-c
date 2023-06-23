#include <stdio.h>

int main(void){
    int myNum;
    const pin = 1234;
printf("Type a number: \n");
scanf("%d", &myNum);
if(myNum == pin){
    printf("your account has 5000");
     int myNumb;
printf("type ammount of money to be credited: \n");
scanf("%d", &myNumb);
if(myNumb < 5000){
    printf("money credited");
}
else{
   printf("insufficient balance");
}}
else{
  printf("wrong pin");
}
}