class Switch{

	public static void main(String[] args){

		double x=25.5;

		switch((int)x){

			case (int)5.5:

				System.out.println("5.5");
				break;

			case (int)15.5:
				System.out.println("15.5");
				break;


			case (int)25.5:

				System.out.println("25.5");
				break;

			case (int)35.5:
					System.out.println("35.5");
					break;

			default:
					System.out.println("NO Match found");
		}
	}
}
