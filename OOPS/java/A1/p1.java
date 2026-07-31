class Student{

	int rollNo;

	String name;


	// Parameterized Constructor

	Student(String name,int rollNo){

		this.rollNo=rollNo;
		this.name=name;
	}

	// DEFAULT CONSTRUCOR

	Student(){
		System.out.println("Name: " + name);
		System.out.println("RollNo: " + rollNo);
	}

	// COPY CONSTRUCTOR
	
	Student(Student s3){

		this.rollNo=rollNo;
                this.name=name;
	
	}

	void display(){

		System.out.println("Name: " + name);
		System.out.println("RollNo: " + rollNo);

	}
	
	public static void main(String[] args){

		System.out.println("Student 1");
		Student s1=new Student("Piyush",2607);

		s1.display();
		System.out.println();

		System.out.println("Student 2");
		Student s2=new Student("vaishnavi",2204);
		
		s2.display();

		System.out.println();
		
		System.out.println("Student 3");
		Student s3=new Student("EXSHUUU",252);
	
		s3.display();

		System.out.println();

	}
}


