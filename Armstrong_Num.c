#include <stdio.h>
int main(){
    int n,an;
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
        int i=temp%10;
        temp=temp/10;
        an+=i*i*i;
    }
    (n==an) ? printf("Amstrong Number") : printf("Not a Amstrong Number");
    return 0;
}
