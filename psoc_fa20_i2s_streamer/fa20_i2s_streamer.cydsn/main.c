#include "project.h"

int volatile force_value;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    force_value = 0;
    
    Clock_1_Start();
    
    ADC_Start();
    DAC_Start();
    I2S_Start();
    
    // Aaargh!  Evidently there must be some delay between Start() and EnableTx()!
    CyDelay(1000);
    
    I2S_EnableTx();
    //I2S_EnableRx();
    
    isr_adc_eoc_Start();
//   isr_i2s_rx_Start();
//   isr_i2s_tx_Start();
    
    for(;;)
    {
        while (SW2_Read() && SW3_Read()) {}
        ++force_value;
        CyDelay(100);
        while ((!SW2_Read()) || (!SW3_Read())) {}
        CyDelay(100);
    }
}

