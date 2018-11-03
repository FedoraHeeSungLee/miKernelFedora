#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"
kmain()
{
    isr_install();
    clearScreen();
    print("================================================================\n");
    print("Bienvenido al sistema operativo del group Fedora\n\n");
    print(" Instrucciones: Ingrese los comandos para seleccionar una opcion\n\n");
    print("  calculadora: Ejecuta la calculadora\n");
    print("  sonidostart: Ejecuta la emision de sonido\n");
    print("  sonidoend: Termina la emision de sonido\n");
    print("  reiniciar: Reinicia el sistema\n");
    print("  apagar: Apaga el sistema\n");
    print("================================================================\n\n");
    launch_shell();  
    
}
