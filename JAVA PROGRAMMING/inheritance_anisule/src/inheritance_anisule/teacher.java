package inheritance_anisule;

public class teacher extends student{
	String qualification;
	
	void display2() {
		display();
		System.out.println("Qualification"+qualification);
	}


}
