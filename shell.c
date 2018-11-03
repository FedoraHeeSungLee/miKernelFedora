#include "../include/shell.h"

void launch_shell()
{
	string ch = (string) malloc(200); // util.h
	do
	{
		    print("\n");
		    print("miKernelFedora> ");
		    ch = readStr();
		    if(strEql(ch,"calculadora"))
		    {
		      Calculadora();
		    }
		    else if(strEql(ch,"sonidostart"))
		    {
		      soundstart();
		    }
		    else if(strEql(ch,"sonidoend"))
		    {
			soundend();
		    }
		    else if(strEql(ch,"apagar"))
		    {
		      shutasm();
		    }
		    else if(strEql(ch,"reiniciar"))
		    {
		      restartasm();
		    }
		    else
		    {
		            print("\nLa opcion ingresada no es valida\n");
		    } 
	} while (!strEql(ch,"apagar"));
}
void Calculadora()
{
    string comando = (string) malloc(200);
    print("\n\n");
    print("======================================================\n");
    print("Instrucciones: Ingrese los comandos para seleccionar una opcion\n\n");
    print(" suma\n");
    print(" resta\n");
    print(" multiplicacion\n");
    print(" division\n");
    print("======================================================\n\n");
    print("miKernelFedora/calculadora> ");
    comando = readStr();
    if(strEql(comando,"suma"))
    {
      Sumar();
    }
    else if(strEql(comando,"resta"))
    {
      Restar();
    }
    else if(strEql(comando,"multiplicacion"))
    {
      Multiplicar();
    }
    else if(strEql(comando,"division"))
    {
      Dividir();
    }
    else
    {
      print("\nLa opcion ingresada no es valida\n");
    } 
}

void Multiplicar()
{
	print("\nPrimer Numero :");
	int num1 = str_to_int(readStr());
	print("\nSegundo Numero :");
	int num2 = str_to_int(readStr());
	print("\nResultado : ");
	print(int_to_string(num1*num2)); // util.h
	print("\n\n");
}
void Sumar()
{
	print("\nPrimer Numero :");
	int num1 = str_to_int(readStr());
	print("\nSegundo Numero :");
	int num2 = str_to_int(readStr());
	print("\nResultado : ");
	print(int_to_string(num1+num2)); // util.h
	print("\n\n");
}
void Restar()
{
	print("\nPrimer Numero :");
	int num1 = str_to_int(readStr());
	print("\nSegundo Numero :");
	int num2 = str_to_int(readStr());
	print("\nResultado : ");
	print(int_to_string(num1-num2)); // util.h
	print("\n\n");
}
void Dividir()
{
	print("\nPrimer Numero :");
	int num1 = str_to_int(readStr());
	print("\nSegundo Numero :");
	int num2 = str_to_int(readStr());
	print("\nResultado : ");
	print(int_to_string(num1/num2)); // util.h
	print("\n\n");
}

