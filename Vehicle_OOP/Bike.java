
public class Bike extends Vehicle {
    private boolean electric;

    public Bike(String name, int maxSpeed, double weight) {
        this(name, maxSpeed, weight, false);
    }

    public Bike(String name, int maxSpeed, double weight, boolean electric) {
        super(name, maxSpeed, weight);
        this.electric = electric;
        ;
    }

    @Override
    public void move() {
        if (electric) {
            System.out.println("Electric Bike named " + getName() + " is riding silently");
        } else {
            System.out.println("Bike named " + getName() + " is riding loudly");
        }

    }

    public boolean isElectric() {
        return electric;
    }

}
