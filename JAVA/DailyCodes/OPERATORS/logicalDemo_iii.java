class logicalDemo{

	public static void main(String[] args){

		int x=10;
		int y=12;


		boolean result = (++x < --y)||(x++ < --y);

		System.out.println(result); // false
		System.out.println(x); // 12
		System.out.println(y); // 10
	}
}


