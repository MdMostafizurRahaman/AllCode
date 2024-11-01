public class square extends Shape{
	square(double num1) {
		super(num1, num1);
	}
	void area() {
		double result = num1 * num1;
		System.out.println("Square Area:"+result);
	}

}
