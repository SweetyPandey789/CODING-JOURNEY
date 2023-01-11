//write a program to print number to word
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void checkrange(int num);
void checkrange1 (int num);
void checkrange2(int num);
void checkrange3(int num);
void checkrange4(int num);

void checkdigit1(int num);
void checkdigit2(int num);
void checkdigit3(int num1,int num2);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Entered number in words\n");
    if(num<=100)
    checkrange1(num);
    else if(num>100&&num<1000)
    checkrange2(num);
    else if(num>=1000&&num<=100000)
    checkrange3(num);
    else if(num>100000&&num<=10000000)
    checkrange4(num);
    else
    checkrange(num);
    return 0;

}
void checkrange(int num)
{
    printf("Entered number should be between 0 to 10000000\n");

}
void checkrange1(int num)
{
   int x,y,z;
   if(num>=0 && num<=10)  
   {
    checkdigit1(num);

   }
   else if(num>=20 && num<=100)
   {
    y=num/10;
    z=num%10;
    checkdigit3(y,z);
   }
}
void checkrange2(int num)
{
    int x,y,z;
    y=num/100;
    checkdigit1(y);
    printf(" hundred ");
    x=num%100;
    checkrange1(x);

}
void checkrange3(int num)
{
    int x,y,z;
    if(num==1000)
    {
        printf(" Thousand ");
        exit(0);
    }
    else if(num==100000)
    {
        printf(" Lakh ");
        exit(0);
    }
    else{
        x=num/1000;
        checkrange1(x);
        printf(" thousand ");
        z=num%1000;
        if(z<=99)
        checkrange1(z);
        else
        checkrange2(z);
    }
}
void checkrange4(int num)
{
    int x,y;
    if(num==10000000)
    {
        printf(" one crore ");
        exit(0);
    }
    x=num/100000;
    checkrange1(x);
    printf(" lakhs ");
    y=num%100000;
    if(y==0)
    exit(0);
else if(y<=99)
checkrange1(y);
else if(y>99&&y<=999)
checkrange2(y);
else
checkrange3(y);
}
void checkdigit1(int num)
{
    switch(num)
    {
        case 0: printf(" zero ");
        break;
        case 1:printf(" one ");
        break;
        case 2:printf(" two ");
        break;
        case 3:printf(" three ");
        break;
        case 4:printf(" four ");
        break;
        case 5:printf(" five ");
        break;
        case 6:printf(" six ");
        break;
        case 7:printf(" seven ");
        break;
        case 8:
        printf(" eight ");
        break;
        case 9:printf(" nine ");
       break;
       case 10:printf(" ten ");
       break;
       default:printf(" ");
    }
}
void checkdigit2(int num)
{
    switch(num)
    {
        case 1:printf(" eleven ");
        break;
        case 2:printf(" twelve ");
        break;
        case 3:printf(" thirteen ");
        break;
        case 4:printf(" fourteen ");
        break;
        case 5:printf(" fifteen ");
        break;
        case 6:printf(" sixteen ");
        break;
        case 7:printf(" seventeen ");
        break;
        case 8:printf(" eighteen ");
        break;
        case 9:printf(" ninteen ");
        break;
        case 10:printf(" twenty ");
        break;
        default:printf(" ");

    }
}void checkdigit3(int num1,int num2)
{
    switch(num1)
    {
        case 2:printf(" twenty ");
        break;
        case 3:printf(" thirty ");
        break;
        case 4:printf(" forty ");
        break;
        case 5:printf(" fifty ");
        break;
        case 6:printf(" sixty ");
        break;
        case 7:printf(" seventy ");
        break;
        case 8:printf(" eighty ");
        break;
        case 9:printf(" ninty ");
        break;
        case 10:printf(" hundred ");
        break;
        default:
        printf(" ");

    } 
    checkdigit1(num2);
}