package lab_class_person;

public class Teacher extends Person{
	private String subject;
	public Teacher(String givenName, String familyName, String subject) {
		super(givenName,familyName);
		this.subject = subject;
		
	}
	@Override
	public String toString() {
		return super.toString()+"Teaching subject="+subject;
	}
}
