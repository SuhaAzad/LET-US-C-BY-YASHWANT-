Qa
// Reverse of digits 
#include <stdio.h>

int main() {
    int i,j,n;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        j=n%10;
        printf("%d",j);
        n=n/10;
    
    }
    return 0;
}

Qb
//Sum of digits
#include <stdio.h>

int main() {
    int i,j,n,sum=0;
    printf("enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        j=n%10;
        n=n/10;
        sum=sum+j;
    }
    printf("\nThe sum of digits is equal to: %d",sum);
    return 0;
}

Qc
// Area of triangle using sides
#include <stdio.h>
#include<math.h>
int main() {
    float a,b,c,s,s1,A;
    printf("Enter sides of triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    s1=s*(s-a)*(s-b)*(s-c);
    A=sqrt(s1);
    printf("Area of triangle: %.2f",A);
    return 0;
}

Qd
//Cartesian to polar
#include <stdio.h>
#include<math.h>
int main() {
    float x,y,r,angle;
    printf("Enter Coordinates: ");
    scanf("%f %f",&x,&y);
    r=sqrt(x*x+y*y);
    angle=tanh(y/x)*180/3.14;
    printf("Polar coordinates are(%f,%f)",r,angle);
    return 0;
}

Qe
//Latitude and longitudes
#include <stdio.h>
#include<math.h>
int main() {
    float L1,L2,G1,G2,D;
    printf("Enter Latitude values: ");
    scanf("%f %f",&L1,&L2);
    
    printf("Enter Longitude values: ");
    scanf("%f %f",&G1,&G2);
    
    D = 3963*cosh(sin(L1)*sin(L2) + (cos(L1)*cos(L2)*cos(G2 - G1)));
    printf("The distance in Nautical miles is %f",D);
    return 0;
}

Qf
//wind chill factor
#include <stdio.h>
#include<math.h>
int main() {
    float t,v,wcf;
    printf("Enter temperature: ");
    scanf("%f",&t);
    
    printf("Enter velocity: ");
    scanf("%f",&v);
    
    wcf = 35.74 + 0.6215*t + (( 0.4275*t - 35.75 ) * pow(v,0.16));
    printf("The Wind chill factor is %f",wcf);
    return 0;
}

Qg
// Trigonometric ratios
#include <stdio.h>
#include <math.h>

int main()
{
    float d, r;

    printf("Enter angle in degrees: ");
    scanf("%f",&d);

    r = d * (3.141592653589793238/ 180.0);

    printf("sin(%f) = %f\n",d,sin(r));
    printf("cos(%f) = %f\n",d,cos(r));
    printf("tan(%f) = %f\n",d,tan(r));
    printf("cosec(%f) = %f\n",d,1/sin(r));
    printf("sec(%f) = %f\n",d,1/cos(r));
    printf("cot(%f) = %f\n",d,1/tan(r));

    return 0;
}

Qh
// interchanging content
#include <stdio.h>
#include <math.h>

int main()
{
    int c,d,temp;
    printf("Enter two numbers C and D: ");
    scanf("%d %d",&c,&d);
    
    temp=c;
    c=d;
    d=temp;
    
    printf("Value of C is %d and value of D is %d",c,d);
    
    return 0;
}

Qi
// number of notes
#include<stdio.h>

int main()
{
    int amount, temp, total=0;

    printf("Enter amount: ");
    scanf("%d", &amount);

    temp   = amount / 100;
    amount = amount - (temp*100);
    total=total+temp;
    
    printf("%d note(s) of 100\n", temp);

    temp   = amount / 50;
    amount = amount - (temp*50);
    total=total+temp;

    printf("%d note(s) of 50\n", temp);

    temp   = amount / 10;
    amount = amount - (temp*10);
    total=total+temp;
    
    printf("%d note(s) of 10\n", temp);

    temp   = amount / 5;
    amount = amount - (temp*5);
    total=total+temp;
    
    printf("%d note(s) of 5\n", temp);

    temp   = amount / 2;
    amount = amount - (temp*2);
    total=total+temp;
    
    printf("%d note(s) of 2\n", temp);

    temp   = amount / 1;
    amount = amount - (temp*1);
    total=total+temp;
 
    printf("%d note(s) of 1\n", temp);
    
    printf("Total number of notes: %d",total);
    return 0;
}
