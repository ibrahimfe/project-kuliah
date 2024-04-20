public class Vehicle {
    protected String name;
    protected int maxSpeed;
    protected double weight;
    private static int numOfVehicle;

    static {
        numOfVehicle = 0;
    }

    public Vehicle(String name, int maxSpeed, double weight) {
        this.name = name;
        this.maxSpeed = maxSpeed;
        this.weight = weight;
        numOfVehicle++;
    }

    public String getName() {
        return name;
    }

    public int getMaxSpeed() {
        return maxSpeed;
    }

    public double getWeight() {
        return weight;
    }

    public void move() {
        System.out.println("Vehicle named " + name + " is moving");
    }

    public void stop() {
        System.out.println("Vehicle named " + name + " has stopped");
        System.out.println("<<=========================>>");
    }

    public static int getTotalNumVehicle() {
        return numOfVehicle;
    }
}
