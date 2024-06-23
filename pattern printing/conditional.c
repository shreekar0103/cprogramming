/*
if else 
else if 
ternary 
switch

*/

 #include<stdio.h>
int main () {

int day; // 1 monday, 2 tuesday.....

printf("enter a day (1-7) :");
scanf("%d", &day);
switch (day) {

    case 1 : printf("monday \n");
            break;
    case 2 : printf("tuesday \n");
            break;
    case 3 : printf("wednesday \n");
            break;
    case 4 : printf("thrusday \n");
            break;

    case 5 : printf("friday \n");
            break;
    case 6 : printf("satday \n");
            break;
    case 7 : printf("sunday \n");
            break;

    default : printf("not a valid day! \n ");

}
/*int age ;
printf("enter your age : ");
scanf("%d", &age );

if(age >= 18){

    printf("adult \n");
    printf("you can drive \n");
}

 else if (age >13 && age < 18) {
    //will be excuted if the statement is false 
    printf ("you are not adult ");

}

else {
    printf("Child ");
}

//ternary operator 
age >= 18 ? printf ("adult \n") : printf("not adult \n"); */







return 0;
}