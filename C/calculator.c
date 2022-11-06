/*CALCULATOR 

************************
*CODED BY TRIDEEP NANDI*
************************

PERFORMS VARIOUS FUNCTION RELATED TO MATHEMATICS
SIMPLE OPERATIONS, TRIGNOMETRIC OPERATIONS , INVERSE TRIGNOMETRIC OPERATIONS

IMPROVEMENT IS REQUIRED IN THIS DUE TO REPITIONS OF SAME FUNCTION IN DIFFERENT OPERATIONS
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#define deg_rad 0.0174532925
#define rad_deg 57.2957795

void cyan (void);
void green(void);  // TO GIVE THE FINAL ANS IN GREEN COLOR
void reset (void); // TO RESET THE COLOR
int main (void)
{   
    for (;;)
    {
        char opt[100];
        float  x, y, z;
        
        //GIVE THE OPERATION NAME
        printf("\n1.Addition(+)\t2.Substraction(-)\t3.Multiplication(*)\n4.Division(/)\t5.Square(sqr)\t6.Cube(cube)\n7.Square root(sqrt)\t8.Cuberoot(cbrt)\n\nInput for trignometric function is to be in degree\n\n9.Sine(sine)\t10.Cosine(cos)\t11.Tan(tan)\n12.Sine inverse(arcsin)\t13.Cosine inverse(arccos)\n14.Tan inverse(arctan)\n\n15.Break or stop(x)\nPlease select an operator from above and type the function from bracket:");
        scanf("%s", opt);
        cyan();
        printf("Operator:%s\n", opt);   
        reset();

        //STOP THE CODE
        if (strcmp(opt,"stop")==0||strcmp(opt, "X")==0||strcmp(opt, "x")==0)
        {
            break;
        }

        //OPERATION DEFINING
        if (strcmp(opt,"addition")==0||strcmp(opt,"Addition")==0||strcmp(opt,"+")==0)
        {
            //FIRST NUMBER
            printf("\nEnter number X:");
            scanf("%f", &x);
        
            //SECOND NUMBER
            printf("\nEnter number Y:");
            scanf("%f", &y);
            z = x + y;
            
            green();
            printf("%0.5f + %0.5f = %0.5f\n\n",x ,y, z);
            reset();
        }

        else if (strcmp(opt,"substraction")==0||strcmp(opt,"Substraction")==0||strcmp(opt,"-")==0)
        {
            //FIRST NUMBER
            printf("\nEnter number X:");
            scanf("%f", &x);
        
            //SECOND NUMBER
            printf("\nEnter number Y:");
            scanf("%f", &y);

            z = x - y;
            green();
            printf ("%0.5f - %0.5f = %0.5f\n\n", x, y, z);
            reset();
        }

        else if (strcmp(opt,"multiplication")==0||strcmp(opt,"Multiplication")==0||strcmp(opt,"*")==0)
        {
            //FIRST NUMBER
            printf("\nEnter number X:");
            scanf("%f", &x);
        
            //SECOND NUMBER
            printf("\nEnter number Y:");
            scanf("%f", &y);

            z = x * y;
            green();
            printf("%0.5f * %0.5f = %0.5f\n\n", x, y, z);
            reset();
        }

        else if (strcmp(opt,"division")==0||strcmp(opt,"Division")==0||strcmp(opt,"/")==0)
        {
            //FIRST NUMBER
            printf("\nEnter number X:");
            scanf("%f", &x);
        
            //SECOND NUMBER
            printf("\nEnter number Y:");
            scanf("%f", &y);

            z = x / y;
            green();
            printf("%0.5f / %0.5f = %0.5f\n\n", x, y, z);
            reset();
        }

        else if (strcmp(opt,"sqr")==0||strcmp(opt,"Sqr")==0)
        { 
            printf("\nEnter number X:");
            scanf("%f", &x);

            z = x * x;
            green();
            printf("Square(%0.5f) = %0.5f\n\n", x, z);
            reset();
        }

        else if (strcmp(opt,"cube")==0||strcmp(opt,"Cube")==0)
        {
            printf("\nEnter number X:");
            scanf("%f", &x);
            z = x * x * x;
            green();
            printf("Cube(%0.5f) = %0.5f\n", x, z);
            reset();
        }

        else if (strcmp(opt,"sqrt")==0||strcmp(opt,"Sqrt")==0)
        {
            printf("\nEnter number X:");
            scanf("%f", &x);

            z = sqrt(x);
            green();
            printf("Squareroot(%0.5f) = %0.5f\n\n", x, z);
            reset();
        }

        else if (strcmp(opt,"cbrt")==0||strcmp(opt,"Cbrt")==0)
        {
            printf("\nEnter number X:");
            scanf("%f", &x);

            z = cbrt(x);
            green();
            printf("Cuberoot(%0.5f) = %0.5f\n\n", x, z);
            reset();
        }

        else if (strcmp(opt,"sin")==0||strcmp(opt,"Sin")==0)
        {
            printf("\nEnter number X:");
            scanf("%f", &x);
            
            x = deg_rad * x;
            z = sin(x);
            green();
            printf("Sine(%0.5f) = %0.5f\n\n",rad_deg * x, z);
            reset();
        }

        else if (strcmp(opt,"cos")==0||strcmp(opt,"Cos")==0)
        {
            printf("\nEnter number X:");
            scanf("%f", &x);
   
            x = deg_rad * x;
            z = cos(x);
            green(); 
            printf("Cosine(%0.5f) = %0.5f\n\n", rad_deg * x, z);
            reset();
        }

        else if (strcmp(opt,"tan")==0||strcmp(opt,"Tan")==0)
        { 
            printf("\nEnter number X:");
            scanf("%f", &x);     

            x = deg_rad * x;
            z = tan(x);
            green();
            printf("Tan(%0.5f) = %0.5f\n\n", rad_deg * x, z);
            reset();
        }

        else if (strcmp(opt,"arcsin")==0)
        {
            printf("\nEnter number X:");
            scanf("%f", &x);

            z = asin(x);
            green();
            printf("sin inverse(%0.5f) = %0.5f degree\n\n", x, rad_deg * z);
            reset();
        }
        
        else if (strcmp(opt,"arccos")==0)
        {
            printf("\nEnter number X:");
            scanf("%f", &x);

            z = acos(x);
            green();
            printf("cos inverse(%0.5f) = %0.5f degree\n\n", x, rad_deg * z);
            reset();
        }
        
        else if (strcmp(opt,"arctan")==0)
        {
            printf("\nEnter number X:");
            scanf("%f", &x);

            z = atan(x);
            green();
            printf("tan inverse(%0.5f) = %0.5f degree\n\n", x, rad_deg * z);
            reset();
        }
    }
    return 0;
}

//PROTOTYPES FOR COLOR CHANGING
void green(void)
{
    printf("\033[0;32m");
}

void reset (void)
{
    printf("\033[0m");
}

void cyan (void)
{
    printf("\033[0;36m");
}