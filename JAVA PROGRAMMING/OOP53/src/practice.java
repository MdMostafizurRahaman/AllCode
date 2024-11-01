import java.util.Scanner;

public class practice {
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int[]number = new int[100]; 
		
		System.out.println("Enter 5 numbers");
		
		for(int i = 0; i < 5; i++)
			number[i] = input.nextInt();
		
		int sum = 0;
		
		for(int i = 0; i < 5; i++)
			sum = sum + number[i];
		
		System.out.println(sum);
	}

}
