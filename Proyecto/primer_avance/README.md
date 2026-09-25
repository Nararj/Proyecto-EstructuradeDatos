# Proyecto: Bibioteca videojuegos
- La idea de este proyecto es permitir al usuario registrar, organizar y visualizar videojuegos según su género donde el sistema incluye juegos de acción, RPG y aventura gráfica, cada uno con características específicas.

## Descripción del avance 1
- En este avance se agrego una clase llamada "ordenar" que accede a el vector de juegos para ordenar estos dependiendo de su calificación de manera ascendente y al momento de que el usuario pida mostrar los juegos estos aparezcan ya ordenados, esto mandando a llamar a esta funcion en biblioteca la momento de mostrar los juegos.
- Se agregó tambien la clase "sistema" que paso el funcionamiento del main a esta clase para que el main quedara más limpio.

## Instrucciones para compilar el avance de proyecto
- Abrir todos los archivos .cpp en un proyecto de C++ (..., main.cpp)
- Abrir una terminal o consola y navegar a la carpeta donde están los archivos
- Compilar todos los archivos juntos usando un compilador de C++ (en Windows y Linux)
	- g++ main.cpp  -o main.exe
- Compilar todos los archivos juntos usando un compilador de C++ (en IOs)
	- g++ main.cpp  -o main.o

## Instrucciones para ejecutar el avance de proyecto
- Ejecutar el programa resultante (en Windows y Linux)
	- /.main.exe
- Ejecutar el programa resultante (en IOs)
	- ./main.o 

## Descripción de las entradas del avance de proyecto
- Por el momento no se reciben archivos ya que se requiere que el usuario ponga los juegos que desea calificar cada vez que corre el programa ([profe no me odie] esto se arreglara en futuras entregas para que se genere un archivo donde se vayan guardando los juegos que el usuario guarda), asi como su nombre, plataforma, calficación y una caracteristica del tipo de juego que eligio guardar
    - Nombre:   (string)
    - Plataforma:   (string)
    - Calificación:   (float)
    - Caracteristica que un tipo de juego (ej. decisiones totales):  (int)

- Ej.
    - Nombre: Life is Strange
    - Plataforma: Xbox
    - Calificación: 10
    - Cantidad de decisiones: 230

## Descripción de las salidas del avance de proyecto
- Al ejecutar el programa se despliega un menú principal con 8 opciones
    - Las opciones 1 a 3 permiten registrar un nuevo juego de diferente tipo
    - La opción 4 muestra los juegos registrados, ordenados de forma ascendente 
    - La opción 5 busca un juego por nombre exacto y muestra su información, si no exite manda el mensaje 'Juego no encontrado' 
    - Las opciones 6 y 7 permiten agregar y mostrar juegos favoritos (solo se guarda el nombre)
    - La opción 8 termina el programa

## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
- El desarrollo se puede encontrar en el archivo "ordenar" donde se hizo el analisis de la complejidad del metodo de ordenamiento, se demuestra al hacer este analisis en el este archivo aunque considero que me falta estudiarlo más ya que hay algunas que me costo saber porque era asi e investigar ya que habia puesto la complejidad incorrecta al primer intento.

### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
- En el archivo "ordenar" se usa un bubble sort ya que al ser pocos datos, este metodo de ordenamiento no usa demasiados pasos para completarlo, cuando el proyecto ya cuente con un archivo que se pueda sobreescribir para guardar cada vez mas datos de muchos mas juegos, dejara de ser eficiente y lo cambiaré por un merge o quick sort ya que estos bajarian la complejidad del proyecto a un O(logn) haciendolo mucho mas eficiente.
