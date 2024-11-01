
public class Count {
	
	static int count = 0;
	
	Count(){
		count++;
	}
	
	void Display() {
		System.out.println("Count:"+count);
		System.out.println();
	}
}