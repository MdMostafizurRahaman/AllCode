import java.util.Scanner;


public class Operator {
public static void main(String[] args) {
	int num1, num2;
	System.out.print("Enter Two Numbers:\n");
	Scanner num11 = new Scanner(System.in);
	
	num1 = num11.nextInt();
	num2 = num11.nextInt();
	//same dataType er jonno akta scanner dite hbe
	
	System.out.println("Summation is:"+(num1+num2));
	System.out.println("Subtraction is:"+(num1-num2));
	System.out.println("Multiplication is:"+(num1*num2));
	if(num2 == 0)
	{
		System.out.println("Division is:Infinity");
	}
	else
	{
		System.out.println("Division is:"+((double)num1/num2));
	}
	if(num2 == 0) {
		System.out.println("Break");
	}
	else
	{
		System.out.println("Remonder is:"+(num1%num2));
	}
	
}
}
