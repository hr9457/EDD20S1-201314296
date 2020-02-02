
public class moneda {
    //
    private String nombreDeMoneda;
    private int cantidadDeMonedas;
    
    //contructor with parameters
    public moneda(String moneda, int cantidad){
        this.nombreDeMoneda = moneda;
        this.cantidadDeMonedas = cantidad;
    }
    
    //metodo para transferencia de dinero
    public void transferir(int cantidadTransferencia){
        if(cantidadDeMonedas < cantidadTransferencia){
            System.out.println("La cantidad en el monedero es insuficiente");
        }else{
            cantidadDeMonedas = cantidadDeMonedas - cantidadTransferencia;
            System.out.println("Tranferencia realizada");
        }
    }
    
    //metodos set y get
    public String getNombreDeMoneda() {
        return nombreDeMoneda;
    }

    public void setNombreDeMoneda(String nombreDeMoneda) {
        this.nombreDeMoneda = nombreDeMoneda;
    }

    public int getCantidadDeMonedas() {
        return cantidadDeMonedas;
    }

    public void setCantidadDeMonedas(int cantidadDeMonedas) {
        this.cantidadDeMonedas = cantidadDeMonedas;
    }
  
}
