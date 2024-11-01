
public class string_class {
	public static void main(String[] args) {
		
		String s1 = "Mostafizur";
		String s2 = "Rahaman";
		
		//String s3 = s1 +" "+ s2;
		String s3 = s1.concat(s2);
		System.out.println(s3);
		
		String upper = s1.toUpperCase();
		System.out.println(upper);
		
		String lower = s1.toLowerCase();
		System.out.println(lower);
		
		boolean b = s1.startsWith("M");
		System.out.println(b);
		

		boolean c = s1.startsWith("Mos");
		System.out.println(c);
		
		boolean l = s1.endsWith("r");
		System.out.println(l);
		
		String[] names = {"Mostafizur","Rahaman","Rakib"};
		for(String x: names) {
			System.out.println(x);
		}
		//or,
		String[] name = {"Mostafizur","Rahaman","Rakib"};
		for(int i = 0; i < 3; i++)
			System.out.println(name[i]);
		
	}

}
