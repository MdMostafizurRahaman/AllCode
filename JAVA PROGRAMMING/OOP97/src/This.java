
public class This {
double height,width,depth;
	
	This(double height, double width, double depth){
		this.height = height;
		this.width = width;
		this.depth = depth;
		//this die bujacce oi height instance variable,sudhu height die 
		//local var mone krto
		//karon method or constructor er moddhe local var er priority bes...
	}
	void Display() {
		System.out.println("Volume:"+height*width*depth);
	}
}

