#ifndef _THREAD1_H_
#define _THREAD1_H_

#include "ch.h"
#include "hal.h"

#define THREAD_SIZE (1 << 7)

// Example blinker thread prototypes
extern THD_WORKING_AREA(waThread1, THREAD_SIZE);
extern THD_FUNCTION(Thread1, arg);

#endif
