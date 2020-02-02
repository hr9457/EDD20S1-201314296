# Especificacion informal de un TDA

## Descripcion 
TDA de una "Moneda" implementado en java 

## Clase Moneda - Metodo Transferir 

```java 
pública  vacío  Transferir ( int  cantidadTransferencia ) {
        if (cantidadDeMonedas < cantidadTransferencia) {
            Sistema . a cabo . println ( " La cantidad en el dinero es insuficiente " );
        } más {
            cantidadDeMonedas = cantidadDeMonedas - cantidadTransferencia;
            Sistema . a cabo . println ( " Tranferencia realizada " );
        }
    }
```
