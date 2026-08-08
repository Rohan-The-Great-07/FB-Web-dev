#include<stdio.h>

int main ()
{
    float a,b; 
    char rk;
  char op;
  char loop; // Variable Declartion

  do
  { printf("\n               ---- The Rohan's Calculator ----                \n  ");
    scanf(" %c" ,&rk);

    if ( rk == '7')
    { printf("enter number a: ");
    scanf("%f",&a);

    printf("enter number b: ");
    scanf("%f",&b);

    printf(" Enter : \n");
    printf("            + for add \n");
    printf("            - for substraction \n");
    printf("            * for product \n");
    printf("            / for division \n");
    printf("            2 for (a+b)^2 \n");
    printf("            3 for (a+b)^3 \n");
    printf("            4 for (a+b)^4 \n");
    printf("            a for a square \n");
    printf("            b for b square \n");
    printf("            %% fOR percentage of a out of b \n \n");
    printf("            Your input :  \n");
    
    
    scanf(" %c", &op);

    if ( op == '+')
    {printf(" sum = %f\n" , a+b);}

    else if ( op == '-')
    {printf(" substraction = %f\n" , a-b);}

     
    else if ( op == '*')
    {printf(" product = %f\n" , a*b);}

    
     else if ( op == '/')
    {if (b != 0)
      printf(" division = %f\n" , a/b);
      else
    printf("Infinite\n");}

      else if ( op == '2')
       {printf (" whole square = %f\n" , (a+b)*(a+b));}

       else if ( op == '3')
       {printf (" whole cube = %f\n" , (a+b)*(a+b)*(a+b));}

       else if ( op == '4')
       {printf (" 4th power = %f\n" , (a+b)*(a+b)*(a+b)*(a+b));}

      else if ( op == 'a')
      {printf (" a square = %f\n" , a*a);}

       else if ( op == 'b')
      {printf (" b square = %f\n" , b*b);}
 
      else if ( op == '%')
      {
      if(b != 0)
      {printf(" percentage = %f\n" , a*100/b);}
      else {printf ("Can't be percentage\n");}
      }

      else
      { printf("do not reach here \n");}




      printf("\nDo you want to continue ? (y/n) :  ");
      scanf(" %c" ,&loop);}


    else { printf(" Invalid Password \n");

      printf("\nDo you want to continue ? (y/n) :  ");
      scanf(" %c" ,&loop);
      }}
      while(loop == 'y' || loop == 'Y');

      return 0;
      }