#ifndef _MAGICBANDTX_H_
#define _MAGICBANDTX_H_

#include "ch.h"
#include "hal.h"

//#define PWM_TIMER_FREQ  1016e5  /// Hz
//#define PWM_FREQ        508e5   /// periods per sec
//#define PWM_TIMER_FREQ  508e5  /// Hz
//#define PWM_FREQ        508e5   /// periods per sec
#define PWM_PERIOD      PWM_TIMER_FREQ/PWM_FREQ

#define THREAD_SIZE (1 << 7)

/*
 * Serial output usage:
 *
 * chprintf(DEBUG_CHP, message, arg);
 *
 */
#define CH_DBG_SYSTEM_STATE_CHECK TRUE
#define DEBUG_SERIAL SD2
#define DEBUG_CHP ((BaseSequentialStream *) &DEBUG_SERIAL)


// Example blinker thread prototypes
//extern THD_WORKING_AREA(waThread1, THREAD_SIZE);
//extern THD_FUNCTION(Thread1, arg);

extern void pwm_init(void);

#endif
