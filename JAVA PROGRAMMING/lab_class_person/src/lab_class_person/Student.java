package lab_class_person;

public class Student extends Person{
	private int currentYear;
	public Student(String givenName,String familyName,int currentYear) {
		super(givenName,familyName);
		this.currentYear = currentYear;
		}
	@Override
	public String toString() {
		return super.toString()+"Studentd currentYear = " + currentYear;
	}

}
