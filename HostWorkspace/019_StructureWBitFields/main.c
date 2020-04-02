/*
 * main.c
 *
 *  Created on: Apr 2, 2020
 *      Author: nemus
 */
#include <stdio.h>
#include <stdint.h>

typedef struct
{
	uint32_t crc		:2;
	uint32_t status		:1;
	uint32_t payload	:12;
	uint32_t bat		:3;
	uint32_t sensor		:3;
	uint32_t longAddr	:8;
	uint32_t shortAddr	:2;
	uint32_t addrMode	:1;
}Packet_t;

void parse_data(Packet_t *packet, uint32_t *packet_data);
void print_struct(Packet_t *packet);

int main(void)
{
	Packet_t Packet;
	Packet_t *ptrPacket = &Packet;

	uint32_t packet_data;
	uint32_t *ptrPacket_data = &packet_data;

	printf("\nPlease enter packet data: ");
	scanf("%X", &packet_data);

	parse_data(ptrPacket, ptrPacket_data);
	print_struct(ptrPacket);

	return 0;
}


void parse_data(Packet_t *packet, uint32_t *packet_data)
{
	packet->crc = (uint8_t)(*packet_data & 0x03);
	packet->status = (uint8_t)((*packet_data >> 2) & 0x01);
	packet->payload = (uint16_t)((*packet_data >> 3) & 0xFFF);
	packet->bat = (uint8_t)((*packet_data >> 15) & 0x07);
	packet->sensor = (uint8_t)((*packet_data >> 18) & 0x07);
	packet->longAddr = (uint8_t)((*packet_data >> 21) & 0xFF);
	packet->shortAddr = (uint8_t)((*packet_data >> 29) & 0x03);
	packet->addrMode = (uint8_t)((*packet_data >> 31) & 0x01);
}


void print_struct(Packet_t *packet)
{
	printf("\nStructure: ");
	printf("\nCRC: %#x", packet->crc);
	printf("\nStatus: %#x", packet->payload);
	printf("\nBat: %#x", packet->bat);
	printf("\nSensor: %#x", packet->sensor);
	printf("\nLong address: %#x", packet->longAddr);
	printf("\nShort address: %#x", packet->shortAddr);
	printf("\nAddress mode: %#x", packet->addrMode);

	printf("\nSize of structure: %lu", sizeof(*packet));
}
