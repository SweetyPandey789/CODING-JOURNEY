#include<stdio.h>
 void intRoman(int num)
{
   /* Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
C Code:*/
    char *roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};//Roman numerals
    int integer[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};   //base values
    int i=0;
    while(num!=0)                         
    {                                        
        while(num/integer[i])              
        {                                    
            printf("%s",roman[i]);         
            num -= integer[i];               
        }
       i++;                             
    }
}
int main()
{
    int num;                            
    printf("Enter the integer value:");
    scanf("%d",&num);   //User input
    intRoman(num);

}