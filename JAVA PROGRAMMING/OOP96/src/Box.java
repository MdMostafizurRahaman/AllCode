
public class Box {
	
	double height,width,depth;
	
	Box(double h, double w, double d){
		height = h;
		width = w;
		depth = d;
	}
	void Display() {
		System.out.println("Volume:"+height*width*depth);
	}
}
