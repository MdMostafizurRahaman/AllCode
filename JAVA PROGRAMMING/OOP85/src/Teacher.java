
public class Teacher {

	String name;
	int roll,phone;
	
	Teacher(String n,int r,int p) {
	name = n;
	roll = r;
	phone = p;
	}
	
	void display() {
		System.out.println(name);
		System.out.println(roll);
		System.out.println(phone);
		System.out.println();
	}
}
