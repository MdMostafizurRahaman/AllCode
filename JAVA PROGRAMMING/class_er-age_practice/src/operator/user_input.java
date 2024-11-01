package operator;

import java.util.Scanner;
public class user_input {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		
		int x;
		System.out.println("Input a value");
		x=sc.nextInt();
		
		System.out.println("X="+x);
		
		
		sc.close();
	}
}
