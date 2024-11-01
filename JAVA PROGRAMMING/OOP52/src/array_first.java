
public class array_first {
	public static void main(String[] args) {
		int[] number = new int[100];
		String[] a = new String[1000];
		
		number[0] = 1;
		number[1] = 2;
		
		int i = number.length;
		int sum = 0;
		int j;
		
		System.out.println(number[0]);
		System.out.println(number[1]);
		System.out.println(i);
		
		for(j = 0; j < 3; j++)
			sum = sum + number[j];
		System.out.println(sum);
		
		
	}

}
