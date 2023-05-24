/**
 * test
 */
interface I1{
    void show();
}
interface I2{
    void display();
}
class A implements I1, I2{
    public void show (){
        System.out.println("This is show function");
    }
    public void display (){
        System.out.println("This is display function");
    }
}
public class interfaceProgram {

    public static void main(String[] args) {
        // System.out.println("kain");
        A obj = new A();
        obj.show();
        obj.display();
    }
}