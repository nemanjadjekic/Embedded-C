/*
 * main.c
 *
 *  Created on: Apr 2, 2020
 *      Author: nemus
 */
#include <stdio.h>
#include <stdint.h>

typedef union
{
	uint32_t packet_data;
	struct
	{
		uint32_t crc		:2;
		uint32_t status		:1;
		uint32_t payload	:12;
		uint32_t bat		:3;
		uint32_t sensor		:3;
		uint32_t longAddr	:8;
		uint32_t shortAddr	:2;
		uint32_t addrMode	:1;
	}packetFields;
}Packet_t;


void print_union(Packet_t *packet);

int main(void)
{
	Packet_t Packet;
	Packet_t *ptrPacket = &Packet;

	printf("\nPlease enter packet data: ");
	scanf("%X", &(ptrPacket->packet_data));

	print_union(ptrPacket);

	return 0;
}


void print_union(Packet_t *packet)
{
	printf("\nStructure: ");
	printf("\nCRC: %#x", packet->packetFields.crc);
	printf("\nStatus: %#x", packet->packetFields.payload);
	printf("\nBat: %#x", packet->packetFields.bat);
	printf("\nSensor: %#x", packet->packetFields.sensor);
	printf("\nLong address: %#x", packet->packetFields.longAddr);
	printf("\nShort address: %#x", packet->packetFields.shortAddr);
	printf("\nAddress mode: %#x\n", packet->packetFields.addrMode);

	printf("\nSize of union: %lu", sizeof(*packet));
}
