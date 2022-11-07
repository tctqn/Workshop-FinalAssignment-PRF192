#include <stdio.h>
#include <math.h>
#define tab printf("\n\t\t\t\t\t")

int getUserChoice()
{   int choice;
    tab;printf("=================MENU=================");
	tab;printf("| 1. Fibonacci sequence.             |");
	tab;printf("| 2. Check a date.                   |");
	tab;printf("| 3. Exit the program.               |");
	tab;printf("======================================\n");
	tab;printf("Enter Your Choice: ");
	scanf("%d%*c", &choice);
	return choice;
}

void fibonacci() {
	int n, i; 
	printf("\nEnter a positive integral number: "); 
	do {
	scanf("%d", &n); 
	}
    while (n < 1);
    printf("\nThe first %d Fibonacci numbers: ", n);
    int t1 = 1, t2 = 1, f = 1;
    for (i = 0; i < n; i++) {
            f  = t1 + t2;
            t1 = t2;
            t2 = f;
            printf("%lld ", f);
	}
}

int CheckDate(int d, int m, int y)
{	
    int maxd = 31;
    if ((d < 1) || (d > 31) || (m < 1) || (m > 12))
    return 0;
    if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
        maxd = 30;
    if ( m == 2) {
        if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
 	    maxd = 29;
        else
        maxd = 28;
	}
	return d <= maxd;	 
}

void date()
{
	int d, m, y, s;
	printf("\nEnter day, month, year: ");
	scanf("%d%d%d", &d, &m, &y);
	s = CheckDate(d,m,y);
	if ( s == 1)
	    printf("\nValid Date!");
	else
	    printf("\nInvalid Date!");
}

int main()
{   int userChoice;
    do
    {   userChoice = getUserChoice();
        switch(userChoice)
		{   case 1: fibonacci();
		            break;
		    case 2: date();
			        break; 
		    default: printf("\nGood Bye!");
	    }
	}
	while (userChoice>0 && userChoice<3);
	return 0;
}
