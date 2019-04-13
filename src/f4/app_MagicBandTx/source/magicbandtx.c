#include "magicbandtx.h"

//*
static PWMConfig pwmcfg = 
{
  PWM_TIMER_FREQ,
  PWM_PERIOD,
  NULL,
  {
   {PWM_OUTPUT_ACTIVE_HIGH, NULL},
   {PWM_OUTPUT_DISABLED, NULL},
   {PWM_OUTPUT_DISABLED, NULL},
   {PWM_OUTPUT_DISABLED, NULL}
  },
  0,
  0
};
//*/

//*
void pwm_init(void)
{
  pwmStart(&PWMD1, &pwmcfg);
  pwmEnablePeriodicNotification(&PWMD1);
  
  palSetPadMode(GPIOA, 8, PAL_MODE_ALTERNATE(1));
  chThdSleepMilliseconds(2000);

  // Changes the PWM channel 0 to 50% duty cycle.
  pwmEnableChannel(&PWMD1, 0, PWM_PERCENTAGE_TO_WIDTH(&PWMD1, 5000));
//  pwmEnableChannelNotification(&PWMD1, 0);
  chThdSleepMilliseconds(5000);

  // Changes PWM period to half second the duty cycle becomes 50%
  // implicitly.
 // pwmChangePeriod(&PWMD1, 5000);
  chThdSleepMilliseconds(5000);

//  Disables channel 0 and stops the drivers.
//  pwmDisableChannel(&PWMD1, 0);
//  pwmStop(&PWMD1);
}
//*/

// Example blinker thread
/*
THD_WORKING_AREA(waThread1, THREAD_SIZE);
THD_FUNCTION(Thread1, arg) 
{
  (void)arg;
  chRegSetThreadName("thread1");

  palSetLineMode(LINE_LED_GREEN, PAL_MODE_OUTPUT_PUSHPULL);

  while (!chThdShouldTerminateX()) {
    palClearLine(LINE_LED_GREEN);
    chThdSleepMilliseconds(500);
    palSetLine(LINE_LED_GREEN);
    chThdSleepMilliseconds(500);
  }
}
//*/
