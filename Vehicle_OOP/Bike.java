
public class Bike extends Vehicle {

    public Bike(String name) {
        super(name);
    }

    @Override
    public void move() {
        System.out.println("Bike " + getName() + " is riding");
    }

}
