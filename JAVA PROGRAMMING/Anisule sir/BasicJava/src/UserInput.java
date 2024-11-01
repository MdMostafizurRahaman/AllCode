import java.util.Scanner;

public class UserInput {
public static void main(String[] args) {
	Scanner input = new Scanner(System.in);
	int num;
	System.out.print("Enter Number:");
	num = input.nextInt();
	
	System.out.printf("Entered number is:%d\n",num);
	System.out.println("Entered Number is:"+num);
	
	
	
	String nam;
	//Scanner fullName = new Scanner(System.in);
	System.out.print("Enter ur name Again:");
	nam = input.nextLine();
	System.out.println("Entered Name is:"+nam);

	String name;
	//Scanner shortName = new Scanner(System.in);
	System.out.print("Enter Ur Name:");
	name = input.next();
	System.out.println("Entered Name is:"+name);
}
}
