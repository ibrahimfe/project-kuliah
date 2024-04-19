public class Car extends Vehicle {
    public Car(String name) {
        super(name);
    }

    @Override
    public void move() {
        System.out.println("Car " + getName() + " is driving");
    }

}
