/*
 *        FILE: Debug.h
 * DESCRIPTION: Header for a library useful for debugging
 *      AUTHOR: Loredan E. Bucur
 *   LAST_EDIT: Jan 2016
 */

#ifndef DEBUG_H_INCLUDED
#define DEBUG_H_INCLUDED

int get_free_ram();

#if DEBUG //no problem if not defined at all
#define DBG_begin(baud_rate) while(!Serial); Serial.begin(baud_rate)
#define DBG_print(msg) Serial.print(msg)
#define DBG_println(msg) Serial.println(msg)
#define DBG_prints(msg) Serial.print(F(msg))
#define DBG_printsln(msg) Serial.println(F(msg))
#define DBG_printf(msg, format) Serial.print(msg, format) //format = {DEC, HEX, OCT, BIN, float_precision}
#define DBG_printfln(msg, format) Serial.println(msg, format)
#define DBG_write(msg) Serial.write(msg)

#else //not defined or zero
#define DBG_begin(baud_rate)
#define DBG_print(msg)
#define DBG_println(msg)
#define DBG_prints(msg) Serial.print(F(msg))
#define DBG_printsln(msg) Serial.println(F(msg))
#define DBG_printf(msg, format)
#define DBG_printfln(msg, format)
#define DBG_write(msg)
#endif //DEBUG

#endif //DEBUG_H_INCLUDED
