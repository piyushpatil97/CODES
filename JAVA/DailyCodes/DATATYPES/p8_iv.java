class undecVar{

	public static void main(String[] args){


		int x=(int)25.5f;

		double d = false;
		
		boolean b ="false";
		
		boolean c = 1;

		boolean a =(boolean) 1;

		System.out.println(x); // no error

		System.out.println(d); // boolean cannot be converted to double
		System.out.println(b); // String cannot be converted to boolean
		System.out.println(c); // Int cannot be converted to boolean

	}
}
