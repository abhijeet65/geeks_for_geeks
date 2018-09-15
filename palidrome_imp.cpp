#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int palindrome(int p)
{

    int test=p,s=0;
    while(p>0)
    {
        int temp=p%10;
        s=s*10+temp;
        p=p/10;
    }
    if(s==test)
       return 1;
       else
        return 0;
}

int main()
{
   
   int t;
   scanf("%d",&t);
   while(t!=0)
   {
   int n,i,j;
   scanf("%d",&n);

  
   int end=pow(10,n);
   int max=0;


   for(i=end;i>0;i--)
   {
       for(j=i;j>0;j--)
        {
            int cal=i*j;
        if(palindrome(cal))
            {

            if(max<cal)
               max=cal;
            }

        }

   }
    printf("%d\n",max);
 t--;
}}



