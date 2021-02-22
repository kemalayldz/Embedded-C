

#include<stdio.h>
#include<stdint.h>

union packet{
		uint32_t value;
		struct{
		uint32_t crc       : 2;
		uint32_t status    : 1;
		uint32_t payload   : 12;
		uint32_t bat       : 3;
		uint32_t sensor    : 3;
		uint32_t long_addr : 8;
		uint32_t short_addr: 2;
		uint32_t addrMode  : 1;
		}packetFields;
	};

int main(void)
{

	union packet Packet;
	printf("Enter the 32bit packet value:");
	scanf("%X", &Packet.value);




	printf("Crc         = %#x\n", Packet.packetFields.crc);
	printf("Status      = %#x\n", Packet.packetFields.status);
	printf("Payload     = %#x\n", Packet.packetFields.payload);
	printf("Bat         = %#x\n", Packet.packetFields.bat);
	printf("Sensor      = %#x\n", Packet.packetFields.sensor);
	printf("Long_addr   = %#x\n", Packet.packetFields.long_addr);
	printf("Short_addr  = %#x\n", Packet.packetFields.short_addr);
	printf("AddrMode    = %#x\n", Packet.packetFields.addrMode);

	while(getchar() != '\n'){


	}
	getchar();

}
