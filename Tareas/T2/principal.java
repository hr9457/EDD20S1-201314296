//clase principal
import java.util.List;
import java.util.ArrayList;
import java.util.Scanner;
public class principal {
    
    public static void main(String[] args) {
        //entrada por consola
        Scanner entrada = new Scanner(System.in);
        
        //inicializacion del monedero
        moneda monedero = new moneda("Dolar", 100);
        
        //creacion de la lista de usuarios
        List <users> usuarios = new ArrayList<users>();
        //usuarios de prueba
        usuarios.add(new users("pepe"));
        usuarios.add(new users("ana"));
        usuarios.add(new users("carlos"));
        usuarios.add(new users("mari"));
        
        //prueba transferencia de monedero a usuario
        System.out.println("ingrese nombre usuario: ");
        String nombreIngresado = entrada.nextLine();
        
        //busqueda en la lista de usuarios y transferencia de monedero a usuarios
        for (int i = 0; i <= usuarios.size(); i++) {
            String usuarioPosicion = (String)usuarios.get(0).getNombreUsuario();
            if(usuarioPosicion.equals(nombreIngresado)){
                System.out.println("Ingrese la cantidad a transferir: ");
                int cantidadTransferencia = Integer.parseInt(entrada.nextLine());
                monedero.transferir(cantidadTransferencia);
                break;
            }else{
                System.out.println("Usuario no existe");
                break;
            }
        }
        
        
    }

}
