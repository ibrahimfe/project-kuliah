public class Car extends Vehicle {
    private boolean luxury;

    public Car(String name, int maxSpeed, double weight) {
        this(name, maxSpeed, weight, false);
    }

    public Car(String name, int maxSpeed, double weight, boolean luxury) {
        super(name, maxSpeed, weight);
        this.luxury = luxury;
        ;
    }

    @Override
    public void move() {
        if (luxury) {
            System.out.println("Your Luxury Car named " + getName() + " is driving");
        } else {
            System.out.println("Your Standard Car named " + getName() + " is driving");
        }
    }

    public boolean isLuxury() {
        return luxury;
    }

}
