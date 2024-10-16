/* Juego los Chinos
Autor: Santiago Martín
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Definir constantes
#define MAX_JUGADORES 4
#define MAX_NOMBRE 20
#define MAX_MONEDAS 3

// Función para generar nombres aleatorios para la IA
void generarNombreIA(char nombreIA[][MAX_NOMBRE], int cantidad) {
    char *nombres[] = {"Carlos", "Marta", "Juan", "Claudia"};
    for (int i = 0; i < cantidad; i++) {
        strcpy(nombreIA[i], nombres[i % 4]); // Reutilizamos nombres si hay más de 4 IA
    }
}

// Función para registrar los nombres de los jugadores
void registrarNombres(char nombres[][MAX_NOMBRE], int jugadoresHumanos) {
    for (int i = 0; i < jugadoresHumanos; i++) {
        printf("Introduce el nombre del Jugador %d: ", i + 1);
        scanf("%s", nombres[i]);
    }
}

// Función para hacer predicción de monedas según nivel de dificultad
int prediccionIA(int totalJugadores, int maxMonedas, int nivelDificultad, int* rondasAnteriores) {
    switch (nivelDificultad) {
        case 1: // Fácil: Predicción aleatoria
            return rand() % (totalJugadores * maxMonedas + 1);
        case 2: // Medio: Basado en las rondas anteriores
            if (rondasAnteriores[0] != -1) {
                // IA intenta adivinar algo cercano al promedio de las rondas pasadas
                int suma = 0;
                for (int i = 0; i < 3; i++) {
                    if (rondasAnteriores[i] != -1) {
                        suma += rondasAnteriores[i];
                    }
                }
                int promedio = suma / 3;
                return promedio + (rand() % 3 - 1); // Ajuste pequeño al promedio
            }
            return rand() % (totalJugadores * maxMonedas + 1);
        case 3: // Difícil: Estrategia de maximización basada en la historia del jugador
            return totalJugadores * maxMonedas - 1; // IA predice el máximo menos 1
        default:
            return rand() % (totalJugadores * maxMonedas + 1);
    }
}

// Función principal del juego
int main() {
    // Variables
    char nombres[MAX_JUGADORES][MAX_NOMBRE]; // Nombres de los jugadores
    int monedas[MAX_JUGADORES]; // Monedas que cada jugador tiene en cada ronda
    int predicciones[MAX_JUGADORES]; // Predicciones de cada jugador
    int totalMonedas = 0;
    int jugadoresHumanos, jugadoresIA;
    int ganador = -1;
    int rondasAnteriores[3] = {-1, -1, -1}; // Guardar las últimas tres rondas
    int dificultadIA = 2; // Dificultad de la IA: 1 (fácil), 2 (medio), 3 (difícil)

    // Inicializar generador de números aleatorios
    srand(time(NULL));

    // Pedir número de jugadores humanos e IA
    printf("¿Cuantos jugadores humanos van a jugar (1 a 3)? ");
    scanf("%d", &jugadoresHumanos);

    jugadoresIA = MAX_JUGADORES - jugadoresHumanos; // El resto serán IA

    // Pedir la dificultad de la IA
    printf("Selecciona la dificultad de la IA (1: Facil, 2: Medio, 3: Dificil): ");
    scanf("%d", &dificultadIA);

    // Registrar nombres de los jugadores humanos
    registrarNombres(nombres, jugadoresHumanos);

    // Generar nombres para la IA
    generarNombreIA(nombres + jugadoresHumanos, jugadoresIA);

    printf("\nJugadores en la partida:\n");
    for (int i = 0; i < MAX_JUGADORES; i++) {
        printf("Jugador %d: %s\n", i + 1, nombres[i]);
    }

    // Comenzar el juego
    while (ganador == -1) {
        totalMonedas = 0;

        // Cada jugador elige cuántas monedas pone (IA lo elige aleatoriamente)
        for (int i = 0; i < MAX_JUGADORES; i++) {
            if (i < jugadoresHumanos) {
                // Jugador humano
                printf("%s, Cuantas monedas pones (0 a 3)? ", nombres[i]);
                scanf("%d", &monedas[i]);
            } else {
                // Jugador IA
                monedas[i] = rand() % (MAX_MONEDAS + 1);
                printf("%s ha puesto monedas.\n", nombres[i]);
            }
            totalMonedas += monedas[i];
        }

        // Los jugadores hacen sus predicciones
        for (int i = 0; i < MAX_JUGADORES; i++) {
            if (i < jugadoresHumanos) {
                // Predicción de jugador humano
                printf("%s, Cuantas monedas crees que hay en total? ", nombres[i]);
                scanf("%d", &predicciones[i]);
            } else {
                // Predicción de IA con niveles de dificultad
                predicciones[i] = prediccionIA(MAX_JUGADORES, MAX_MONEDAS, dificultadIA, rondasAnteriores);
                printf("%s predice que hay %d monedas.\n", nombres[i], predicciones[i]);
            }
        }

        // Mostrar todas las monedas y total
        printf("\nMonedas puestas por los jugadores:\n");
        for (int i = 0; i < MAX_JUGADORES; i++) {
            printf("%s: %d monedas\n", nombres[i], monedas[i]);
        }
        printf("Total de monedas: %d\n", totalMonedas);

        // Verificar si alguien acertó
        for (int i = 0; i < MAX_JUGADORES; i++) {
            if (predicciones[i] == totalMonedas) {
                ganador = i;
                break;
            }
        }

        // Actualizar rondas anteriores
        for (int i = 2; i > 0; i--) {
            rondasAnteriores[i] = rondasAnteriores[i - 1];
        }
        rondasAnteriores[0] = totalMonedas;

        if (ganador == -1) {
            printf("Nadie acerto, siguiente ronda...\n\n");
        }
    }

    printf("\n%s Ha ganado al adivinar correctamente!\n", nombres[ganador]);

    return 0;
}


