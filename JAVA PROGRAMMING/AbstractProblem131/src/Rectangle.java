public class Rectangle extends Shape {
	Rectangle(double num1, double num2) {
		super(num1, num2);
	}
	void area() {
		double result = num1 * num2;
		System.out.println("Rectangle Area:"+result);
	}
}
