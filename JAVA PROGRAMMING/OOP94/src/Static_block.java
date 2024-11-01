
public class Static_block {
	static int id;
	static String name;
	
	static {
		id = 101;
		name = "Rakib";
		
	}
	
	static void Display() {
		System.out.println(id);
		System.out.println(name);
	}
	
	//public static void main(String[] args) {
		//Static_block.Display();
	

}
