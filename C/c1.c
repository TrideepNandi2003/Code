#include <stdio.h>
#include <math.h>
#include <string.h>
#define deg_rad 0.0174532925
#define rad_deg 57.2957795

int alg ()
        { 
          //First Number
            printf("\nEnter number X:");
            scanf("%f", &x);
            
            //Second Number
            printf("\nEnter number Y:");
            scanf("%f", &y);
            
            if (strcmp(opt,"addition")==0||strcmp(opt,"Addition")==0||strcmp(opt,"+")==0)
            {
                z = x + y;
                printf("%0.5f + %0.5f = %0.5f\n\n",x ,y, z);
            }

            else if (strcmp(opt,"substraction")==0||strcmp(opt,"Substraction")==0||strcmp(opt,"-")==0)
            {
                z = x - y;
                printf ("%0.5f - %0.5f = %0.5f\n\n", x, y, z);
            }

            else if (strcmp(opt,"multiplication")==0||strcmp(opt,"Multiplication")==0||strcmp(opt,"*")==0)
            {
                z = x * y;
                printf("%0.5f * %0.5f = %0.5f\n\n", x, y, z);
            }

            else if (strcmp(opt,"division")==0||strcmp(opt,"Division")==0||strcmp(opt,"/")==0)
            {
                z = x / y;
                printf("%0.5f / %0.5f = %0.5f\n\n", x, y, z);
            }
            return z;
            
}

int trig()
        {
            // //First Number
            // printf("\nEnter number X:");
            // scanf("%f", &x);
            if (strcmp(opt,"sqr")==0||strcmp(opt,"Sqr")==0)
            {
                z = x * x;
                printf("Square(%0.5f) = %0.5f\n\n", x, z);
            }

            else if (strcmp(opt,"cube")==0||strcmp(opt,"Cube")==0)
            {
                z = x * x * x;
                printf("Cube(%0.5f) = %0.5f\n", x, z);
            }

            else if (strcmp(opt,"sqrt")==0||strcmp(opt,"Sqrt")==0)
            {
                z = sqrt(x);
                printf("Squareroot(%0.5f) = %0.5f\n\n", x, z);
            }

            else if (strcmp(opt,"cbrt")==0||strcmp(opt,"Cbrt")==0)
            {
                z = cbrt(x);
                printf("Cuberoot(%0.5f) = %0.5f\n\n", x, z);
            }

            else if (strcmp(opt,"sin")==0||strcmp(opt,"Sin")==0)
            {
                x = deg_rad * x;
                z = sin(x);
                printf("Sine(%0.5f) = %0.5f\n\n",rad_deg * x, z);
            }

            else if (strcmp(opt,"cos")==0||strcmp(opt,"Cos")==0)
            {
                x = deg_rad * x;
                z = cos(x);
                printf("Cosine(%0.5f) = %0.5f\n\n", x, z);
            }

            else if (strcmp(opt,"tan")==0||strcmp(opt,"Tan")==0)
            {       
                x = deg_rad * x;
                z = tan(x);
                printf("Tan(%0.5f) = %0.5f\n\n", x, z);
            }

            else if (strcmp(opt,"arcsin")==0)
            {
                z = asin(x);
                printf("sin inverse(%0.5f) = %0.5f degree\n\n", x, rad_deg * z);
            }
            
            else if (strcmp(opt,"arccos")==0)
            {
                z = acos(x);
                printf("cos inverse(%0.5f) = %0.5f degree\n\n", x, rad_deg * z);
            }
            
            else if (strcmp(opt,"arctan")==0)
            {
                z = atan(x);
                printf("tan inverse(%0.5f) = %0.5f degree\n\n", x, rad_deg * z);
            }
            return z;
        }    


int main(void)
{   
        
        char opt[100];
        float  x, y, z;
        //Give the Operation
        printf("\n1.Addition(+)\t 2.Substraction(-)\t3.Multiplication(*)\n4.Division(/)\t5.Square(sqr)\t6.Cube(cube)\n7.Square(sqr)\t8.Cuberoot(cbrt)\t9.Sine(sine)\n10.Cosine(cos)\t11.Tan(tan)\t12.Sine inverse(arcsine)\n13.Cosine inverse(arccos)\t14.Tan inverse(arctan)\nPlease select an operator from above and type the function from bracket:");
        scanf("%s", opt);
        printf("\nOperator:%s\n", opt); 

         printf("\nEnter number X:");
            scanf("%f", &x);
            
        //Second Number
        printf("\nEnter number Y:");
        scanf("%f", &y);

        printf("\n%f", z);
        
}        

