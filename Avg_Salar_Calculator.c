//C program to find the average salary of a group of people and the highest and the lowest salary among them

#include <stdio.h>

int main()
{
    int m,i,sal;
    scanf("%d",&m);
    
    int sal_arr[m];
    for (i=0;i<m;i++)
    {
        scanf("%d",&sal);
        sal_arr[i]=sal;
    }
    
    int max=sal_arr[0],min=sal_arr[0],sum=0;
    float avg=0;
    
    for (i=0;i<m;i++)
    {
        if (sal_arr[i]>max)
        max=sal_arr[i];
        
        if (sal_arr[i]<min)
        min=sal_arr[i];
        
        sum+=sal_arr[i];
    }
    
    avg=(float) sum/m;

    printf("\n%.0f",avg);  //"%.0f" is used as the average salary in the output for the test case given in this question (46940 in this case) does not contain any decimal value
    printf("\n%d",max);
    printf("\n%d",min);
    
    return 0;
}
