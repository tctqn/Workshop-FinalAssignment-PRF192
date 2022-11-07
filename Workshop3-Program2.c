//Program 2: Accept data of a day then print out whether they are valid or not

#include <stdio.h>

int CheckDay(int d, int m, int y)
{	
    int maxd = 31;
    if ((d < 1) || (d > 31) || (m < 1) || (m > 12))
    	return 0;
    if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
        maxd = 30;
    if (m == 2)
	{
        if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
 	    	maxd = 29;
        else
        	maxd = 28; 
	}
	return d <= maxd;
}

int main()
{
	int d, m, y;
	printf("Enter day, month, year: ");
	scanf("%d%d%d", &d, &m, &y);
	if (CheckDay(d,m,y))
	    printf("Valid date");
	else
	    printf("Invalid date");
return 0;
}
