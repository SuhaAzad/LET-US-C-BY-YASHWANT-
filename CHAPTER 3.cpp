Qa
// profit or loss
#include <stdio.h>
int main() {
    float cp, sp,p;
    printf("Enter cost price: ");
    scanf("%f",&cp);
    printf("Enter selling price: ");
    scanf("%f",&sp);
    p=sp-cp;
    if(p<0)
    {
        printf("you made a loss of %f",-(p/cp)*100);
    }
    else
    {
        printf("you made a profit of %f",(p/cp)*100);
    }
    return 0;
}
Qb
//even or odd
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("Entered number is Even");
    }
    else
    {
        printf("Entered number is Odd");
    }
    return 0;
}
Qc
// leap year
#include <stdio.h>
int main() {
   int year;
   printf("Enter year: ");
   scanf("%d",&year);
   if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
      {
          printf("%d is a leap year", year);
      }   
   else
      {
          printf("%d is not a leap year", year);
      }
   return 0;
}
Qd
Qe
// Reverse of digits
#include <stdio.h>
#include<math.h>
int main() {
    int i,j,num,reverse_n=0,n;
    printf("enter a five digit number: ");
    scanf("%d",&num);
    n=num;
    for(i=4;i>=0;i--)
    {
        j=num%10;
        num=num/10;
        reverse_n=reverse_n+j*pow(10,i);
        
    }
    printf("The reverse of digits is equal to: %d\n",reverse_n);
    if(reverse_n !=n)
    {
        printf("numbers are not equal");
    }
    else
    {
        printf("numbers are equal");
    }
    return 0;
}
Qf
//age comparison
#include <stdio.h>
int main() 
{
    int ajay,ram,shyam;
    printf("Enter age of Ajay: ");
    scanf("%d", &ajay);
    printf("Enter age of Shyam: ");
    scanf("%d", &shyam);
    printf("Enter age of Ram: ");
    scanf("%d", &ram);
    if(ajay<shyam && ajay<ram)
    {
     printf("Ajay is youngest");
    }
    else if(shyam<ajay && shyam<ram)
    {
     printf("Shyam is youngest");
    }
    else
    {
     printf("Ram is youngest");
    }
    return 0;
}
Qg
//triangle
#include <stdio.h>
int main() 
{
    int a,b,c,sum;
    printf("Enter angle a: ");
    scanf("%d", &a);
    printf("Enter angle b: ");
    scanf("%d", &b);
    printf("Enter angle c: ");
    scanf("%d", &c);
    sum=a+b+c;
    if(sum!=180)
    {
     printf("not a valid triangle");
    }
    else
    {
     printf("valid triangle");
    }
    return 0;
}
Qh
//absolute value
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    
    if(num<0)
    {
     printf("absolute value of number is %d",(-1)*num);
    }
    else
    {
     printf("absolute value of number is %d",num);
    }
    return 0;
}
Qi
//area vs perimeter
#include <stdio.h>
int main() 
{
    int l,b,ar,pr;
    printf("Enter length and breadth: ");
    scanf("%d%d", &l,&b);
    
    ar=l*b;
    pr=2*(l+b);
    if(ar<pr)
    {
     printf("Area is less than perimeter");
    }
    else
    {
     printf("Area is greater than perimeter");
    }
    return 0;
}

Qj
//collinearity
#include <stdio.h>

int main() 
{
    float x1,x2,x3,y1,y2,y3,m1,m2;
    printf("Enter (x1,y1): ");
    scanf("%f%f", &x1,&y1);
    printf("Enter (x2,y2): ");
    scanf("%f%f", &x2,&y2);
    printf("Enter (x3,y3): ");
    scanf("%f%f", &x3,&y3);

    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    printf("%f %f",m1,m2);
    if(m2==m1)
    {
        printf("Collinear");
    }
    else
    {
        printf("Not collinear");
    }

    return 0;
}

Qk
// point and circle
#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2, r;
    float d;

    printf("Enter the co-ordinates of the centre of circle: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);

    printf("Enter the co-ordinates of point: ");
    scanf("%d %d", &x2, &y2);

    d= sqrt(pow(x2-x1, 2)+pow(y2-y1,2));

    if(d>r)
        printf("Point (%d,%d) lies outside the circle.", x2, y2);
    else if(d<r)
        printf("Point (%d,%d) lies inside the circle.", x2, y2);
    else if(d==r)
        printf("Point (%d,%d) lies on the boundary of circle.", x2, y2);
    return 0;
}

Ql
// point location
#include<stdio.h>
int main()
{
    int x1, y1;

    printf("Enter the co-ordinates: ");
    scanf("%d %d", &x1, &y1);

    if(x1==0 && y1!=0)
        printf("Point (%d,%d) lies on y-axis.", x1, y1);
    else if(x1!=0 && y1==0)
        printf("Point (%d,%d) lies on x-axis.", x1, y1);
    else if(x1==0 && y1==0)
        printf("Point (%d,%d) lies on origin.", x1, y1);
    else
        printf("point (%d,%d) lies in x-y plane",x1, y1);
    return 0;
}
