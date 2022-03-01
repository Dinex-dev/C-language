# List of practicals


## 1. 2d_array.c


``` c 
// save and print a 2d array
#include <stdio.h>
int main(){
    int rows , cols;
    printf("Enter the number of rows : \n");
    scanf("%d",&rows);
    printf("Enter the number of columns : \n");
    scanf("%d",&cols);
    int a[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}

```


## 2. adding_2_arrays.c


``` c 
// write a programme to add 2 arrays of integers
#include <stdio.h>
int add();
int main()
{
	int a[5],b[5],c[5],i;
	printf("Enter the elements of array a\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the elements of array b\n");
	for(i=0;i<5;i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%d",&b[i]);
	}
	add(a,b,c);
}
int add(int a[],int b[],int c[])
{
	int i;
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("The sum of the two arrays is\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",c[i]);
	}
	return 0;
}

```


## 3. add numbers .c


``` c 
#include <stdio.h>
void add();
int main() {
	int n;
	printf("how many numbers do you want to add : ");
	scanf("%d",&n);
	add(n);
	return 0;
}

void add(int n)
{
	int sol=0;
	for (int i = 1; i <= n; ++i)
	{
		int num=0;
		printf("Enter number %d : ",i);
		scanf("%d",&num);
		sol+=num;

	}
	printf("%d",sol);
}

```


## 4. armstrong_number.c


``` c 
#include <stdio.h> 
int main()
{
	int a=1,slice=0,b,count=0,j,power=1,arm;
	printf("Programme to find armstrong number till n(given number) \nenter n : ");
	scanf("%d",&a);

	for (int i = 1; i < a; ++i)
	{
		arm=0;
		count=0;
		b=i;
		
		while(b!=0)
		{
			b/=10;
			count++;
		}

		j=i;
		while(j!=0)
		{
		slice=j%10;
		j/=10;
		power=1;
		for (int k = 1; k <= count; ++k)
		{
			power*=slice;
		}
		arm+=power;
		}
		
		if (arm==i)
		{
			printf("%d is an armstrong number\n",arm);
		}


	}
	return 0;
}

```


## 5. average.c


``` c 
#include <stdio.h>
void avg();
int main() {
	int n;
	printf("how many numbers do you want to take avg of : ");
	scanf("%d",&n);
	avg(n);
	return 0;
}

void avg(int n)
{
	int sol=0;
	for (int i = 1; i <= n; ++i)
	{
		int num=0;
		printf("Enter number %d : ",i);
		scanf("%d",&num);
		sol+=num;

	}
	printf("%d",sol/n);
}

```


## 6. average of student's marks.c


``` c 
#include <stdio.h>
int main()
{
	int students; 
	printf("this programme finds average of student's total marks\n");
	printf("Enter the number of students : ");
	scanf("%d",&students);
	float avg=0, marks[students];
	for (int i=0;i<students;i++){
		printf("Enter marks of roll no %d : ",i+1);
		scanf("%f",&marks[i]);
		avg+=marks[i];
	}
	printf("Average of marks of %d students is : %f ",students,avg/students);
	return 0;
}

```


## 7. bubblesort.c


``` c 
#include <stdio.h>
int array(int len,int arr[]){
	for (int i=0;i<len;i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\n");
	return 0;
}
int main()
{
	int len,spam;
	printf("Enter length of the array : ");
	scanf("%d",&len);
	int arr[len];
	for (int i=0;i<len;i++){
		printf("Enter %d value : ",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<len-1;i++)
	{	
		for (int j=0;j<len-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				array(len,arr);
				spam=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=spam;
			}
		}
		printf("\n");
	}
	printf("sorted array : ");
	array(len,arr);
	return 0;
}

```


## 8. calculator.c


