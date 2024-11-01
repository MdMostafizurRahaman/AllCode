
import java.util.Scanner;

public class array {
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int[] number = new int[100];
		int sum = 0, max = number[0], min = number[0];
		
		System.out.println("Enter 5 numbers:");
		
		for(int i = 0; i < 5; i++)
			number[i] = input.nextInt();
		
		for(int i = 0; i < 5; i++)
			sum = sum + number[i];
			System.out.println(sum);
			
		for(int i = 1; i < 5; i++) {
			if(max < number[i]) {
				max = number[i];
			}
			if(min > number[i]) {
				min = number[i];
			}
		}
		System.out.println(max);
		System.out.println(min);
		
	}
}
