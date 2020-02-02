# Especificacion informal de un TDA

## Descripcion 
TDA de una "Moneda" implementado en java 

## Clase Principal 

### Lista Usuarios
creacion para realizar listado de usuarios dinamicamente ArrayList con una estructura proporcionada por la clase users
 ```java
 List <users> usuarios = new ArrayList<users>();
 ```

### Busqueda
Busqueda de un usuario para la verificacion de su existencia en la lista y posteriormente realiza la peticion al monedero para la transacción 

```java
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
```

 

### Clase Moneda - Metodo Transferir 
Recibe y verifica si hay en la cantidad para la realizacion de una transacción 

```java
public void transferir(int cantidadTransferencia){
        if(cantidadDeMonedas < cantidadTransferencia){
            System.out.println("La cantidad en el monedero es insuficiente");
        }else{
            cantidadDeMonedas = cantidadDeMonedas - cantidadTransferencia;
            System.out.println("Tranferencia realizada");
        }
    }
```

