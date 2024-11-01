import java.util.Scanner;

public class ArraySum {
public static void main(String[] args) {
	Scanner arr = new Scanner(System.in);
	int n;
	double sum = 0;
	n = arr.nextInt();
	int []a = new int[n];
	
	a[0] = 1;
	a[1] = 1;
	
	for(int i = 1; i <= n-2; i++)
	{
		a[i+1] = a[i] + a[i-1];
	}
	
	for(int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	
	System.out.println(sum);
}
}

//Fibonacci sequence er sum ber krte hbe
//eclipse e run kre nah 
//online compiler e run kre
//codeforces 5 num e wrong khai
//etai c++ e krle accept
/*
#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;
    int a[n];
    a[0] = 1;
    a[1] = 1;

	for(int i = 1; i <= n-2; i++)
	{
		a[i+1] = a[i] + a[i-1];
	}
	
	for(int i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	
	cout << sum;
}

 */
