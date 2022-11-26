Qa
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

Qb
#include <stdio.h>

int main() {
    char x;
    printf("Enter character: ");
    scanf("%c",&x);
    
    if (x >= 65 && x <= 90)
        printf("%c is a capital letter",x);

    else if (x >= 97 && x <=122)
        printf("%c is a small letter",x);

    else if (x >=48 && x <= 57)
        printf("%c is a digit",x);

    else if (x>=0 && x<=47 || x>=58 && x<=64 || x>=91 && x<=96 || x>=123 && x<=127)
        printf("%c is a special symbols",x);


    return 0;
}

Qc
//Steel
#include<stdio.h>
int main()
{
    
    float h, cc, ts;
    int grade;
    printf("Enter the value of Hardness: ");
    scanf("%f", &h);

    printf("Enter the value of Carbon Content: ");
    scanf("%f", &cc);

    printf("Enter the value of Tensile Strength: ");
    scanf("%f", &ts);


    if(h>50 && cc<0.7 && ts>5600)
        printf("The grade of steel is: 10");

    if(h>50 && cc<0.7 && ts<=5600)
        printf("The grade of steel is: 9");
        
    if(h<=50 && cc<0.7 && ts>5600)
        printf("The grade of steel is: 8");

    if(h>50 && cc>=0.7 && ts>5600)
        printf("The grade of steel is: 7");

    if(h>50 && cc<0.7 && ts>5600)
        printf("The grade of steel is: 6");
        
    if(h<=50 && cc>0.7 && ts<5600)
        printf("The grade of steel is: 5");
        
}

Qd
// triangle
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a+b>c && a+c>b && b+c>a)
        printf("Valid triangle");
    else
        printf("Invalid triangle");

    return 0;
}

Qe
// triangle
#include <stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    printf("Enter the sides of triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a==b && b==c && c==a)
        printf("Equilateral triangle\n");
    if(a!=b && b!=c && c!=a)
        printf("Scalene triangle\n");
    if(a==b || b==c || c==a)
        printf("Isosceles triangle\n");
    if((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(c,2) + pow(b,2) == pow(a,2)) || pow(a,2) + pow(c,2) == pow(b,2))
		printf("Right triangle"); 
     
    
    return 0;
}

Qf
// weight
#include <stdio.h>

int main() {
    int wt;;
    printf("Enter weight in pounds: ");
    scanf("%d",&wt);
    
    if(wt < 115)  
    {  
        printf("Flyweight\n");  
    }  
    else if(wt >= 115 && wt <= 121)  
    {  
        printf("Bantamweight\n");  
    }  
    else if(wt >= 122 && wt <= 153)  
    {  
        printf("Featherweight\n");  
    }  
    else if(wt >= 154 && wt <= 189)  
    {  
        printf("Middleweight\n");  
    }  
    else if(wt >= 190)  
    {  
        printf("Heavyweight\n");  
    }  
  
    return 0;  
     
}

Qg
//Colour
#include<stdio.h>
int main()
{
	float r, g, b, c, m, y, k, w, max;
	
	printf("\nEnter the color values of R, G and B : ");
	scanf("%f%f%f", &r, &g, &b);
	
	
	r /= 255;
	g /= 255;
	b /= 255;
	
	max=r;
	if(max < b)
		max = b;
	
	if(max < g)
		max = g;

    w=max;	
	
	c = (w - r) / w;
	m = (w - g) / w;
	y = (w - b) / w;
	k = 1 - w;
	
	printf("\nC : %f\nM : %f\nY : %f\nK : %f", c,m,y,k);
	
	return 0;
}

Qh
#include<stdio.h>  
int main()  
{  
    int m, day;  
  
    printf("Enter your birth month: ");  
    scanf("%d", &m);  
  
    printf("Enter your birth day: ");  
    scanf("%d", &day);  
  
    if( (m == 12 && day >= 22) || (m == 1 && day <= 19) )  
    {  
        printf("Capricorn\n");
    }  
    else if( (m == 1 && day >= 20) || (m == 2 && day <= 17) )  
    {  
        printf("Aquarius\n");  
    }  
    else if( (m == 2 && day >= 18) || (m == 3 && day <= 19) )  
    {  
        printf("Pisces\n");  
    }  
    else if( (m == 3 && day >= 20) || (m == 4 && day <= 19) )  
    {  
        printf("Aries\n");  
    }  
    else if( (m == 4 && day >= 20) || (m == 5 && day <= 20) )  
    {  
        printf("Taurus\n");  
    }  
    else if( (m == 5 && day >= 21) || (m == 6 && day <= 20) )  
    {  
        printf("Gemini\n");  
    }  
    else if( (m == 6 && day >= 21) || (m == 7 && day <= 22) )  
    {  
        printf("Cancer\n");  
    }  
    else if( (m == 7 && day >= 23) || (m == 8 && day <= 22) )  
    {  
        printf("Leo\n");  
    }  
    else if( (m == 8 && day >= 23) || (m == 9 && day <= 22) )  
    {  
        printf("Virgo\n");  
    }  
    else if( (m == 9 && day >= 23) || (m == 10 && day <= 22) )  
    {  
        printf("Libra\n");  
    }  
    else if( (m == 10 && day >= 23) || (m == 11 && day <= 21) )  
    {  
        printf("Scorpio\n");  
    }  
    else if( (m == 11 && day >= 22) || (m == 12 && day <= 21) )  
    {  
        printf("Sagittarius\n");  
    }  
    return 0;  
}  

Qi
//BMI
#include <stdio.h>  
int main()  
{  
    float height, weight, bmi;  
  
    printf("Enter height in meter\n");  
    scanf("%f", &height);  
  
    printf("Enter weight in kg\n");  
    scanf("%f", &weight);  
  
    bmi = weight / (height * height);  
  
    printf("Your Body Mass Index(BMI) is %f\n", bmi);  
  
    if(bmi < 15)  
    {  
        printf("Starvation\n");  
    }  
    else if(bmi >= 15.1 && bmi <= 17.5)  
    {  
        printf("Anorexic\n");  
    }  
    else if(bmi >= 17.6 && bmi <= 18.5)  
    {  
        printf("Underweight\n");  
    }  
    else if(bmi >= 18.6 && bmi <= 24.9)  
    {  
        printf("Ideal\n");  
    }  
    else if(bmi >= 25 && bmi <= 25.9)  
    {  
        printf("Overweight\n");  
    }  
    else if(bmi >= 30 && bmi <= 30.9)  
    {  
        printf("Obese\n");  
    }  
    else if(bmi >= 40)  
    {  
        printf("Morbidly Obese\n");  
    } 
  
    return 0; 
}  
