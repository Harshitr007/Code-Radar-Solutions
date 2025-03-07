// Your code here...
#include <stdio.h>
int main(){
    int year1;
    scanf("%d",&year1);
    if ((year1%4==0 && year % 100 !=0) || (year % 400 == 0)) {
    printf("Leap Year");
     } else {
    printf("Not a Leap Year");
} 
return 0;
}
