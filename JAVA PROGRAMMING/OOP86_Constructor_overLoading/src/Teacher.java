
public class Teacher {
	String name,gender;
	int phone;

	Teacher(){
		System.out.println("No information\n");
	}
	
	Teacher(String n, String g){
		name = n;
		gender = g;
	}
	
	Teacher(String n, String g, int p){
		name = n;
		gender = g;
		phone = p;
	}
	
	void display() {
		System.out.println(name);
		System.out.println(gender);
		System.out.println("Phone:"+phone);
		System.out.println();
	}
}