``` c 
// programme to take input from user and perform basic operations
// programme to take input from user and perform basic operations
#include <stdio.h>
#include <stdlib.h>
int getno();
int main()
{
    float a,b;
    int num=0,sum=0,p=0;
    char c;
    while (c!='e')
    {
    printf("\n------------------------------------------------------------------------------------\n");
    printf("\nEnter the operator \n(+) for addition \n(-) for substraction\n(*) for Multiplication\n(/) for division\n(a) for average\n(p) for percentage\npress e to exit : \n");
    scanf(" %c",&c);
    printf("\n------------------------------------------------------------------------------------\n");
    if (c=='e')
    exit(0);
    switch (c)
    {
    case '+':
        getno(&a,&b);
        printf("%f + %f = %f",a,b,a+b);
        break;
    case '-':
        getno(&a,&b);
        printf("%f - %f = %f",a,b,a-b);
        break;
    case '*':
        getno(&a,&b);
        printf("%f * %f = %f",a,b,a*b);
        break;
    case '/':
        getno(&a,&b);
        printf("%f / %f = %f",a,b,a/b);
        break;
    case 'a':
        printf("How many numbers do you want to take average of : " );
        scanf("%d",&num);
        for (int i;i<num;i++){
            printf("enter %d number :",i+1);
            scanf("%d",&p);
            sum+=p;
        }
        printf("Average of the given numbers is : %d",sum/num);
        break;
    case 'p':
        printf("How much percentage : ");
        scanf("%f",&a);
        printf("Percentage of which number : ");
        scanf("%f",&b);
        printf("%f %% of %f is : %f",a,b,a/100*b);
        break;
    default:
        printf("Invalid operator");
        break;
    }
    }
    return 0;
}
int getno(int *p,int *q){
    printf("Enter the first number : \n");
    scanf("%f",p);
    printf("Enter the second number : \n");
    scanf("%f",q);
}
```


## 9. Celsius to faranheit .c


``` c 
#include <stdio.h>
int main()
{
	float c,f;
	printf("Celsius to faranheit converter\n");
	printf("enter the temperature in Celsius:");
	scanf("%f",&c);
	f=(c*1.8)+32;
	printf("temperature in Fahrenheit is %f",f);
}


```


## 10. chess.c


``` c 
#include <stdio.h>
int main()
{
	long int a,sol=0;
	printf("This is a programme to count number of squares in chess board\n");
	printf("Enter the dimention of chess board : ");
	scanf("%ld",&a);
	for (int i = 1; i <=a; ++i)
	{
		sol+=i*i;
	}
	printf("There are %ld squares in an %ld by %ld board\n",sol,a,a);
	return 0;
}

```


## 11. circle.c


``` c 
#include <stdio.h>
#define pi 3.14
int area();
int pm();
int main()
{
	int r;
	printf("enter radius : ");
	scanf("%d",&r);
	printf("area of a circle with radius %d is %d\n",r,area(r));
	printf("perimeter of a circle with radius %d is %d",r,pm(r));
	return 0;
}
int pm(int a){
	return 2*pi*a;
}
int area(int a)
{
	return pi*a*a;
}

```


## 12. desc.c


``` c 
#include <stdio.h>
int main()
{
	int a;
	printf("This programme prints a descending series\nEnter a number : ");
	scanf("%d",&a);
	for (int i = a; i >= 1; --i)
	{
		printf("%d\n",i);
	}
	return 0;
}

```


## 13. diamond.c


``` c 
#include <stdio.h>

int main()
{
	printf("   *\n  ***\n *****\n*******\n");
	int a;
	printf("This programme prints a diamond with the width of given number\n");
	printf("Enter a number : ");
	scanf("%d",&a);	
	for (int i = 1; i < a; i+=2)
	{
		
		for (int k=0;k<=(a-i)/2;++k)
		{
			printf(" ");
		}
		for (int j = 0; j < i; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = a; i >=1; i-=2)
	{
		for (int k=0; k < (a-i)/2 ; ++k)
		{
			printf(" ");
		}
		for (int j=1;j<=i;++j){
			printf("*");
		}
		printf("\n");
	}

	return 0;
	
}

```


## 14. factorial.c


``` c 
#include <stdio.h>
int fact();
int main()
{
	long int n;
	printf("This programme prints factorial of a given number\nEnter a number : ");
	scanf("%ld",&n);
	printf("Factorial of %d is %ld",n,fact(n));
	return 0;

}
int fact(long int n){
	long int fact=1;
	for (long int i = 1; i <= n; ++i)
	{
		fact*=i;
	}
	return fact;
}

```


