package lab_class;

public class Person {
	String name;
	String familyName;
	
	
	@Override
	public String toString() {
		return "Name=" + name + ", FamilyName=" + familyName ;
	}
	Person(String name, String familyName) {
		this.name = name;
		this.familyName = familyName;
		
	}
	/*public void display() {
		System.out.println("Name:"+name);
		System.out.println("Family Name:"+familyName);
	}*/

}
