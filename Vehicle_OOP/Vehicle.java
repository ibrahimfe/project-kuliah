public class Vehicle {
    protected String name;

    public Vehicle(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void move() {
        System.out.println("Vehicle " + name + " is moving");
    }
}
