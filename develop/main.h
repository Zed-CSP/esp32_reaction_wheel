
// axis x, y, z
#define DIR_x        4
#define PWM_x       32
#define PWM_x_CH     1

#define DIR_y        15
#define PWM_y        25
#define PWM_y_CH     0

#define DIR_z        5
#define PWM_z        18
#define PWM_z_CH     2

// encoder

#define ENC_x_A      34
#define ENC_x_B      35

#define ENC_y_A      26
#define ENC_y_B      27

#define ENC_z_A      14
#define ENC_z_B      12

//timer
#define TIMER_res        8
#define TIMER_freq       10000

//addressing
#define MPU6050       0x68
#define ACCEL_CONFIG  0x1C
#define GYRO_CONFIG   0x1B

// accessories

//#define LED          2
//#define BUTTON       0

// serial

#define SERIAL_BAUD  115200

// PID

#define PID_KP       0.1
#define PID_KI       0.1
#define PID_KD       0.1

// motor

#define MOTOR_MAX    255
#define MOTOR_MIN    0