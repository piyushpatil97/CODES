class Student{

	int age;

	String name;


	// Parameterized Constructor

	Student(String name,int age){

		this.age=age;
		this.name=name;
	}

	// DEFAULT CONSTRUCOR

	Student(){
		System.out.println("Name: " + name);
		System.out.println("RollNo: " + age);
	}

	// COPY CONSTRUCTOR
	
	Student(Student s3){

		this.age=age;
                this.name=name;
	
	}

	void display(){

		System.out.println("Name: " + name);
		System.out.println("RollNo: " + age);

	}
	
	public static void main(String[] args){

		System.out.println("PERSON 1");
		Student s1=new Student("Piyush",20);

		s1.display();
		System.out.println();

		System.out.println("PERSON 2");
		Student s2=new Student("vaishnavi",20);
		
		s2.display();

		System.out.println();
		
		System.out.println("PERSON 3");
		Student s3=new Student("EXSHUUU",20);
	
		s3.display();

		System.out.println();

	}
}


