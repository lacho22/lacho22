/**
 * Aruthor    :Horacio Rosales Velasco
 * Date       :17102021
 * Apliación que determina si ina persona es mayor de edad
 * a partir de la fecha de nacimiento.
 * */
#include <stdio.h>
 
 int main(){ //mainmethod
 	//Declaración de variables
	int fecha_nacimiento;
        int fecha_actual = 2021;
	int diferencia = 0;

	//solicitar datos
	printf("Digitar anio de nacimiento ");
	scanf("%d", &fecha_nacimiento);

	//procesamiento de datos
	diferencia = (fecha_actual - fecha_nacimiento);

	//presentación de resultados
	if(diferencia >= 18){//ifelse
		printf("%s %d %s", "El usuario tiene ", diferencia," por lo tanto es mayor de edad");
	}else{
		printf("%s %d %s", "El usuario tiene ", diferencia," por lo tanto es menor de edad");
	}//end ifelse


 }//end mainmethod
