#pragma once

typedef unsigned char (*csbits_t)[256][8];

extern unsigned char csbits_enhanced2e[2][256][8];	// Enhanced //e (2732 4K video ROM)
extern unsigned char csbits_2e[2][256][8];			// Original //e (no mousetext)
extern unsigned char csbits_a2[1][256][8];			// ][ and ][+
extern unsigned char csbits_pravets82[1][256][8];	// Pravets 82
extern unsigned char csbits_pravets8M[1][256][8];	// Pravets 8M
extern unsigned char csbits_pravets8C[2][256][8];	// Pravets 8A & 8C

void make_csbits(void);
csbits_t GetEnhanced2e_csbits(void);
