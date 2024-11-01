package loop;

public class nestedl {
	public static void main(String[] args) {
		int i,j;
		for(i=0;i<2;i++) {
			System.out.println("Outer loop starts");
			for(j=0;j<3;j++)
				System.out.println("ok");
			System.out.println("Outer loop ends");
			System.out.println();
		}
			
	}

}
