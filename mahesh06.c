//blazer id: mahesh06
// readme.txt has instructions to execute.(seperately attached) in canavas

#include<stdio.h>
#include<math.h>

// passed number is a prime number or not
// uses Sieve of Eratosthenes algorithm
// returns 1 if prime
// returns 0 if non-prime
int is_prime(int n)
{
	int i = 0;
	if (n < 2) return 0;
	if (n % 2 == 0)return n==2;
	for (i = 3; i <= sqrt(n); i += 2)
	{
		if (n % i == 0)return 0;
	}
	return 1;
}

int main()
{
	int number = 0;
	printf("Enter number to check if prime or not.\n");
	scanf("%d", &number);
	if (is_prime(number))
	{
		printf("[%d] is a prime number.", number);
	}
	else
	{
		printf("[%d] is not a prime number", number);
	}
	return 0;
}
