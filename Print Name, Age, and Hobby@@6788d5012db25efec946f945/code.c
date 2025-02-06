#include <stdio.h>
int main() {
    char a[100];
    int b;
    char c[100];
    scanf("%c%d%c",&a,&b,&c);
    printf("name: %s",a);
    printf("Age: %d",b);
    printf("Hobby: %s",c);
    
    return 0;
}