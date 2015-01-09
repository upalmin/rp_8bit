#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    const int msDelay = 50;

    // PortB pin4 to output (set bit to 1 using SHL)
    DDRB = 1<<DDB4;

    // PortB to low
    PORTB = 0;

    while (1) {
        // XOR on pin 4
        PORTB ^= 1<<PB4;
        _delay_ms(msDelay);
    }

    return 0;
}
