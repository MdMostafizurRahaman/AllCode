
public class animal {
	private String s ;
	
	public animal(String s ,String y)
	{
		this.setS(s+y);
	}
	
	
 	public void walk()
	{
		System.out.println("Walk!");
	}


	public String getS() {
		return s;
	}


	public void setS(String s) {
		this.s = s;
	}

}
