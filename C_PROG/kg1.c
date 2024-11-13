#include<stdio.h>
int main()
 {
//     char gender;
//     printf("ENTER YOUR GENDER  (Y/N) : ");
//     scanf(" %c",&gender);

//     gender =='M'? printf("male"):printf("female");

//     return 0;

/*operator assignment 
    a op=b;
    ex  a=+b--> a=a+b;

    where op=+,-,*,/,%;
    int a,b=5;
    a++;
    printf("%d",a)
      */ 

    //  int day;
    //  printf("Please enter the day number (1_7) s: ");
    //  scanf("%d",&day);

    //  switch(day){

    // case 1:
    //     printf("the day is sunday : ");
    //     break;
    // case 2:
    //     printf("the day is monday : ");
    //     break;
    // case 3:
    //     printf("the day is tuesday : ");
    //     break;
    // case 4:
    //     printf("the day is wensday : ");
    //     break;
    // case 5:
    //     printf("the day is thursday : ");
    //     break;
    // case 6:
    //     printf("the day is friday : ");
    //     break;
    // case 7:
    //     printf("the day is satarday : ");
    //     break;
    
    // default :
    //     printf("The entered day  number  is wrong. ");


    //  }
     



// int num;
// input_number:
//     printf("Please enter the number : ");
//     scanf("%d",num);
// if (num != 10){

//     goto input_number;
// }


 int month;
     printf("Please enter the month number (1_12) : ");
     scanf("%d",&month);

     switch(month){

    case 1:
        printf("the month is jan : ");
        break;
    case 2:
        printf("the month  is feb : ");
        break;
    case 3:
        printf("the month is mar : ");
        break;
    case 4:
        printf("the month is  apr: ");
        break;
    case 5:
        printf("the month is may : ");
        break;
    case 6:
        printf("the month is jun : ");
        break;
    case 7:
        printf("the month is jul : ");
        break;
    
    default :
        printf("The entered month  number  is wrong. ");

     }
return 0;
}