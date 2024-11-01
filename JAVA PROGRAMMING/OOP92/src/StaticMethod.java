
public class StaticMethod {
	
	void Display1() {
		Display2();
		//OOP93 te etai alochona ace...
		// sattic method akta non static method k call ba onno kicui krte pre nah
		//but akta non static method akta static method k call soho ssob kicui krte pre
		System.out.println("I am no a static method");
		
	}
	
	static void  Display2() {
		//Display1();
		System.out.println("I am a static method");
		
	}

}