## 15. factorial_using_reccursive_functions.c


``` c 
#include<stdio.h>
long int fact(int n);
int main() {
    int n;
    printf("This programme uses reccursive functions to find factorial of a given integer\nEnter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, fact(n));
    return 0;
}

long int fact(int n) {
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}


```


## 16. fds.c


``` c 
#include <stdio.h>
int main(){
    printf("hello")
}


```


## 17. fibnocii_series.c


``` c 
// print fibnocii series
#include <stdio.h>
int main()
{
    int n,a,b,c;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("Fibonacci series: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}

```


## 18. greates_of_3_using_if.c


``` c 
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("This number finds greatest of three numbers using if/else conditions\n\n");
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);

	if (a>b&&a>c)
	{
		printf("%d is the greatest ",a);
	}
	else if (b>a&&b>c)
	{
		printf("%d is the greatest ",b);
	}
	else 
	{
		printf("%d if the greatest ",c);
	}
}

```


## 19. greatest_of_3.c


``` c 
#include <stdio.h>
int main()
{
	int a,b,c,gre;
	printf("Enter A ");
	scanf("%d",&a);
	printf("Enter B ");
	scanf("%d",&b);
	printf("Enter C ");
	scanf("%d",&c);
	gre=a>b?(a>c?a:c):(b>c?b:c);
	printf("\n %d",gre);
	
}

```


## 20. greatest_of_3_using_.c


``` c 
#include<stdio.h>
int main(){
	int a,b,c,big;
	printf("This programme gives gives greates of three numbers\n\n");
	printf("Enter first number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	printf("Enter third number : ");
	scanf("%d",&c);
	big=(a>b&&a>c?a:(b>c?b:c));
	printf("\nThe biggest number is:%d",big);
	return 0;
}


```


## 21. greatest_of_4_using_if.c


``` c 
#include <stdio.h>
void main()
{
	int a,b,c,d;
	printf("This programme finds greatest of 4 numbers using if/else conditions\n\n");
	printf("Enter A ");
	scanf("%d",&a);
	printf("Enter B ");
	scanf("%d",&b);
	printf("Enter C ");
	scanf("%d",&c);
	printf("Enter D ");
	scanf("%d",&d);
	
	if (a>b&&a>c&&a>d)
	{
		printf("%d is greatest",a);
	}
	else {
			if (b>a&&b>c&&b>d)
			{
				printf("%d is greatest ",b);
			}
			else {
				
				if (c>b&&c>a&&c>d)
				
				{
					printf("%d is greatest",c);
				}
				else
				{
					printf("%d is greatest",d);
				}
			}
		}

	}

```


## 22. guess_the_number.c


``` c 
// guess the number game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random_number = rand() % 10 + 1;
    int guess_number;
    int guess_count = 0;
    printf("Guess the number between 1 and 10\n");
    while(1)
    {
        printf("Enter your guess number : ");
        scanf("%d",&guess_number);
        if(guess_number == random_number)
        {
            printf("You guessed the number correctly\n");
            break;
        }
        else
        {
            if(guess_number > random_number)
            {
                printf("Your guess number is greater than the random number\n");
            }
            else
            {
                printf("Your guess number is less than the random number\n");
            }
            guess_count++;
        }
    }
    printf("You guessed the number in %d guesses\n",guess_count+1);

    return 0;
}


```


## 23. largest_and_smallest_in_a_array.c


``` c 
#include <stdio.h>

int main()
{
	int len,i=0,large,small;
	printf("Enter the length of array : ");
	scanf("%d",&len);
	int arr[len];
	for (int j = 0; j < len; ++j)
	{
		printf("Enter %d value :",j+1);
		scanf("%d",&arr[j]);
	}
	large=arr[0];
	small=arr[0];
	for (i = 0; i < len; ++i)
	{
		if (large<arr[i])
		{
			large=arr[i];
		}
	}
	for (i = 0; i < len; ++i)
	{
		if (small>arr[i])
		{
			small=arr[i];
		}
	}
	printf("%d is the largest number in the array\n",large);
	printf("%d is the smallest numer in the array",small);
	return 0;
}

```


