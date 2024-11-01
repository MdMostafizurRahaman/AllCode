package sirClass;

public class ThrowsDemo {
	static void throesOne() throws IllegalAccessExpection{
		System.out.println("Inside throeOne");
		throw new IllegalAccessExpection("Demo");
		
	}
	public static void main(String[] args) {
		try {
			throwOne();
			
		}
	}
	

}
