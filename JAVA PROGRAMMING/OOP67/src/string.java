
public class string {
	public static void main(String[] args) {
		String s1 = "rakib";
		String s2 = new String("Rakib");
		
		char[] s3 = {'R','a','k','i','b'};
		
		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);
		
		int a = s1.length();
		System.out.println(a);
		
		if(s1.equals(s2))
			System.out.println("Equals");
		else
			System.out.println("Not Equals");
		
		if(s1.equalsIgnoreCase(s2))
			System.out.println("Equals");
		else
			System.out.println("Not Equals");
		
		boolean con = s1.contains("ra");
		System.out.println(con);
		
		boolean b = s1.isEmpty();
		System.out.println(b);
		}
}
