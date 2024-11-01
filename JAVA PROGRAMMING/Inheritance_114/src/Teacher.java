public class Teacher extends Person{
	String qualification;
	
	@Override
	void Display() {
		System.out.println("Name:"+name);
		System.out.println("Age:"+age);
		System.out.println("Qualificartion:"+qualification);
	}
}
