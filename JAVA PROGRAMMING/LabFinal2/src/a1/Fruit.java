package a1;

public class Fruit {
	private String name;
	private int variety;
	private int	totalQuantityKg;
	private int pricePerKg;


 Fruit(String name,int variety,int	totalQuantityKg,int pricePerKg)
{
	this.name = name;
	this.variety = variety;
	this.totalQuantityKg = totalQuantityKg;
	this.pricePerKg = pricePerKg;
}


public String getName() {
	return name;
}


public void setName(String name) {
	this.name = name;
}


public int getVariety() {
	return variety;
}


public void setVariety(int variety) {
	this.variety = variety;
}


public int getTotalQuantityKg() {
	return totalQuantityKg;
}


public void setTotalQuantityKg(int totalQuantityKg) {
	this.totalQuantityKg = totalQuantityKg;
}


public int getPricePerKg() {
	return pricePerKg;
}


public void setPricePerKg(int pricePerKg) {
	this.pricePerKg = pricePerKg;
}

void display()
{
	System.out.println(name);
	System.out.println(variety);
	System.out.println(totalQuantityKg);
	System.out.println(pricePerKg);
}

}

