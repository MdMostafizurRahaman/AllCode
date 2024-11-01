package SpiltWord;

import java.util.Scanner;

public class CountWord {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.print("Enter String:");
		//String s = new String("I     Lo     ve        B angla  desh\n");
		String s = input.nextLine();
		String []a = s.split("\\s+");
		for(int i = 0; i < a.length; i++)
		{
			System.out.print(a[i]);	
			
		}
		System.out.println("Total Word:"+a.length);
		
	}
}