## 24. leap_year_finder.c


``` c 
#include <stdio.h>
void check();
int main()
{
	int year;
	printf("Enter a Year : ");
	scanf("%d",&year);
	check(year);
	return 0;
}


void check(int year){
	if (year%4==0){
		if (year%100==0&&year%400==0){
			printf("%d a leap year",year);
		}
		else if (year%100!=0){
			printf("%d a leap year",year);
		}
	}
	else{
		printf("%d not a leap year",year);
	}
}

```


## 25. maxmacro.c


``` c 
#include <stdio.h>
#define max(x,y,z) (x>y?(x>z?x:z):(y>z?y:z))
int main()
{
	int a,b,c;
	printf("Enter 3 numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",max(a,b,c));
	
}

```


## 26. palindrome.c


``` c 
#include <stdio.h>
int main()
{
	int a,rev=0,slice,nice;
	printf("This programme checks if a number is a palindrome \n");
	printf("Enter a number : ");
	scanf("%d",&a);
	nice=a;
	while(a!=0){
		slice=a%10;
		rev+=slice;
		rev*=10;
		a/=10;
	}
	if (rev==nice*10)
	{
		printf("This number is a palindrome");
	}
	else{
		printf("This number is not a palindrome");
	}
	return 0;
}

```


## 27. pattern.c


``` c 
#include <stdio.h>
int main()
{
	int a,num=1;
	printf("This programme prints pattern like : \n1	\n2	3	\n4	5	6\n");
	printf("Enter a number of rows : ");
	scanf("%d",&a);
	for (int i = 1; i <= a; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			printf("%d\t",num);
			num++;
		}
		printf("\n");
	}
	return 0;
}

```


## 28. percentage.c


``` c 
#include <stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,sub6,total,percent;
	printf("Enter your marks in Subject 1 :");
	scanf("%d",&sub1);
	printf("Enter your marks in Subject 2 :");
	scanf("%d",&sub2);
	printf("Enter your marks in Subject 3 :");
	scanf("%d",&sub3);
	printf("Enter your marks in Subject 4 :");
	scanf("%d",&sub4);
	printf("Enter your marks in Subject 5 :");
	scanf("%d",&sub5);
	printf("Enter your marks in Subject 6 :");
	scanf("%d",&sub6);
	total=sub1+sub2+sub3+sub4+sub5+sub6;
	printf("your total marks are; %d\n",total);
	printf("Your Total Percentage is: %d",total/6);
}

```


## 29. power.c


``` c 
#include <stdio.h>
int main()
{
	int x,y,sol=1;
	printf("Enter the base number : ");
	scanf("%d",&x);
	printf("Enter the power : ");
	scanf("%d",&y);
	for (int i = 1; i <= y; ++i)
	{
		sol*=x;
	}
	printf("%d raise to power %d is %d",x,y,sol);
	return 0;
} 

```


## 30. prime.c


``` c 
#include<stdio.h>
int main(){
	int n,i,prime=0;
	printf("Enter the number to check prime : ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				printf("Number is not prime");	
				prime=1;
				break;
			}
		}
	if(prime==0){
		printf("Number is prime");
	}
	return 0;
}

```


## 31. print_table_of_a_number.c


``` c 
#include<stdio.h>
int main()
{
    int num, i, tab;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("\nTable of %d is:\n", num);
    for(i=1; i<=10; i++)
    {
        tab = num*i;
        printf("%d * %d = %2d\n", num, i, tab);
    }
}

```


## 32. pyramid.c


``` c 
#include <stdio.h>
int main()
{
	int a;
	printf("This programme prints a pyramid of given width\n");
	printf("Enter a number : ");
	scanf("%d",&a);
	for (int i = 1; i <= a; ++i)
	{
		for (int k = 0; k < a-i/2; ++k)
		{
			printf(" ");
		}
		for (int j = 0; j < i; ++j)
		{
			
			
			printf("*");
		}


		printf("\n");
		
	}
	return 0;
}

```


