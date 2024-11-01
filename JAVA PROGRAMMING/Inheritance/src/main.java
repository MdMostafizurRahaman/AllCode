public class main {
	public static void main(String[] args) {
		class_A superOb = new class_A();
		class_B subOb = new class_B();
		
		superOb.i = 20;
		superOb.j = 10;
		superOb.showij();
		System.out.println();
		
		subOb.i = 3;
		subOb.j = 5;
		subOb.k = 10;
		subOb.showij();
		subOb.showk();
		System.out.println();
		
		//subOb.sum(0);
		
	}
}
