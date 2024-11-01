public class Person {
	String name;
	int age;
	String favouriteColor;
	
	Person(String name, int age) {
		this.name = name;
		this.age = age;
	}
	
	Person(String name, int age, String favouriteColor){
		this(name, age);
		this.favouriteColor = favouriteColor;
	}
	
	void Display() {
		System.out.println("Name:"+name);
		System.out.println("Age:"+age);
		System.out.println("FavouriteColor:"+favouriteColor);
	}
}
