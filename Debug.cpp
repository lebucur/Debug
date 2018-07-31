/*
 *        FILE: Debug.cpp
 * DESCRIPTION: C++ source code for a debugging library
 *      AUTHOR: Loredan E. Bucur
 *   LAST_EDIT: Jan 2016
 */

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h" //for Serial and other stuff
#else
	#include "WProgram.h"
#endif

#include "Debug.h"

int get_free_ram()
{
    extern unsigned __heap_start;
    extern unsigned * __brkval;
    int a;
    return (int) &a - (__brkval == 0 ? (int) &__heap_start : (int) __brkval); 
}
