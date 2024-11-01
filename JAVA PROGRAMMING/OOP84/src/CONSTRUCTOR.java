
public class CONSTRUCTOR {
	String name,hall;
	int roll;
	
	CONSTRUCTOR(String n,String h,int r) {
		name=n;
		hall=h;
		roll=r;
			
	}
	CONSTRUCTOR(){
		System.out.println("No value");
	}
	void display() {
		System.out.println(name);
		System.out.println(hall);
		System.out.println(roll);
		System.out.println();
	}
}
