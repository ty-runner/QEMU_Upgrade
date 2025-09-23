#include <stdint.h>

extern int main(void);

void Reset_Handler(void);

__attribute__((section(".isr_vector")))
void (* const g_pfnVectors[])(void) = {
    (void (*)(void)) (0x20020000), // initial stack pointer (128KB SRAM end)
    Reset_Handler                  // reset handler
};

void Reset_Handler(void) {
    main();
    while (1) {}
}

