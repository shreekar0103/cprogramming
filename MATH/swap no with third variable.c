/*2.	Swap Two Numbers
	•	Write a program to swap two numbers using a third variable.*/
    #include <stdio.h>
    int main (){
        int x, y ;
        int z;
        printf("Enter two number : ");
        scanf("%d %d",&x,&y);
        z=x;
        x=y;
        y=z;      
        printf("%d %d \n",x,y);
        return 0 ;
    }