#include "WProgram.h"
/*
Codice per Sensore di temperatura LM35

allanon ^_^
*/ 

int OutputPin = 0; // analog pin
float Temp = 0; // temperatura In gradi Celsius
float Temp_max = -100, Temp_min = 100; // to start max/min temperature
const int N  = 3; 	// numero di campioni prelevati 
					//(per avere una maggiore precisione nella misura ^_^)
float campioni[N]; // variables to make a better precision
int i;
const int Dec = 2; // numero di cifre da mostrare dopo la virgola

void setup()
{
	Serial.begin(9600); // start serial communication
	Temp = 0;
}

void loop()
{
	for(i = 0; i < N; i++){ // gets N campioni of temperature
	campioni[i] = ( 5.0 * analogRead(OutputPin) * 100.0) / 1024.0;
	Serial.print(campioni[i],Dec);
	if (i !=2 ) {Serial.print("/");}
	Temp = Temp + campioni[i];
	delay(500);

}

Temp = Temp/N; // better precision

if(Temp > Temp_max) {Temp_max = Temp;} // set max temperature
if(Temp < Temp_min) {Temp_min = Temp;} // set min temperature

Serial.print(" => Media: ");
Serial.print(Temp,Dec);
Serial.print(" Celsius  ");

Serial.print(" (Max ");
Serial.print(Temp_max,Dec);

Serial.print(", Min ");
Serial.print(Temp_min,Dec);
Serial.print(")");
Serial.println("");

Temp = 0; // reset prima del successivo loop
delay(1000); // delay before loop
}
