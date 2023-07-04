void MotorX_control(int sp) {
    if (sp < 0) {
        digitalWrite(DIR_x, LOW);
        sp = -sp;
    } else {
        digitalWrite(DIR_x, HIGH);
    }
    pwmSet(PWM1_CH, sp > 255 ? 255 : 255 - sp);
}