import java.util.Scanner;

public class AssignmentOperator {
	public static void main(String[] args) {
		Scanner integer = new Scanner(System.in);
		System.out.println("Enter two Number:");
		int a, b;
		
		
		a = integer.nextInt();
		b = integer.nextInt();
		
		a += b;
		System.out.println("a += b = "+a);
		a -= b;
		System.out.println("a -= b = "+a);
		a *= b;
		System.out.println("a *= b = "+a);
		a /= b;
		System.out.println("a /= b = "+a);
		a %= b;
		System.out.println("a %= b = "+a);
		
	}
}
