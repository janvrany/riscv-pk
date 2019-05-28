#ifndef _RISCV_FINISHER_H
#define _RISCV_FINISHER_H

#include <stdint.h>

extern volatile uint32_t* finisher;

#define FINISHER_REG_FINISH	0
#define FINISHER_FAIL		0x3333
#define FINISHER_PASS		0x5555

void finisher_exit(uint16_t code);

#endif
