import java.util.Scanner;

public class UnaryOperator {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Enter X:\n");
		int x = input.nextInt();
		
		System.out.println("+X:"+(+x));
		System.out.println("-X:"+(-x));
		System.out.println("X++:"+(x++));
		System.out.println("X--:"+(x--));
		System.out.println("++X:"+(++x));
		System.out.println("--X:"+(--x));
	
	}
}