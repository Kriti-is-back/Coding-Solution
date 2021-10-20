/*
 *  Solve polynomial upto 8 degrees
 */

#include <stdio.h>
#include <math.h>

void GetPoly(double coeff[], int *pDegree);
void DisplayEquation(const int coeff[], int degree);
double EvalPoly(const double coeff[], int degree, double x);

int main(int argc, char *argv[])
{
  int degree;
  double x, coeff[8];
  
  printf("This program calculates the value of a user-specified polynomial up\n");
  printf("up to 8 degrees at various values of x.\n");
  
  GetPoly(coeff, &degree);
  
  printf("Enter value of x: "); scanf("%lf", &x);
  printf("Result is %.2f", EvalPoly(coeff, degree, x));
  
  return 0;
}

void GetPoly(double coeff[], int *pDegree)
{
  printf("Enter polynomial degree (0 - 8): "); scanf("%d", pDegree);
  
  while (!(*pDegree >= 0 && *pDegree <= 8))
  {
    printf("Polynomial must be between degree 0 and 8. Enter again: ");
    scanf("%d", pDegree);
  }
  
  switch (*pDegree)
  {
    case 0:
        printf("Enter coefficient of x^0: "); scanf("%lf", &coeff[0]);
        break;
    
    case 1:
        printf("Enter coefficient of x^0 term: "); scanf("%lf", &coeff[0]);
        printf("Enter coefficient of x term: "); scanf("%lf", &coeff[1]);
        break;
    
    case 2:
        printf("Enter coefficient of x^0 term: "); scanf("%lf", &coeff[0]);
        printf("Enter coefficient of x term: "); scanf("%lf", &coeff[1]);
        printf("Enter coefficient of x^2 term: "); scanf("%lf", &coeff[2]);
        break;
    
    case 3:
        printf("Enter coefficient of x^0 term: "); scanf("%lf", &coeff[0]);
        printf("Enter coefficient of x term: "); scanf("%lf", &coeff[1]);
        printf("Enter coefficient of x^2 term: "); scanf("%lf", &coeff[2]);
        printf("Enter coefficient of x^3 term: "); scanf("%lf", &coeff[3]);
        break;
    
    case 4:
        printf("Enter coefficient of x^0 term: "); scanf("%lf", &coeff[0]);
        printf("Enter coefficient of x term: "); scanf("%lf", &coeff[1]);
        printf("Enter coefficient of x^2 term: "); scanf("%lf", &coeff[2]);
        printf("Enter coefficient of x^3 term: "); scanf("%lf", &coeff[3]);
        printf("Enter coefficient of x^4 term: "); scanf("%lf", &coeff[4]);
        break;
    
    case 5:
        printf("Enter coefficient of x^0 term: "); scanf("%lf", &coeff[0]);
        printf("Enter coefficient of x term: "); scanf("%lf", &coeff[1]);
        printf("Enter coefficient of x^2 term: "); scanf("%lf", &coeff[2]);
        printf("Enter coefficient of x^3 term: "); scanf("%lf", &coeff[3]);
        printf("Enter coefficient of x^4 term: "); scanf("%lf", &coeff[4]);
        printf("Enter coefficient of x^5 term: "); scanf("%lf", &coeff[5]);
        break;
    
    case 6:
        printf("Enter coefficient of x^0 term: "); scanf("%lf", &coeff[0]);
        printf("Enter coefficient of x term: "); scanf("%lf", &coeff[1]);
        printf("Enter coefficient of x^2 term: "); scanf("%lf", &coeff[2]);
        printf("Enter coefficient of x^3 term: "); scanf("%lf", &coeff[3]);
        printf("Enter coefficient of x^4 term: "); scanf("%lf", &coeff[4]);
        printf("Enter coefficient of x^5 term: "); scanf("%lf", &coeff[5]);
        printf("Enter coefficient of x^6 term: "); scanf("%lf", &coeff[6]);
        break;
    
    case 7:
        printf("Enter coefficient of x^0 term: "); scanf("%lf", &coeff[0]);
        printf("Enter coefficient of x term: "); scanf("%lf", &coeff[1]);
        printf("Enter coefficient of x^2 term: "); scanf("%lf", &coeff[2]);
        printf("Enter coefficient of x^3 term: "); scanf("%lf", &coeff[3]);
        printf("Enter coefficient of x^4 term: "); scanf("%lf", &coeff[4]);
        printf("Enter coefficient of x^5 term: "); scanf("%lf", &coeff[5]);
        printf("Enter coefficient of x^6 term: "); scanf("%lf", &coeff[6]);
        printf("Enter coefficient of x^7 term: "); scanf("%lf", &coeff[7]);
        break;
    
    case 8:
        printf("Enter coefficient of x^0 term: "); scanf("%lf", &coeff[0]);
        printf("Enter coefficient of x term: "); scanf("%lf", &coeff[1]);
        printf("Enter coefficient of x^2 term: "); scanf("%lf", &coeff[2]);
        printf("Enter coefficient of x^3 term: "); scanf("%lf", &coeff[3]);
        printf("Enter coefficient of x^4 term: "); scanf("%lf", &coeff[4]);
        printf("Enter coefficient of x^5 term: "); scanf("%lf", &coeff[5]);
        printf("Enter coefficient of x^6 term: "); scanf("%lf", &coeff[6]);
        printf("Enter coefficient of x^7 term: "); scanf("%lf", &coeff[7]);
        printf("Enter coefficient of x^8 term: "); scanf("%lf", &coeff[8]);
        break;
   }
}

double EvalPoly(const double coeff[], int degree, double x)
{
  switch (degree)
  {
    case 0:
      return coeff[0];
    
    case 1:
      return coeff[0] + x * coeff[1];
    
    case 2:
      return coeff[0] + x * coeff[1] + coeff[2] * pow(x, 2);
    
    case 3:
      return coeff[0] + x * coeff[1] + coeff[2] * pow(x, 2) + coeff[3] * pow(x, 3);
    
    case 4:
      return coeff[0] + x * coeff[1] + coeff[2] * pow(x, 2) + coeff[3] * pow(x, 3) + coeff[4] * pow(x, 4);
    
    case 5:
      return coeff[0] + x * coeff[1] + coeff[2] * pow(x, 2) + coeff[3] * pow(x, 3) + coeff[4] * pow(x, 4)
          + coeff[5] * pow(x, 5);
  
    case 6:
      return coeff[0] + x * coeff[1] + coeff[2] * pow(x, 2) + coeff[3] * pow(x, 3) + coeff[4] * pow(x, 4)
          + coeff[5] * pow(x, 5) + coeff[6] * pow(x, 6);
    
    case 7:
      return coeff[0] + x * coeff[1] + coeff[2] * pow(x, 2) + coeff[3] * pow(x, 3) + coeff[4] * pow(x, 4)
          + coeff[5] * pow(x, 5) + coeff[6] * pow(x, 6) + coeff[7] * pow(x, 7);
    
    case 8:
      return coeff[0] + x * coeff[1] + coeff[2] * pow(x, 2) + coeff[3] * pow(x, 3) + coeff[4] * pow(x, 4)
          + coeff[5] * pow(x, 5) + coeff[6] * pow(x, 6) + coeff[7] * pow(x, 7) + coeff[8] * pow(x, 8);

    default:
      return 0.0;
  }
}

/*  Program ends here */
