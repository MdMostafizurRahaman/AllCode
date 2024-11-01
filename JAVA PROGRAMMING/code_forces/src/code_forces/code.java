package code_forces;

import java.util.Scanner;

public class code {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x, y, i, j, count = 0, sum = 0;
		x = sc.nextInt();
		y = sc.nextInt();
		
		int[] a = new int[y];
		
		for(j = 0; j < x; j++) {
			for(i = 0; i < y; i++) {
				a[i] = sc.nextInt();
				if(a[i] % 2 == 0)
					count++;
				else
					sum++;
				
			}
		}
		if(sum % 2 == 0)
			System.out.println("0");
		else
			System.out.println("1");
				
	}
}
