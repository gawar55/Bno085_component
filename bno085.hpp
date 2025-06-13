#ifndef BNO085_HPP
#define BNO085_HPP

#include <driver/gpio.h>
#include <driver/uart.h>

#define TAG "BNO085_UART"

#define UART_NUM UART_NUM_1

class bno{
private:
    float actual_yaw = 0.0;
    float actual_pitch = 0.0;
    float actual_roll = 0.0;
    float acc_x = 0.0;
    float acc_y = 0.0;
    float acc_z = 0.0;

    float get_Yaw();
public:
    
    bno(gpio_num_t TX_PIN,gpio_num_t RX_PIN,int BUF_SIZE,uart_port_t UART_NUM); 
    void read(uint8_t* data , size_t buffer_size);
    
    float getYaw() const {
        return actual_yaw;
    }
};

#endif //BNO085_HPP