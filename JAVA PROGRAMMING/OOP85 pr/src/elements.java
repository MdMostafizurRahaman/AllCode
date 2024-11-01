
public class elements {
	String name,from;
	int weight;
	
	elements(String m, String n, int i){
	name=m;
	from=n;
	weight=i;
	}
	void display() {
		System.out.println(name);
		System.out.println(from);
		System.out.println(weight);
	}
}
