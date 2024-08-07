#include <stdio.h>
#include <locale.h>

#define PI 3.1416

main() {
    setlocale(LC_ALL, ""); // Configura la región según la configuración predeterminada del sistema

    float radio, area;

    printf("Calcula el área de una circunferencia\n");
    printf("Ingresa el radio: ");
    scanf("%f", &radio);

    // Captura el carácter de nueva línea dejado por scanf
    getchar(); 

    area = PI * radio * radio;
    printf("Área = %.2f\n", area);

    printf("Presiona cualquier tecla para salir...");
    getchar(); // Espera una entrada del usuario antes de cerrar la ventana

}

