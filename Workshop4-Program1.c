#include <stdio.h>
#include <math.h>
#define tab printf("\n\t\t\t\t")
int getUserChoice()
{   int choice;
    tab;printf("==========================MENU==============================");
	tab;printf("| 1. Process primes.                                       |");
	tab;printf("| 2. Print min, max digit in an integer.                   |");
	tab;printf("| 3. Exit the program.                                     |");
	tab;printf("============================================================");
	tab;printf("Enter Your Choice: ");
	scanf("%d%*c", &choice);
	return choice;
}

void primes() 
{    int n, i, s = 1;
     printf("\nEnter positive interger: ");
     scanf("%d", &n);
     int m = sqrt(n);
     for ( i = 2; i <= m; i++)
        if (n % i == 0)
		    s = 0;
     if (s == 1 && n == 1)
        printf("\nThe input number is not a prime!\n");
     else if (s == 0 || n <= 0) 
        printf("\nThe input number is not a prime!\n");
     else
        printf("\nThe input number is a prime!\n");
}

void digits()
{
	 int n;
	 printf("\nEnter integer: ");
	 scanf("%d", &n);
	 int max, min;
	 max = n % 10;
	 min = n % 10;
	 while( n > 0)
	 {
		int temp = n % 10;
		       n/=10;
		if ( max < temp)
		{
			 max = temp;
		}
		if ( min > temp)
		{
			 min = temp;
		}
     }
     printf("\nMinimum of digits: %d\n", min);
     printf("Maximum of digits: %d\n", max); 
}

int main()
{   int userChoice;
    do
    {   userChoice = getUserChoice();
        switch(userChoice)
		{   case 1: 
				system("cls");	
				primes();
		            break;
		    case 2:
				system("cls"); 
				digits();
			    break; 
		    default: tab;printf("Good Bye!");
	    }
	}
	while (userChoice>0 && userChoice<3);
	return 0;
}
