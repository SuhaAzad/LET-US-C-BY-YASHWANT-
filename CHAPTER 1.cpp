Qa
// Gross salary
#include <stdio.h>

int main() {
    float sal, da, hra, gr_sal;
    printf("Enter salary: ");
    scanf("%f",&sal);
    
    da=0.4*sal;
    hra=0.2*sal;
     
    gr_sal=sal+da+hra;
    printf("Gross Salary is %f",gr_sal);
    return 0;
}

Qb
// Distance
#include <stdio.h>

int main() {
    float km, m, cm, ft, in;
    printf("Enter distance in Kilometers: ");
    scanf("%f",&km);
    
    m=1000*km;
    cm=100*m;
    ft=3.281*m;
    in=39.37*m;
    
    printf("Distance in Meters: %f\n",m);
    printf("Distance in centimeters: %f\n",cm);
    printf("Distance in feet: %f\n",ft);
    printf("Distance in inches: %f\n",in);
    return 0;
}
Qc
// Aggregate and percentage
#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5, agr, percent;
    printf("Enter marks of your subjects out of 100: ");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    
    agr=s1+s2+s3+s4+s5;
    percent=agr/500*100;
    printf("Aggreate marks: %f\n",agr);
    printf("Percentage: %f",percent);
    
    return 0;
}

Qd
// temperature
#include <stdio.h>

int main() {
    float celcius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);
    
    celcius=(fahrenheit-32)/1.8;
    printf("Temperature in celcius: %f",celcius);
    
    return 0;
}

Qe
// Area and perimeter
#include <stdio.h>

int main() {
    float l,b,r;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l,&b);
    
    printf("Area of ractangle: %f and perimeter of rectangle: %f",l*b,2*(l+b));
    
    printf("\nEnter radius of circle: ");
    scanf("%f", &r);
    
    printf("Area of circle: %f and circumference of circle: %f",3.14*r*r,2*3.14*r);
    
    return 0;
}

Qf
// Paper sizes
#include<stdio.h>
int main()
{
    int i, height=1189, width=841, alter;
     for(i=0;i<9;i++)
     {
         printf("\n A%d: %d mm x %d mm", i, height, width);
         alter = height;
         height = width;
         width = alter/2;
     }
     return (0);
}
