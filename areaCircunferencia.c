#include <stdio.h>
#include <locale.h>

#define PI 3.1416

main() {
    setlocale(LC_ALL, ""); // Configura la regi�n seg�n la configuraci�n predeterminada del sistema

    float radio, area;

    printf("Calcula el �rea de una circunferencia\n");
    printf("Ingresa el radio: ");
    scanf("%f", &radio);

    // Captura el car�cter de nueva l�nea dejado por scanf
    getchar(); 

    area = PI * radio * radio;
    printf("�rea = %.2f\n", area);

    printf("Presiona cualquier tecla para salir...");
    getchar(); // Espera una entrada del usuario antes de cerrar la ventana

}

