/*
 * AUTHOR: Loredan E. Bucur
 * LAST_EDIT: 2014
 *
 */

#ifndef DEBUG_H_INCLUDED
#define DEBUG_H_INCLUDED

//include only what is needed
//must use namespaces in header files

namespace DB
{
	/*extern L_C is declared here, in this header - which is included in multiple source files,
	but defined (only) in Debug.cpp */
	extern unsigned LOOP_COUNT; //65536 iterations; 
	void serialEvent(char);
	//int freeRam();
}

#if DEBUG //no problem if not defined at all
//things to be removed when final product shall be released
#define DB_begin(baud_rate) while(!Serial); Serial.begin(baud_rate)
#define DB_print(msg) Serial.print(msg)
#define DB_println(msg) Serial.println(msg)
#define DB_prints(msg) Serial.print(F(msg))
#define DB_printsln(msg) Serial.println(F(msg))
#define DB_printf(msg, format) Serial.print(msg, format) //format = {DEC, HEX, OCT, BIN, float_precision}
#define DB_printfln(msg, format) Serial.println(msg, format)
#define DB_write(msg) Serial.write(msg)

#else //not defined or zero
#define DB_begin(baud_rate)
#define DB_print(msg)
#define DB_println(msg)
#define DB_prints(msg) Serial.print(F(msg))
#define DB_printsln(msg) Serial.println(F(msg))
#define DB_printf(msg, format)
#define DB_printfln(msg, format)
#define DB_write(msg)
#endif //DEBUG

#endif //DEBUG_H_INCLUDED
