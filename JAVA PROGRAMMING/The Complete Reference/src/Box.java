class Box {
	double width;
	double height;
	double depth;

	public static void main(String[] args) {
		Box myBox = new Box();
		
		myBox.width = 100;
		myBox.height = 10;
		myBox.depth = 10;
		
		double vol = myBox.depth*myBox.height*myBox.depth;
		
		System.out.println(vol);
	}
}
