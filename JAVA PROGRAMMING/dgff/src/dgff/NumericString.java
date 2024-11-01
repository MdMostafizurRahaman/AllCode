package dgff;

public class NumericString {
	String Number;

	public NumericString(String number) {
		Number = number;
	}
	public NumericString addNthDigit(int a,String string1,String string2) {
		String s1=string1.substring(string1.length()-a,string1.length()-a+1);
		int c=Integer.valueOf(s1);
		String s2=string2.substring(string2.length()-a,string2.length()-a+1);
		int b=Integer.valueOf(s2);
		int result =c+b;
		
		String S=String.valueOf(result);
		
		NumericString resultstring = new NumericString(S);
		return resultstring;
	}

	public static void main(String[] args) {

		//NumericString numericstring1=new NumericString("793");
		//NumericString numericstring2=new NumericString("456");
		NumericString result1=new NumericString("0");
		result1=result1.addNthDigit(1, "51", "65");
		
		System.out.println(result1.Number);
	}
	


}


