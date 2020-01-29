
import java.util.Scanner;
public class matriz {
    
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        System.out.println("Ingrese una matriz de m x m mayor a 3");
        System.out.println("Ingrese No. para crer una matriz de MxM: ");
        int filas = Integer.parseInt(entrada.nextLine());
        int columnas = filas;
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                if(i==0 || i==filas-1){
                    System.out.print("1");
                }else if (i>0 && j == 0) {
                    System.out.print("1");
                }else if(i>0 && j==columnas-1){
                    System.out.print("1");
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println("");
        }
    }

}
