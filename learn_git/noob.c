#include<stdio.h>
int noob(int);
int bro (int);

int main()
{
    int n,s;
    printf("Enter the value=");
    scanf("%d",&n);
    noob(n);
    // printf("The value is %d",s);
  


}
int noob(int a)
{

 int b,s ; 
 printf("Enter the value of b=");
 scanf("%d",&b);
  s=a+b;
  bro(s);

}
int bro(int s)
{
      printf("The value is %d",s);
}