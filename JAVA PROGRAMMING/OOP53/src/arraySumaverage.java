import java.util.Scanner;

public class arraySumaverage {
	public static void main(String[] args) {
	
	Scanner input = new Scanner(System.in);
	double[] number = new double[5];
	
	System.out.println("Enter 5 numbers:");
	
	
	//number[0] = input.nextDouble();
	//number[1] = input.nextDouble();
	//number[2] = input.nextDouble();
	//number[3] = input.nextDouble();
	//number[4] = input.nextDouble();
	
	for(int i = 0; i < 5; i++)
		number[i] = input.nextDouble();
	
	double sum = 0;
	
	for(int i = 0; i < 5; i++)
		sum = sum + number[i];
	
	System.out.println(sum);

		}
}		

