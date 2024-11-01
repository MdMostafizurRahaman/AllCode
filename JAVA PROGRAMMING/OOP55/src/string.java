import java.util.Scanner;

public class string {
	public static void main(String[] args) {
		
		String[] a = new String[4];
		
	  /*a[0] = "Akib";
		a[1] = "abul";
		a[2] = "Babul";
		a[3] = "Cabul";
	*/
		Scanner input = new Scanner(System.in);
		
		for(int i = 0; i < 4; i++)
			a[i] = input.nextLine();
		
		for(int i = 0; i < 4; i++)
			System.out.println(a[i]);
	}

}
