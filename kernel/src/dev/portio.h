#ifndef DEV_PORTIO_H
#define DEV_PORTIO_H

#include <stdint.h>

void outb(uint16_t port, uint8_t value);
uint8_t inb(uint16_t port);
void outw(uint16_t port, uint16_t value);
uint16_t inw(uint16_t port);

#endif // DEV_PORTIO_H