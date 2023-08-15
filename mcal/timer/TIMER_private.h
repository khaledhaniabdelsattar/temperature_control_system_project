
#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_

#define Timer_NormalMode				1
#define Timer_PWMPhaseCorrectMode		2
#define Timer_CTCMode					3
#define Timer_FastPWMMode				4

void __vector_11 (void) __attribute__((signal));
void __vector_10 (void) __attribute__((signal));
void __vector_9 (void) __attribute__((signal));
void __vector_8 (void) __attribute__((signal));
void __vector_7 (void) __attribute__((signal));
void __vector_6 (void) __attribute__((signal));
void __vector_5 (void) __attribute__((signal));
void __vector_4 (void) __attribute__((signal));

#endif
