

#include<stdio.h>
#include<stdint.h>

struct packet{

		uint8_t crc;
		uint8_t status;
		uint16_t payload;
		uint8_t bat;
		uint8_t sensor;
		uint8_t long_addr;
		uint8_t short_addr;
		uint8_t addrMode;
	};

int main(void)
{

	uint32_t value;
	printf("Enter the 32bit packet value:");
	scanf("%X", &value);

	struct packet data;
	data.crc = (uint8_t) (value & 0x3);
	data.status = (uint8_t) ((value >> 2) & 0x1);
	data.payload = (uint16_t) ((value >> 3) & 0xFFF);
	data.bat= (uint8_t) ((value >> 15) & 0x7);
	data.sensor= (uint8_t) ((value >> 18) & 0x7);
	data.long_addr= (uint8_t) ((value >> 21) & 0xFF);
	data.short_addr= (uint8_t) ((value >> 29) & 0x7);
	data.addrMode= (uint8_t) ((value >> 31) & 0x1);



	printf("Crc         = %#x\n", data.crc);
	printf("Status      = %#x\n", data.status);
	printf("Payload     = %#x\n", data.payload);
	printf("Bat         = %#x\n", data.bat);
	printf("Sensor      = %#x\n", data.sensor);
	printf("Long_addr   = %#x\n", data.long_addr);
	printf("Short_addr  = %#x\n", data.short_addr);
	printf("AddrMode    = %#x\n", data.addrMode);

	while(getchar() != '\n'){


	}
	getchar();

}
