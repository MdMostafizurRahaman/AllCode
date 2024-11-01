package a1;

public class User {
	private String firstName;
	private String lastName;
	private int phoneNumber;
	
	public User(String firstName,String lastName, int phonenumber) {
		this.firstName =firstName;
		this.lastName =lastName;
		this.phoneNumber = phonenumber;
	}

	public String getFirstName() {
		return firstName;
	}

	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}

	public String getLastName() {
		return lastName;
	}

	public void setLastName(String lastName) {
		this.lastName = lastName;
	}

	public int getPhoneNumber() {
		return phoneNumber;
	}

	public void setPhoneNumber(int phoneNumber) {
		this.phoneNumber = phoneNumber;
	}
	
	void display()
	{
		System.out.println(firstName);
		System.out.println(lastName);
		System.out.println(phoneNumber);
	}
	
}
