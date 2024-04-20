public class Main {
    public static void main(String[] args) {
        Vehicle kendaraanUmum = new Vehicle("Bus", 180, 9000);

        kendaraanUmum.move();
        System.out.println("Jenis Kendaraan : " + kendaraanUmum.getName());
        System.out.println("Max Speed Kendaraan : " + kendaraanUmum.getMaxSpeed() + "Km/h");
        System.out.println("Berat Kendaraan : " + kendaraanUmum.getWeight() + "Kg");
        kendaraanUmum.stop();

        Bike sepedaBiasa = new Bike("Polygon", 40, 10);

        sepedaBiasa.move();
        System.out.println("Nama Sepeda : " + sepedaBiasa.getName());
        System.out.println("Max Speed Sepeda  : " + sepedaBiasa.getMaxSpeed() + "Km/h");
        System.out.println("Berat Sepeda  : " + sepedaBiasa.getWeight() + "Kg");
        System.out.println("Apakah sepeda listrik ? " + sepedaBiasa.isElectric());
        sepedaBiasa.stop();

        Bike sepedaListrik = new Bike("BMC", 45, 12, true);

        sepedaListrik.move();
        System.out.println("Nama Sepeda : " + sepedaListrik.getName());
        System.out.println("Max Speed Sepeda  : " + sepedaListrik.getMaxSpeed() + "Km/h");
        System.out.println("Berat Sepeda  : " + sepedaListrik.getWeight() + "Kg");
        System.out.println("Apakah sepeda listrik  ? " + sepedaListrik.isElectric());
        sepedaListrik.stop();

        Car mobilBiasa = new Car("Daihatsu", 200, 3000);

        mobilBiasa.move();
        System.out.println("Nama Mobil : " + mobilBiasa.getName());
        System.out.println("Max Speed Mobil  : " + mobilBiasa.getMaxSpeed() + "Km/h");
        System.out.println("Berat Mobil : " + mobilBiasa.getWeight() + "Kg");
        System.out.println("Apakah termasuk mobil mewah ? " + mobilBiasa.isLuxury());
        mobilBiasa.stop();

        Car mobilMewah = new Car("Lamborghin", 300, 3200, true);

        mobilMewah.move();
        System.out.println("Nama Mobil : " + mobilMewah.getName());
        System.out.println("Max Speed Mobil : " + mobilMewah.getMaxSpeed() + "Km/h");
        System.out.println("Berat Mobil : " + mobilMewah.getWeight() + "kg");
        System.out.println("Apakah Termasuk Mobil Mewah ? " + mobilMewah.isLuxury());
        mobilMewah.stop();

        System.out.println("banyaknya kendaraan : " + Vehicle.getTotalNumVehicle());
    }
}
