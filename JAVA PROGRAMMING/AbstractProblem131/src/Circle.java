public class Circle extends Shape {
	Circle(double num1){
		super(num1, num1);
	}
	
	void area() {
		double result = 3.1416 * num1 * num1;
		System.out.println("Circle Area:"+result);
	}
	
}
