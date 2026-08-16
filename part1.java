class shape 
{
    public void area(){
        System.out.println("Display area");
    
    }
    
}
class triangle extends shape{
    
    public void area(float h,float l){
        
    
    System.out.println((1.0/2)*h*l);
    }
    
}

public class part1
{
    public static void main(String args[])
    {
        triangle t1=new triangle();
        t1.area(10f,5);
        
    }
}