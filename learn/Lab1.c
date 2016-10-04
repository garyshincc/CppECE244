#include <stdio.h>
#include <stdlib.h>

#define  MYNAME "Chicken Nuggets"

int returnYourAge(int birthYear,int currentYear);

int main()
{

  printf("hello world %s", "Gary!\n");
  int currentYear = 2016;
  int birthYear = 1997;
  int age = currentYear - birthYear;

  printf("Gary is %d years old\n", age);

  char name[10] = "Gary Shin";

  printf("my name is: %s\n", name);
  printf("my real name is: %s\n", MYNAME);

  int myAge = returnYourAge(1000,2000);
  printf("And, My age is: %d\n", myAge);

  double avgProfit;
  int priceOfPumpkin = 10;
  int sales = 59;
  int daysWorked = 7;

  avgProfit = ((double)priceOfPumpkin * (double)sales) / (double) daysWorked;
  printf("Average Profit is: %.2lf\n", avgProfit);


  return 0;
  // on terminal, make Lab1 then ./Lab1
}

int returnYourAge(int birthYear, int currentYear)
{
	int age = currentYear - birthYear;
	if(age > 100)
	{
		printf("Damn, you're old!\n");
	}
	else if (age > 0)
	{
		printf("You're in normal age range\n");
	}
	else if (age < 0)
	{
		printf("Im pretty sure you cant be negative age...\n");
		return 0;
	}
	return age;
}