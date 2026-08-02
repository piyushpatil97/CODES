class IF{

	public static void main(String[] args){


		int courseID=3;

		if(courseID == 1){

			System.out.println("Java Course");
			System.out.println("Includes : JAVA DSA DBMS OS");

		}else if (courseID == 2){

			System.out.println("Python Course");
			System.out.println("Includes : Python , IOT,ML,AI");

		}else if (courseID == 3){
		
			System.out.println("BOOT CAMP Course");
			System.out.println("Includes : C,CPP,DSA");
		
		}else if (courseID == 4){
		
			System.out.println("FLUTTER COURSE");
			System.out.println("Includes : DART,FLutter");


		}else if (courseID == 5){
		
			System.out.println("WEBDEV COURSE");
			System.out.println("Includes : AdvJAVA,SpringBoot");
		}else{
			System.out.println("INVALID COURSE ID");

		}

	}
}
