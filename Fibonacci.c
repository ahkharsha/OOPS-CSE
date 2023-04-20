#include <stdio.h>
int fib(int n);
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int f=fib(i);
        printf("%d Number of this series is %d\n",i,f);  
    }
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN=fibNm1+fibNm2;
    return fibN;
    
}
