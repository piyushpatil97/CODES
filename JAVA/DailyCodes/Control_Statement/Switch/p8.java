class Switch{

	public static void main(String[] args){

		int x=2;

		System.out.println("Before switch");

		switch(x){

			default : 

				System.out.println("Wrong input");
				break;

			case 1:
				System.out.println("One");
				break;

			case 2:
				System.out.println("Two");
				break;

			case 3:
				System.out.println("Three");
				break;

			case  4:
				System.out.println("Four");
				break;
		}

		System.out.println("After Switch");

	}
}



