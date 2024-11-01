
public class Function {
	public int numerator;
	public int denominator;

	public Rational add(Rational firstNum,Rational secondNum){
		int numerator=firstNum.numerator*secondNum.denominator+firstNum.denominator*secondNum.numerator;
		int denominator=firstNum.denominator*secondNum.denominator;
		
		Rational rational=new Rational();
		rational.numerator=numerator;
		rational.denominator=denominator;
	
		return rational;
		
	}
	
	
	public Rational sub(Rational firstNum,Rational secondNum){
		int numerator=firstNum.numerator*secondNum.denominator-firstNum.denominator*secondNum.numerator;
		int denominator=firstNum.denominator*secondNum.denominator;
		
		Rational rational=new Rational();
		rational.numerator=numerator;
		rational.denominator=denominator;
	
		return rational;
		
	}
	
	
	public Rational mul(Rational firstNum,Rational secondNum){
		int numerator=firstNum.numerator*secondNum.numerator;
		int denominator=firstNum.denominator*secondNum.denominator;
		
		Rational rational=new Rational();
		rational.numerator=numerator;
		rational.denominator=denominator;
	
		return rational;
	}
	
	public Rational div(Rational firstNum,Rational secondNum){
		int numerator=firstNum.numerator*secondNum.denominator;
		int denominator=firstNum.denominator*secondNum.numerator;
		
		Rational rational=new Rational();
		rational.numerator=numerator;
		rational.denominator=denominator;
	
		return rational;
	}
	public String strintRepresent(Rational firstNum){
		
		String str;
		str=firstNum.numerator+"/"+firstNum.denominator;
		
	
		return str;
		
	}
	public String strintFloatRepresent(Rational firstNum){
		
		String str;
		double divison;
		
		divison = (double)firstNum.numerator / (double)firstNum.denominator;
		
		str=divison+"";
		
		
	
		return str;
		
	}

}
