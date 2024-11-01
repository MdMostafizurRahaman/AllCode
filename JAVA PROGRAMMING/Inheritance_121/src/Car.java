public class Car extends Vehicle{
	int gear;
	
	Car(String c, double w, int g){
		//color = c;
		//weight = w;
		super(c,w);
		gear = g;
	}
	
	@Override
	void Attribute() {
		super.Attribute();
		System.out.println("Gear:"+gear);
	}
}
