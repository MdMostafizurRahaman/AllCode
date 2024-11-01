package lab_class_person;

public class Person {
	private String givenName;
	private String familyName;
	
	Person(String givenName, String familyName){
		this.givenName = givenName;
		this.familyName = familyName;
	}
	@Override
	public String toString()
	{
		return "givenName="+givenName+",familyName="+familyName+""; 
	}

}
