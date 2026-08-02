class City {
    String name;
    int population;

    // Constructor
    City(String name, int population) {
        this.name = name;
        this.population = population;
    }

    // Method to display details
    void display() {
        System.out.println("City Name : " + name);
        System.out.println("Population: " + population);
        System.out.println();
    }
}

public class main {

    public static void main(String[] args) {

        // Array of City objects
        City[] cities = new City[5];

        // Creating objects
        cities[0] = new City("Mumbai", 12400000);
        cities[1] = new City("Delhi", 32900000);
        cities[2] = new City("Pune", 7400000);
        cities[3] = new City("Bengaluru", 13600000);
        cities[4] = new City("Hyderabad", 10600000);

        // Displaying details using loop
        System.out.println("City Details:");
        for (int i = 0; i < cities.length; i++) {
            cities[i].display();
        }
    }
} 
