
import java.util.Scanner;

public class CelciusAndFarenheitCalculator {
  public static void main(String args[]) {
    double C,F,k;
    int d,i;
    
    Scanner input = new Scanner(System.in);
    
    System.out.print("1. Calculate Celcius. \n2. Calculate Farenheit. \n\nEnter one option:");
    
    d= input.nextInt();
    
    if(d==1){
        System.out.print("\nGive Ferenheit value: ");
        F = input.nextDouble();
        C = (F-32)/1.8;
        System.out.println("Result celcius = "+C);
    }else if(d==2){
        System.out.print("\nGive Celcius value: ");
        C = input.nextDouble();
        F = C*1.8 + 32;
        System.out.println("Result celcius = " + F );
    }else{ 
        System.out.println("Enter only 1 or 2 for correct option");
    }
    
  }
}
