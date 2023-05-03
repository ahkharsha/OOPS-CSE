//C program to find addition, subtraction, multiplication and division using pointers
#include <stdio.h>

void Addition(int *m, int *n);

void Subtraction(int *m, int *n);

void Multiplication(int *m, int *n);

void Division(int *m, int *n);

int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    
    Addition(&x,&y);
    
    Subtraction(&x,&y);
    
    Multiplication(&x,&y);
    
    Division(&x,&y);

    return 0;
}

void Addition(int *m, int* n){
    printf("%.1f\n",(*m+*n)/1.0);
}

void Subtraction(int *m, int* n){
    printf("%.1f\n",(*m-*n)/1.0);
}

void Multiplication(int *m, int* n){
    printf("%.1f\n",((*m)*(*n))/1.0);
}

void Division(int *m, int* n){
    printf("%.1f\n",((*m)/(*n))/1.0);
}
