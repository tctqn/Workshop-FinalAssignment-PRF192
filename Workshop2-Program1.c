//Program 1: Inputting an expression containing one of four operators +, -, *, /

#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a, b;
	char op;
	double res;
	printf("Enter an expression: ");
	scanf("%lf %c %lf", &a, &op, &b);
    		switch (op)
		{
			case '+':
				res = a+b;
				printf("%lf + %lf = %lf\n", a, b, res);
                		break;
            		case '-':
            			res = a-b;
                		printf("%lf - %lf = %lf\n", a, b, res);
                		break;
            		case '*':
            			res = a*b;
						printf("%lf * %lf = %lf\n", a, b, res);
                		break;
            		case '/':
                		if (b == 0)
                    			printf("Cannot devide 0\n");
                		else
                				res = a/b;
                    			printf("%lf / %lf = %lf\n", a, b, res);
                		break;
		}
	return 0;
}
