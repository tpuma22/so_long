# GNL

Get Next Line
-------------------------------------------------------------------------------------------------
Nombre de función: get_next_line
..................
Prototipo: char *get_next_line(int fd);
..........
Archivos a entregar: get_next_line.c, get_next_line_utils.c,get_next_line.h
....................
Parámetros: File descriptor del que leer
...........
Valor devuelto: Si todo va bien: la línea leída - En caso de fallo o si la lectura termina: NULL
...............
Funciones autorizadas: read, malloc, free
......................
Descripción: Escribe una función que devuelva la línea leída de un file descriptor
............

• Llamar a tu función get_next_line en un bucle te permitirá leer el contenido de un file descriptor línea a línea hasta el final.
• Tu función deberá devolver la línea que se acaba de leer. Si no hay nada más que leer o si ha ocurrido un error, deberá devolver NULL.
• El programa se compilará de la siguiente forma:
cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 <archivos>.c.
-------------------------------------------------------------------------------------------------

Descriptores de archivo para stdin, stdout, y stderr

<<<La entrada estándar (stdin, de Standard Input) consiste en los datos que son enviados al programa. En la mayoría de los casos, estos datos son ingresados mediante el teclado o son el resultado de la ejecución de un comando anterior. El descriptor de archivo asociado a stdin es el 0.
<<<La salida estándar (stdout, de Standard Output) es la vía por la que el programa devuelve los datos luego de su ejecución. Por lo general, stdout es la pantalla de la computadora. El descriptor de archivo correspondiente es el 1.
<<<El error estándar (stderr, de Standard Error) es el canal por el que se envía un mensaje de error en caso de que su ejecución falle. Si bien este mensaje generalmente también se visualizará por pantalla, es importante destacar que Linux permite distinguir entre stderr y stdout para manipular ambas secuencias de manera separada. El descriptor de archivo es el 2.

OPEN - abre y o crea un archivo.

int open(const char *ruta, int flags);
int open(const char *ruta, int flags, mode_t modo); <!-- int open ( char* nombre, int modo, int permisos ); -->
Objetivo: La llamada al sistema open se utiliza para transformar una ruta de archivo a un descriptor de arhivo (un valor entero no negativo que se utiliza para identificar al archivo abierto).
parametros:
	camino: es un arreglo que almacena la ruta del archivo por abrir.
	flags: es una bandera que le indica a open el modo de apertura, puede ser: sólo lectura (O_RDONLY), sólo escritura (O_WRONLY), lectura/escritura (O_RDWR), O_APPEND, etc.
	mode_t modo: es una bandera que le indica a open los permisos que se le asignarán al archivo si este no existia y se le indicó a open crearlo con la bandera O_CREAT.
retorno: open regresa un entero el cual es el descriptor de archivo o -1 en caso de error.


READ - lee un descriptor de archivo

ssize_t read(int fd, void *buf, size_t nbytes);
descripcion: read almacena en buf los nbytes leidos del archivo referenciado por (fd).
parametros:
	fd: es un descriptor al archivo que se intenta leer con read.
	buf: es la localidad en memoria donde se almacenaran los bytes leidos.
	nbytes: es el numero de bytes que se intentaran leer del archivo.
	retorno: read regresa un valor de tipo ssize_t, un entero que indica el numero de bytes leeidos ó -1 en caso de error.


WRITE - escribe a un descriptor de archivo.

ssize_t write(int fd, const void *buf, size_t nbytes);
descripcion: write escribe hasta nbytes de la localidad de memoria referenciada por buf en el archivo referenciado por fd.
parametros:
	fd: es un descriptor al archivo que se intenta escribir con write.
	buf: es la localidad de memoria que almacena la informacion que se va escribir por write.
	nbytes: es el numero maximo de bytes que se van a escribir al archivo.
retorno: -1 en caso de error o un valor de tipo ssize_t que indica el numero de bytes escritos.


CLOSE - cierra un descriptor de archivo

int close (int fd);
Descripcion: close cierra un descriptor de archivo de manera que pueda ser reutilizado por el sistema.
close no garantiza que los datos del archivo se hayan escrito en el disco por lo que se
recomienda el uso de fsync.
parametros: Un Descriptor de archivo abierto.
retorno: 0 en caso de éxito y 1 en caso de error.

