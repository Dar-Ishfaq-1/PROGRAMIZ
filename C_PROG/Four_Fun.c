#include <stdio.h>
int main(){

int a,b,n,res;




printf("Enter the two numbers : ");
scanf("%d%d",&a,&b);

prinf("Enter the Numeric 1 for add");
prinf("Enter the Numeric 2 for sub");
prinf("Enter the Numeric 3 for mul");
prinf("Enter the Numeric 4 for div");
prinf("Enter the Numeric 5 for modulo");

int n,res;

printf("Enter the number between 1-5");
scanf("%d",&n);

if (n==1)
{

    res=a+b;
    printf("The sum of the two numbers is : %d",res);
}

else if (n==2)
{

    res=a-b;
    printf("The sub of the two numbers is : %d",res);
}

else if (n==3)
{

    res=a*b;
    printf("The mul of the two numbers is : %d",res);
}
else if (n==4)
{
    if(b!=0);{
    res = a/b;
    printf("The div of the two numbers is : %d",res);}
    else{

    printf("error:The div of the two numbers is : %d\n",res);    
    }
}
    else if (n==5)
    }
{
if(b!=0)

    res=a%b;
    printf("The sub of the two numbers is : %d",res2);
}

return 0;

}