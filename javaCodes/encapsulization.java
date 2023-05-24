/**
 * encapsulization
 */
class Employee{
    private int id;

    public void setId(int id){
        this.id = id;
    }
    public int getId(){
        return this.id;
    }
}

public class encapsulization {

    public static void main(String[] args) {
        Employee obj = new Employee();
        obj.setId(4);
        System.out.println(obj.getId()); 
    }
}