#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()
{
	int hex[388] = { 0x2e, 0x2e, 0x2e, 0x7b, 0x76, 0x20, 0x66, 0x62, 0x72, 0x20, 0x63, 0x7e, 0x72, 0x79, 0x72, 0x20, 0x7B, 0x76, 0x20, 0x7E, 0x79, 0x71, 0x78, 0x65, 0x7A, 0x76, 0x74, 0x7e, 0xd4, 0xa4, 0x79, 0x2c, 0x20, 0x63, 0x7e, 0x72, 0x79, 0x72, 0x20, 0x72, 0x7B, 0x20, 0x67, 0x78, 0x73, 0x72, 0x65, 0x2e, 0x2e, 0x2e, 0x7b, 0x76, 0x20, 0x66, 0x62, 0x72, 0x20, 0x63, 0x7e, 0x72, 0x79, 0x72, 0x20, 0x7b, 0x76, 0x20, 0x7e, 0x79, 0x71, 0x78, 0x65, 0x7a, 0x76, 0x74, 0x7e, 0xd4, 0xa4, 0x79, 0x2c, 0x20, 0x63, 0x7e, 0x72, 0x79, 0x72, 0x20, 0x72, 0x7b, 0x20, 0x67, 0x7b, 0x73, 0x72, 0x65, 0x2e, 0x2e, 0x2e, 0x7b, 0x76, 0x20, 0x66, 0x62, 0x72, 0x20, 0x63, 0x7e, 0x72, 0x79, 0x72, 0x20, 0x7b, 0x76, 0x20, 0x7e, 0x79, 0x71, 0x7b, 0x65, 0x7a, 0x76, 0x74, 0x7e, 0xd4, 0xa4, 0x79, 0x2c, 0x20, 0x63, 0x7e, 0x72, 0x79, 0x72, 0x20, 0x72, 0x7b, 0x20, 0x67, 0x78, 0x73, 0x72, 0x65, 0x2e, 0x2e, 0x2e, 0x7b, 0x76, 0x20, 0x66, 0x62, 0x72, 0x20, 0x63, 0x7e, 0x72, 0x79, 0x72, 0x20, 0x7b, 0x76, 0x20, 0x7e, 0x79, 0x71, 0x78, 0x65, 0x7a, 0x76, 0x74, 0x7e, 0xd4, 0xa4, 0x79, 0x2c, 0x20, 0x63, 0x7e, 0x72, 0x79, 0x72, 0x20, 0x72, 0x7b, 0x20, 0x67, 0x78, 0x73, 0x72, 0x65, 0x2e, 0x2e, 0x2e, 0x64, 0x78, 0x7a, 0x75, 0x65, 0x76, 0x2E, 0x2E, 0x2E, 0x7B, 0x76, 0x20, 0x66, 0x62, 0x72, 0x20, 0x63, 0x7E, 0x72, 0x79, 0x72, 0x20, 0x7B, 0x76, 0x20, 0x7E, 0x79, 0x71, 0x78, 0x65, 0x7A, 0x76, 0x74, 0x7E, 0xD4, 0xA4, 0x79, 0x2C, 0x20, 0x63, 0x7E, 0x72, 0x79, 0x72, 0x20, 0x72, 0x7B, 0x20, 0x67, 0x78, 0x73, 0x72, 0x65, 0x2E, 0x2E, 0x2E, 0x7B, 0x76, 0x20, 0x66, 0x62, 0x72, 0x20, 0x63, 0x7E, 0x72, 0x79, 0x72, 0x20, 0x7B, 0x76, 0x20, 0x7E, 0x79, 0x71, 0x78, 0x65, 0x7A, 0x76, 0x74, 0x7E, 0x04, 0xA4, 0x79, 0x2C, 0x20, 0x63, 0x7E, 0x72, 0x79, 0x72, 0x20, 0x72, 0x7B, 0x20, 0x67, 0x78, 0x73, 0x72, 0x65, 0x2E, 0x2E, 0x2E, 0x7B, 0x76, 0x20, 0x66, 0x62, 0x72, 0x20, 0x63, 0x7E, 0x72, 0x79, 0x72, 0x20, 0x7B, 0x76, 0x20, 0x7E, 0x79, 0x71, 0x78, 0x65, 0x7A, 0x76, 0x74, 0x7E, 0x04, 0xA4, 0x79, 0x2C, 0x20, 0x63, 0x7E, 0x72, 0x79, 0x72, 0x20, 0x72, 0x7B, 0x20, 0x67, 0x78, 0x73, 0x72, 0x65, 0x2E, 0x2E, 0x2E, 0x7B, 0x76, 0x20, 0x66, 0x62, 0x72, 0x20, 0x63, 0x7E, 0x72, 0x79, 0x72, 0x20, 0x7B, 0x76, 0x20, 0x7E, 0x79, 0x71, 0x78, 0x65, 0x7A, 0x76, 0x74, 0x7E, 0x04, 0xA4, 0x79, 0x2C, 0x20, 0x63, 0x7E, 0x72, 0x79, 0x72, 0x20, 0x72, 0x7B, 0x20, 0x67, 0x78, 0x73, 0x72, 0x65, 0x2E, 0x2E, 0x2E };
	FILE *ptr;
	ptr = fopen("sombra.txt", "w+");

	for (int i = 0; i < 388; i++)
	{
		//scanf("%x", hex[i]);
		hex[i] = hex[i]^23;
	}
	for (int i = 0; i < 388; i++)
	{
		fprintf(ptr, "%x ", hex[i]);
		if (!((i + 1) % 10))
			fprintf(ptr, "\n");
	}
}