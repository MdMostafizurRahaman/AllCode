package labClass;

public class Human {
	public static void main(String[] args) {
		Human human = new Human();
		human.talk();
		
		class human extends Animal{
			public void talk() {
				System.out.println("Talk");
			}
		}
	}

	private void talk() {
		// TODO Auto-generated method stub
		System.out.println("Talk");
	}

}
