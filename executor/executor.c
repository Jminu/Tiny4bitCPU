#include "executor.h"
#include "../fetcher/fetcher.h"
#include "../register/register.h"

extern unsigned char R0;
extern unsigned char R1;
extern unsigned char R2;
extern unsigned char R3;

void mov_execute_copy(unsigned char *dest_reg, unsigned char *src_reg)
{
    set_register_copy(dest_reg, src_reg);
}

void mov_execute_immediate(unsigned char* dest_reg, unsigned char value)
{
    set_register_immediate(dest_reg, value);
}