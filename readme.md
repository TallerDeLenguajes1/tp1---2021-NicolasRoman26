# Taller de Leguajes - Trabajo Practico Nº 1
Resolucion del TP1 Manejo de punteros y versionado en git y github.
## Investigar el archivo .gitignore
**¿Por qué es conveniente incluirlo?**
Es conveniente incluirlo ya que no todos los archivos y carpetas son necesarios de gestionar a partir del sistema de control de versiones, ya sea porque es privado para un desarrollador en concreto y/o no lo necesiten conocer el resto de las personas.

**¿Cuándo se debe hacer?**
Se debe hacer cuando por ejemplo en nuestro proyecto tenemos muchos archivos descargados ya sean documentos, demos, etc. Todo eso no es necesario que se mantenga en el sistema de gestión de versiones, porque no forma parte del código de nuestro proyecto en concreto, al ignorar esos archivos el peso total de proyecto será mucho menor y eso redundará en un mejor mantenimiento y distribución del código.

**¿Cómo usaría la página [gitignore.io](https://www.toptal.com/developers/gitignore "gitignore.io")?**
La usaria para crear un archivo .gitignore de forma automatica por medio de una especie de plantillas. Pôr ejemplo se escribe el lenguaje el cual se utiliza en el proyecto, hacemos click donde dice **Create** y se nos creara de forma automatica todos los archivos que necesitas ignorar ya que son casi siempre los mismos.

**¿Cómo configuraría el archivo .gitignore?**
Lo configuraría de tal forma que solo se muestre el codigo, el archivo .md, y dependiendo el tipo de proyecto mostraria algo mas lo cual permita o ayude a entender como funciona el codigo
## Resolucion Punto 2
**Si resolvió correctamente los puntos ii y iii notará que el resultado es el
mismo. ¿a qué se debe?**
Se debe a que declaramos un puntero el cual apunta a una variable, esa variable tiene su propia asignacion de memoria y el puntero contiene la direccion de memoria de una variable a la que apunte, entonces al hacer que el puntero apunte a la variable estamos haciendo que apunte a su direccion de memoria y podremos ver donde se guarda el contenido de esa variable y ver el contenido de la misma.

**¿Qué obtiene en el punto 4?**
Se obtiene la direccion de memoria del puntero, la cual se le asigno al puntero a la hora de declararlo.

**¿Es igual a los anteriores? ¿Por qué?**
No es igual que los anteriores, tanto el puntero como la variable tienen su propia asignacion de memoria, la funcion del puntero es contener la direccion de memoria de una variable a la cual apunta, por lo tanto al apuntar a una variable cualquiera el puntero no se almacena en la misma direccion de memoria de esa variable, ya desde el inicio a la hora de declarar tanto el puntero como la variable se les asigna su propia direccion de memoria.

------------

Nicolás Román