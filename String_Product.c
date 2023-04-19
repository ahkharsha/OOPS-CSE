//C program to return the product of two numbers as string

char * multiply(char * num1, char * num2){
    if(num1[0]=='0'||num2[0]=='0')return "0";
    int la=strlen(num1);
    int lb=strlen(num2);
    int *arr=calloc(la+lb+1,sizeof(int));
    arr[0]=0;
    for(int i=0;i<la;i++){
        for(int j=0;j<lb;j++){
            arr[i+j+1]+=(num1[i]-48)*(num2[j]-48);
        }
    }
    for(int i=0;i<la+lb;i++)printf("%d %d\n",i,arr[i]);
    for(int i=la+lb-1;i>=0;i--){
        while(arr[i]>=10){
            arr[i]-=10;
            arr[i-1]++;
        }
    }
    for(int i=la+lb-1;i>=0;i--){
        arr[i]+='0';
    }
    if(arr[0]!='0'){
        char *ans=calloc(la+lb+1,sizeof(char));
        for(int i=la+lb-1;i>=0;i--)ans[i]=arr[i]; 
        return ans;
    }
    char *ans=calloc(la+lb,sizeof(char));
    for(int i=la+lb-1;i>0;i--)ans[i-1]=arr[i]; 
    return ans;
}
