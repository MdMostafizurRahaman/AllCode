import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Rational firstNum = new Rational();
		Rational secondNum = new Rational(),obj;
		String str;
		
		
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Input first numerator and denominator: ");
		firstNum.numerator =sc.nextInt();;
		firstNum.denominator =sc.nextInt();;
		
		System.out.print("Input second numerator and denominator: ");
		secondNum.numerator =sc.nextInt();;
		secondNum.denominator =sc.nextInt();;
		
		Function fun = new Function();
		obj = fun.add(firstNum, secondNum);
		System.out.println("Neumerator "+obj.numerator+" denominator "+obj.denominator);
		
		obj = fun.sub(firstNum, secondNum);
		System.out.println("Neumerator "+obj.numerator+" denominator "+obj.denominator);
		
		obj = fun.mul(firstNum, secondNum);
		System.out.println("Neumerator "+obj.numerator+" denominator "+obj.denominator);
		
		obj = fun.div(firstNum, secondNum);
		System.out.println("Neumerator "+obj.numerator+" denominator "+obj.denominator);
		
		str = fun.strintRepresent(firstNum);
		System.out.println(str);
		
		str = fun.strintFloatRepresent(firstNum);
		System.out.println(str);
		
		
	}
	


}
