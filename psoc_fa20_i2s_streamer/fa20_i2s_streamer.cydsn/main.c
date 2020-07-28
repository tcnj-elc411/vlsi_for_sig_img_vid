#include "project.h"

int volatile force_value;

extern int volatile out_value[2];

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    force_value = 0;
    
    Clock_1_Start();
    
    isr_adc_eoc_Start();
    isr_i2s_rx_Start();
    isr_i2s_tx_Start();
    
    ADC_Start();
    DAC_Start();
    I2S_Start();
    
    I2S_ClearTxFIFO();
    I2S_ClearRxFIFO();
    
    // Aaargh!  Evidently there must be some delay between Start() and EnableTx()!
    CyDelay(100);
    I2S_EnableTx();

    CyDelay(100);
    I2S_EnableRx();
    
    for(;;)
    {
        while (SW2_Read() && SW3_Read()) {}
        ++force_value;
        CyDelay(100);
        while ((!SW2_Read()) || (!SW3_Read())) {}
        CyDelay(100);
    }
}

