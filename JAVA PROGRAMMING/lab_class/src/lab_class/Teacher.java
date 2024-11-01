package lab_class;

import java.util.Currency;

public class Teacher extends Person{
	private int joiningYear;

	Teacher(String name, String familyName,int joiningYear) {
		super(name, familyName);
		this.joiningYear = joiningYear;
		// TODO Auto-generated constructor stub
	}

	@Override
	public String toString() {
		return super.toString() + "is in year = "+ joiningYear;
	}
	
	

	
	
}
