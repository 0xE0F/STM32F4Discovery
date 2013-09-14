#include <stm32f4xx.h>
#include <stm32f4_discovery.h>

int main()
{
    STM_EVAL_LEDInit(LED3);
    STM_EVAL_LEDInit(LED4);
    STM_EVAL_LEDInit(LED5);
    STM_EVAL_LEDInit(LED6);
    
    STM_EVAL_LEDOff(LED4);
    STM_EVAL_LEDOff(LED6);
    STM_EVAL_LEDOn(LED3);
    STM_EVAL_LEDOn(LED5);
    
    while(1) {;}    
}
