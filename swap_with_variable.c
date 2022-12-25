//SWAPPING OF TWO NUMBER USING THIRD VARIABLE
#include<stdio.h>
int main()
{
    int a,b,temp=0;
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;

}
 // METHOD 2(
# include<stdio.h>
int main()
{
    int a=20,b=30,temp=0;
    printf("Before swapping a=%d b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf(" After swapping a=%d b=%d",a,b);
  return 0;  
}



//Swap by  using function
#include<stdio.h>
int swap(int a,int b );
int main()
{
    int a,b ,temp=0;
    scanf("%d %d",&a,&b);
    printf("Before swapping a=%d\nb=%d\n",a,b);
   swap(a,b);
}
int swap(int a,int b)
{
  int temp; 
   temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d\nb=%d",a,b);
}