
public class Static_var {
	
	String name;
	int roll;
	static String UniversityName = "University of Dhaka";
	 Static_var(String n,int r) {
		name = n;
		roll = r;
	}
	 
	 void Display() {
		 System.out.println("Name:"+name);
		 System.out.println("Roll:"+roll);
		 System.out.println("UniversityName:"+UniversityName);
		 System.out.println();
	 }
}
