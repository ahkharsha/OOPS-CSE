//C program to find in person count, out person count and available person in a library
#include <stdio.h>

int Enter_Library(int n,int g,int h)
{
    switch(n)
    {
        case 1:
            g++;
            printf("\nOne person entered the library. Total people inside: %d",g-h);
            return g;
    
        case 2:
            return g;
            
        case 3:
            printf("\nTotal people entered: %d\nTotal people exited: %d\nAvailable people in the library: %d",g,h,g-h);
            break;
    }
}

int Exit_Library(int n,int g,int h)
{
    switch(n)
    {
        case 1:
            return h;
    
        case 2:
            h++;
            printf("\nOne person exited the library. Total people inside: %d",g-h);
            return h;
            
        case 3:
            break;
    }
}



int main()
{
    int x,In_Count_Person=0,Out_Count_Person=0,Available_Person=0;
    printf("\nSelect an option:\n1. Enter the library\n2. Exit the library\n3. Display count of people\n4. Exit the program\nEnter your choice: ");
    scanf("%d",&x);
    
    if (x>0,x<=4) //Checking boundary condition
    {
        while (x!=4, x>0, x<4)
        {
            {
                In_Count_Person=Enter_Library(x,In_Count_Person,Out_Count_Person);
                Out_Count_Person=Exit_Library(x,In_Count_Person,Out_Count_Person);
                
                printf("\nSelect an option:\n1. Enter the library\n2. Exit the library\n3. Display count of people\n4. Exit the program\nEnter your choice: ");
                scanf("%d",&x);
            }
        }
    
        printf("Exiting");
    }
    return 0;
}
