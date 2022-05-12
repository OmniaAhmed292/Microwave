void Port_Init(unsigned char portname);
unsigned char ReadPort(unsigned char portname);
unsigned char ReadPin (unsigned char portName,unsigned pinNum);
void writePin(unsigned char portName,unsigned char pinNumber,unsigned char data);
void enable_PullUP (unsigned char port_name, unsigned char pin_num);
void Set_pinDirection (unsigned char port_name, unsigned char pin_num, unsigned char direction);
void write_port(unsigned char port_name,unsigned char data);
void write_highnibble(unsigned char port_name,unsigned char data);
void write_lownibble(unsigned char port_name,unsigned char data);