## 33. reverse_of_an_array.c


``` c 
#include <stdio.h>
int main()
{
	int len;
	printf("Enter length of the array : ");
	scanf("%d",&len);
	int arr[len],arr2[len];
	for (int i=0;i<len;i++){
		printf("Enter %d value : ",i+1);
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < len/2; ++i)
	{
		arr[i]=arr[i]+arr[len-i-1];
		arr[len-i-1]=arr[i]-arr[len-i-1];
		arr[i]=arr[i]-arr[len-i-1];
	}
	for (int i=0;i<len;i++)
	{
		printf("%d, ",arr[i]);
	}
}

```


## 34. reverse_of_a_number.c


``` c 
#include <stdio.h>
int main()
{
	int a,rev,len,slice,spare,nice,count;
	spare=0;
	count=0;
	printf("This programme prints the reverse of a number \n");
	printf("Enter a number : ");
	scanf("%d",&a);
	nice=a;
	while(a!=0){
		slice=a%10;
		rev+=slice;
		rev*=10;
		a/=10;
	}
	printf("%d",rev/10);
}

```


## 35. search_in_array.c


``` c 
#include <stdio.h>
#define size 10
int main()
{
	int num,i=0,found=0,len;
	printf("This programme finds a number in the given array\n");
	printf("Enter the length of the array : ");
	scanf("%d",&len);
	int arr[len];
	for (int j = 0; j < len; ++j)
	{
		printf("Enter %d value :",j+1);
		scanf("%d",&arr[j]);
	}
	printf("which number do you want to find : ");
	scanf("%d",&num);
	for (i=0;i<len;i++){
		if(arr[i]==num){
			len=-10;
			break;
		}
	}
	if (len==-10)
	{
		printf("found it at %d place",i+1);
	}
	else{
		printf("not found");
	}
	return 0;
}

```


## 36. simple_intrest.c


``` c 
#include <stdio.h>
int main()
{
    int p, t, r, i;
    printf("Enter Principle (amount): ");
    scanf("%d", &p);
    printf("Enter Time: ");
    scanf("%d", &t);
    printf("Enter rate: ");
    scanf("%d", &r);
    i = (p * t * r)/100;
    printf("Simple Interest = %d", i);
    return 0;
}


```


## 37. sum_and_reverse_of_digits.c


``` c 
#include <stdio.h>
int main()
{
	int a , sum, rev;
	rev=0;
	sum=0;
	printf("This number prints the reverse and sum of digits in a given number\n");
	printf("Input a number : ");
	scanf("%d",&a);	
	while(a!=0){
		sum+=a%10;
		rev=(rev+(a%10))*10;
		a/=10;
	}
	printf("sum of the digits of number is : %d",sum);
	printf("\nnumber in reverse is : %d",rev/10);
}

```


## 38. swap_without_third_variable.c


``` c 
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("swaped values are : \n A=%d \n B=%d \n",a,b);
}

```


## 39. swap_with_third_variable.c


``` c 
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("This programme swaps two numbers with a third variable\n");
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("swaped values are : %d %d \n",a,b);
	return 0;
}


```
## 40. calculator_using_pointers.c
``` c
// write a programm to add, substract, multiply and divide two numbers using pointers
#include <stdio.h>
int main()
{
    int a, b;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Enter two numbers: ");
    scanf("%d %d", pa, pb);
    printf("\nAddition: %d", *pa + *pb);
    printf("\nSubstraction: %d", *pa - *pb);
    printf("\nMultiplication: %d", *pa * *pb);
    printf("\nDivision: %d", *pa / *pb);
    return 0;
}
```
## 41. stopwatch.c
``` c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define clear() printf("\033[H\033[J")
int main()
{
	clear();
    int h=0,m=0,s=0;
	while(1){
		s++;
		if (s>59)
		{
			m++;
            s=0;
		}
		if (m>59)
		{
			h++;
            m=0;
		}
		printf("%02d:%02d:%02d",h,m,s);
        usleep(1000000);
        printf("\n");
        clear();
	}
    return 0;
}
```

