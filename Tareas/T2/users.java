//clase usuarios
public class users {
   //atributos
    String nombreUsuario;
    int cantidadMonedas;
    
    //metodo contructor
    public users(String nombre){
        this.nombreUsuario = nombre;
        this.cantidadMonedas = 0;
    }
    
      
    //metodos set y get
    public String getNombreUsuario() {
        return nombreUsuario;
    }

    public void setNombreUsuario(String nombreUsuario) {
        this.nombreUsuario = nombreUsuario;
    }

    public int getCantidadMonedas() {
        return cantidadMonedas;
    }

    public void setCantidadMonedas(int cantidadMonedas) {
        this.cantidadMonedas = cantidadMonedas;
    } 
    
    
      
    
}


