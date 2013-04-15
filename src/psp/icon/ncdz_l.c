/******************************************************************************

	icon/ncdz_l.c

	NCDZPSP用アイコンデータ(大) (32x24 pixels)

******************************************************************************/

#include "psp/psp.h"

#define NUM_FONTS	0x08


/******************************************************************************
	ローカル変数
******************************************************************************/

/*------------------------------------------------------
	gryph data
------------------------------------------------------*/

static const UINT8 ALIGN_DATA icon_l[] = {
	0x00,0x00,0x21,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x71,0xcb,0xbc,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x30,0xec,0xdd,0xed,0xae,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x40,0xa8,0xdc,0xde,0xed,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x31,0xc6,0xde,0x4e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x60,0xde,0x9e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x10,0xed,0xbe,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x20,0xed,0xde,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x98,0x36,0x01,0xc2,0xee,0xee,0xbf,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0xe5,0xde,0xac,0xec,0xee,0xee,0xfe,0xaf,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x90,0xde,0xee,0xee,0xee,0xee,0xee,0xfe,0x8e,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xd8,0xee,0xfe,0xcd,0xef,0xee,0xee,0xfe,0x7d,0x01,0x52,0x56,0x03,0x00,0x00,
	0x00,0x30,0x98,0x79,0x02,0xd7,0xef,0xee,0xee,0xfe,0x9c,0xed,0xee,0x9d,0x01,0x00,
	0x00,0x00,0x00,0x00,0x00,0x20,0xe9,0xef,0xee,0xee,0xee,0xde,0xdd,0xed,0x1b,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x30,0xea,0xef,0xee,0xee,0xed,0xdd,0xee,0x9e,0x01,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x50,0xfc,0xee,0xee,0x9e,0x31,0x86,0xca,0x03,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xed,0xee,0x09,0x00,0x00,0x10,0x02,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe6,0xee,0x05,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe4,0xee,0x0a,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc1,0xde,0x5d,0x01,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xde,0xdd,0xac,0x68,0x04,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe8,0xdd,0xdd,0xee,0x1a,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0xdc,0xdd,0x7c,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x41,0x56,0x02,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x67,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xfb,0x2c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x30,0x9e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0xd8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0xd7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xd7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xe8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0x46,0x01,0x00,0x00,
	0x74,0x00,0x00,0x20,0x64,0x68,0x01,0x00,0x00,0xa0,0xfe,0xef,0xde,0x9b,0x99,0x99,
	0x99,0xca,0xed,0xfe,0xff,0x2c,0x00,0x00,0xf8,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xef,0xae,0xd8,0x9f,0x00,0x10,0xed,0xae,0x55,0xfa,0xff,0xff,0xff,0xff,0xef,
	0xfc,0x0b,0x70,0xee,0x03,0x50,0xee,0x09,0x33,0x80,0xff,0xff,0xcf,0xfe,0x5f,0x60,
	0x0b,0x60,0xee,0x09,0xa0,0xde,0x51,0xff,0x07,0xfd,0xef,0x56,0xfe,0x0e,0x00,0x9e,
	0xc7,0xed,0x1c,0xd1,0xce,0xa0,0xff,0x0b,0xfb,0xdf,0xfb,0xff,0x8f,0x82,0xff,0x3d,
	0xa1,0x3e,0xe4,0xde,0x50,0xfe,0x06,0xfd,0xff,0xff,0xee,0xfe,0xce,0xc7,0x09,0x50,
	0x6f,0xe5,0xed,0x08,0x33,0x60,0xef,0xef,0x6a,0xfc,0xee,0x3e,0x10,0x3c,0xa1,0x8f,
	0xe6,0xed,0x9e,0x33,0xe8,0xee,0xdf,0xb8,0xee,0xee,0x3e,0x10,0xed,0xed,0x8e,0xe5,
	0xdd,0xee,0xee,0xef,0xee,0xee,0xff,0xee,0xee,0xce,0xb7,0xee,0xde,0x7e,0xe4,0xdd,
	0xed,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xef,0xdd,0xdd,0x5e,0x90,0xee,0xee,
	0xee,0xfe,0xff,0xff,0xff,0xff,0xff,0xee,0xee,0xde,0xed,0x1b,0x10,0xc8,0xdd,0xcd,
	0x9a,0x89,0x88,0x88,0x88,0x88,0xa9,0xdb,0xdd,0x8c,0x01,0x00,0x10,0x33,0x02,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x22,0x00,0x00,0x00,0x80,0xdd,0xdd,0xdd,0x1b,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd6,0x78,0x77,0x77,0x9d,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x5e,0x00,0x00,0x00,0xe3,0x06,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0xc1,0x07,0x00,0x00,0x00,0x60,0x9e,0x88,0x88,0x88,0x88,0x88,
	0x03,0x00,0xd2,0x02,0x00,0x00,0x00,0x00,0xa7,0xaa,0xaa,0xaa,0xaa,0xea,0x06,0x00,
	0xc2,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb0,0x06,0x00,0xc2,0x02,
	0xb4,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xda,0xac,0x3a,0xc2,0x02,0xf8,0xee,
	0xee,0xfe,0xff,0xff,0xee,0xee,0xee,0xde,0xed,0x2d,0xc2,0x02,0xeb,0xee,0xee,0xee,
	0xee,0xee,0xee,0xee,0xde,0xdd,0xdd,0x0a,0xd2,0x12,0xed,0xee,0xee,0xee,0xee,0xee,
	0xee,0xee,0xde,0xdd,0xed,0x08,0xd2,0x51,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,
	0xde,0xdd,0xed,0x05,0xc2,0x82,0xde,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xde,0xdd,
	0xdd,0x02,0xc2,0xb3,0xde,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xde,0xdd,0xbd,0x00,
	0xc2,0xd5,0xdd,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xde,0xdd,0x9e,0x00,0xc2,0xd9,
	0xdd,0xed,0xee,0xee,0xee,0xee,0xee,0xee,0xdd,0xdd,0x6e,0x00,0xc2,0xdc,0xdd,0xdd,
	0xee,0xee,0xee,0xee,0xee,0xde,0xdd,0xdd,0x3d,0x00,0xd2,0xdd,0xdd,0xdd,0xed,0xee,
	0xee,0xee,0xee,0xdd,0xdd,0xdd,0x0c,0x00,0xd2,0xdd,0xdd,0xdd,0xdd,0xed,0xee,0xee,
	0xdd,0xdd,0xdd,0xed,0x09,0x00,0xd2,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,
	0xee,0xfe,0x07,0x00,0x60,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x77,
	0x01,0x00,0x00,0x00,0x10,0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x01,0x00,
	0x00,0x00,0x00,0x00,0x71,0x15,0x00,0x00,0x00,0x80,0xcc,0xbc,0xbb,0xcb,0x08,0x00,
	0x00,0x00,0x00,0x10,0xd7,0x5d,0x01,0x00,0x00,0xe9,0xee,0xee,0xee,0xdd,0x9e,0x00,
	0x00,0x00,0x00,0x71,0x2c,0xd3,0x15,0x00,0x90,0xee,0xdd,0xdd,0xed,0xdd,0xed,0x08,
	0x00,0x00,0x10,0xc7,0x03,0x40,0x5d,0x01,0xe9,0xee,0xee,0xee,0x4b,0xdd,0xdd,0x8e,
	0x00,0x00,0x61,0x3c,0x00,0x00,0xd4,0x85,0xee,0xee,0xee,0xee,0x6b,0xdd,0xdd,0xed,
	0x08,0x00,0xb1,0x05,0x00,0x00,0x40,0xed,0xee,0xee,0x9e,0xe7,0xee,0xdd,0xdd,0xdd,
	0x9e,0x00,0xa1,0x04,0x00,0x00,0x00,0xe5,0xee,0xee,0x1d,0x80,0xef,0xdd,0xdd,0xdd,
	0xed,0x17,0xa1,0x04,0x00,0x60,0x01,0xe3,0xee,0xee,0x7e,0xa2,0xee,0xde,0xee,0xde,
	0xdd,0x1a,0xa1,0x05,0x00,0xd1,0x04,0xe3,0xee,0xee,0xee,0xed,0xee,0xee,0x7c,0x95,
	0xde,0x1a,0xa1,0x05,0x00,0x20,0x00,0xe3,0xee,0xee,0xee,0xee,0xee,0xee,0x09,0x50,
	0xde,0x1a,0xa1,0x14,0x08,0x00,0x00,0x30,0x33,0x33,0xf8,0xee,0xee,0xee,0x09,0x40,
	0xdd,0x1a,0xa1,0x04,0x02,0x00,0x00,0x00,0x01,0x00,0x80,0xef,0xee,0x5c,0x01,0x40,
	0xdd,0x1a,0xa1,0x04,0x00,0x00,0x00,0x00,0x35,0x00,0x00,0xf8,0xee,0x0c,0x00,0x72,
	0xdd,0x1a,0xa1,0x04,0x00,0x00,0x00,0x00,0x57,0x00,0x00,0x80,0xee,0x6e,0x32,0xdb,
	0xdd,0x1a,0x91,0x09,0x00,0x00,0x00,0x00,0x3b,0x00,0x00,0x00,0xec,0xde,0xdd,0xdd,
	0xdd,0x1a,0x10,0x9b,0x00,0x00,0x00,0xa1,0x18,0x00,0x00,0xa0,0x8a,0xee,0xdd,0xdd,
	0xdd,0x16,0x00,0xc1,0x09,0x10,0x85,0x69,0x01,0x00,0x00,0xba,0x11,0xe8,0xdd,0xdd,
	0x7d,0x01,0x00,0x20,0x8c,0x00,0x32,0x10,0x00,0x00,0xa0,0x1b,0x00,0x80,0xde,0xdd,
	0x17,0x00,0x00,0x00,0xc2,0x29,0x12,0x22,0x22,0x22,0xba,0x01,0x00,0x00,0xe8,0x7e,
	0x01,0x00,0x00,0x00,0x20,0xba,0xbb,0xbb,0xbb,0xbb,0x1a,0x00,0x00,0x00,0x80,0x17,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x10,0x01,
	0x00,0x00,0x00,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x01,0x00,0x00,0x00,
	0x00,0x10,0xdc,0xdc,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xcd,0x49,0x00,0x00,0x00,
	0x10,0xdd,0xdd,0xdd,0xed,0xee,0xee,0xee,0xee,0xdd,0xdd,0xee,0x2a,0x00,0x00,0x20,
	0xed,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xdd,0xce,0x02,0x00,0x10,0x88,
	0x88,0x88,0x99,0x99,0x99,0x99,0x99,0x89,0xb9,0xdd,0xed,0x0b,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc4,0xdd,0x6e,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0xde,0xbd,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdb,0xcd,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0xe8,0xdd,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0xe9,0xdd,0x03,0x00,0x00,0x90,0x0a,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x10,0xdc,0xcd,0x01,0x00,0x20,0xfb,0x0a,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x70,0xde,0xae,0x00,0x00,0xc4,0xee,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,
	0x31,0xe8,0xdd,0x4d,0x00,0x60,0xed,0xed,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,
	0xde,0xed,0x08,0x00,0xe7,0xdd,0xdd,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xed,
	0x9e,0x00,0x00,0xb0,0xde,0xdd,0xee,0xee,0xfe,0xff,0xff,0xee,0xee,0xee,0xce,0x05,
	0x00,0x00,0x00,0xea,0xdd,0x9c,0x99,0x99,0x99,0x99,0x99,0x99,0x78,0x15,0x00,0x00,
	0x00,0x00,0x80,0xee,0x09,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0xe6,0x0a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x50,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x31,0x33,0x43,0x44,0x44,0x44,0x44,0x44,0x33,0x33,0x13,0x00,0x00,0x00,0x70,0xdd,
	0xee,0xee,0xee,0xfe,0xff,0xee,0xee,0xee,0xee,0xdd,0x07,0x00,0x00,0xe9,0xdd,0x88,
	0x88,0x88,0x88,0x88,0x88,0x88,0x88,0x88,0xdd,0x9e,0x00,0x50,0xde,0xdd,0x01,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xdd,0xed,0x05,0xb0,0xdd,0xdd,0x01,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x10,0xdd,0xdd,0x0b,0xd3,0xdd,0xdd,0x01,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x10,0xdd,0xdd,0x3d,0xe6,0xdd,0xdd,0x01,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x10,0xdd,0xdd,0x6e,0xe8,0xdd,0xdd,0x01,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x10,0xdd,0xdd,0x8e,0xe9,0xdd,0xdd,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x10,0xdd,0xdd,0x9e,0xe8,0xdd,0xdd,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x10,0xdd,0xdd,0x8e,0xe6,0xdd,0xdd,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
	0xdd,0xdd,0x6e,0xd4,0xdd,0xdd,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xdd,
	0xdd,0x4d,0xb0,0xdd,0xdd,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xdd,0xdd,
	0x0b,0x60,0xde,0xdd,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0xdd,0xed,0x06,
	0x00,0xea,0xdd,0x56,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x65,0xdd,0xae,0x00,0x00,
	0x91,0xed,0xee,0xee,0xff,0xff,0xff,0xff,0xef,0xee,0xee,0xde,0x19,0x00,0x00,0x00,
	0x42,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x24,0x00,0x00,0x74,0x66,0x66,
	0x77,0x77,0x77,0x77,0x77,0x77,0x77,0x67,0x66,0x66,0x67,0xf8,0xee,0xee,0xee,0xee,
	0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xce,0xe8,0xdd,0xdd,0xdd,0xed,0xee,0xee,
	0xed,0xde,0xdd,0xdd,0xdd,0xdd,0xbd,0xe8,0x59,0x55,0xe7,0x4c,0x44,0xc5,0x7e,0x55,
	0x95,0x9e,0x55,0x75,0xbd,0xf8,0x86,0xbc,0xe5,0x0b,0x00,0xc0,0x5e,0xdb,0x89,0x6f,
	0xc8,0x5b,0xbd,0xf8,0xa7,0xde,0xe6,0x0b,0x00,0xc0,0x6e,0xfd,0x8a,0x7f,0xea,0x6c,
	0xbd,0xf8,0xa7,0xde,0xe6,0x0b,0x00,0xc0,0x6e,0xfd,0x8a,0x7f,0xea,0x6c,0xbd,0xf8,
	0x37,0x45,0xe4,0x0b,0x00,0xc0,0x4e,0x54,0x83,0x7f,0x53,0x44,0xbd,0xf8,0x07,0x00,
	0xe3,0x0b,0x00,0xc0,0x3e,0x00,0x80,0x6f,0x00,0x30,0xbd,0xf8,0x07,0x00,0xe3,0x0b,
	0x00,0xc0,0x3e,0x00,0x80,0x7f,0x00,0x30,0xbd,0xf8,0x07,0x00,0xe3,0x0b,0x00,0xc0,
	0x3e,0x00,0x80,0x7f,0x00,0x30,0xbd,0xf8,0x07,0x00,0xe3,0x0b,0x00,0xc0,0x3e,0x00,
	0x80,0x7f,0x00,0x30,0xbd,0xf8,0x07,0x00,0xe3,0x0b,0x00,0xc0,0x3e,0x00,0x80,0x6f,
	0x00,0x30,0xbd,0xf8,0x07,0x00,0xe3,0x6a,0xcd,0xb5,0x3e,0x00,0x80,0x6f,0x00,0x30,
	0xbd,0xf8,0x06,0x00,0xe3,0x7a,0xff,0xb6,0x3e,0x00,0x80,0x6f,0x00,0x30,0xbd,0xf8,
	0x06,0x00,0xe3,0x7a,0xff,0xb6,0x3e,0x00,0x80,0x6f,0x00,0x30,0xbd,0xf8,0x07,0x00,
	0xe4,0x3b,0x66,0xc3,0x3e,0x00,0x80,0x7f,0x00,0x40,0xbd,0xe8,0xbc,0xcb,0xdc,0xbd,
	0xbb,0xdb,0xce,0xcc,0xdc,0xce,0xbb,0xcb,0xbd,0xe8,0xed,0xee,0xee,0xee,0xee,0xee,
	0xee,0xee,0xee,0xee,0xee,0xde,0xce,0xb6,0xaa,0xba,0xbb,0xbb,0xbb,0xbb,0xbb,0xbb,
	0xbb,0xab,0xaa,0xaa,0x9b,0x00,0x10,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x20,0xd9,0xde,0x3a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0xb1,0x7d,0x76,0xdc,0x03,0x00,0xa0,0xbb,0xbb,0xbb,0x02,0x00,0x00,0x00,0xe7,
	0x32,0x58,0xe2,0x0a,0x00,0xd0,0xee,0xee,0xde,0x02,0x00,0x00,0x00,0xcb,0xd5,0x6e,
	0xd2,0x2d,0x00,0xd0,0xee,0xde,0xde,0x02,0x00,0x00,0x00,0xdc,0xde,0x43,0xec,0x2d,
	0xb5,0xda,0xee,0xee,0xde,0xbb,0x06,0x00,0x00,0xe9,0xdd,0xd8,0xee,0x0c,0x90,0xef,
	0xee,0xee,0xde,0xaf,0x01,0x00,0x00,0xe4,0xde,0xb5,0xfe,0x07,0x00,0xf8,0xee,0xee,
	0xee,0x09,0x00,0x00,0x00,0x60,0xed,0xd9,0x8e,0x00,0x00,0x80,0xef,0xee,0x9e,0x00,
	0x00,0x00,0x00,0x00,0x73,0x8a,0x04,0x00,0x00,0x00,0xf8,0xfe,0x0a,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x9f,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x38,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x73,0xca,0xdd,0xdd,0xcd,0x7a,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0xa2,
	0xfe,0xef,0xee,0xee,0xee,0xee,0xbe,0x04,0x00,0x00,0x00,0x00,0x00,0xfb,0xee,0xee,
	0xee,0xee,0xee,0xdd,0xed,0x2d,0x00,0x00,0x00,0x00,0x00,0xf9,0xee,0xee,0xee,0xee,
	0xde,0xdd,0xed,0x1c,0x00,0x00,0x00,0x00,0x30,0x61,0xec,0xff,0xee,0xee,0xee,0xee,
	0x8c,0x22,0x00,0x00,0x00,0x00,0xb1,0x00,0x30,0x86,0xba,0xbb,0x8a,0x46,0x01,0x90,
	0x05,0x00,0x00,0x00,0xd1,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd6,0x04,0x00,
	0x00,0x00,0x60,0xde,0x7a,0x35,0x01,0x00,0x20,0x64,0xc9,0x9e,0x00,0x00,0x00,0x00,
	0x00,0x62,0xca,0xdd,0xcd,0xcc,0xdc,0xcd,0x7a,0x03,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x31,0x54,0x56,0x34,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

static const int ALIGN_DATA icon_l_pos[NUM_FONTS] = {
	0x000000,0x000180,0x0002ca,0x0003e2,0x000542,0x00066e,0x00076d,0x000885
};

static const INT8 ALIGN_DATA icon_l_width[NUM_FONTS] = {
	32,30,28,32,30,30,28,28
};

static const INT8 ALIGN_DATA icon_l_height[NUM_FONTS] = {
	24,22,20,22,20,17,20,22
};

static const INT8 ALIGN_DATA icon_l_skipx[NUM_FONTS] = {
	 1, 1, 2, 0, 2, 1, 2, 2
};

static const INT8 ALIGN_DATA icon_l_skipy[NUM_FONTS] = {
	 0, 1, 2, 1, 2, 4, 2, 1
};


/*------------------------------------------------------
	light data
------------------------------------------------------*/

static const UINT8 ALIGN_DATA icon_l_light[] = {
	0x00,0x00,0x10,0x21,0x12,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x10,0x32,0x54,0x45,0x23,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x21,0x64,0x98,0x89,0x46,0x13,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x52,0xa7,0xcb,0xcc,0x8a,0x35,0x01,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x63,0xb9,0xed,0xee,0xbd,0x58,0x12,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x63,0xb8,0xdc,0xee,0xde,
	0x8b,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x86,0xb9,
	0xdc,0xee,0x9c,0x25,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,
	0x53,0x76,0xc9,0xee,0xad,0x36,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x10,0x21,0x43,0x65,0xc8,0xee,0xce,0x58,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x20,0x53,0x65,0x76,0xc9,0xfe,0xde,0x9b,0x46,0x12,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x31,0x86,0xa9,0xba,0xdc,0xff,0xef,0xbd,0x79,0x35,0x12,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x41,0xa7,0xcc,0xdd,0xee,0xff,0xff,0xef,0xac,0x79,
	0x35,0x22,0x22,0x22,0x11,0x00,0x00,0x00,0x31,0xa7,0xdc,0xee,0xee,0xff,0xff,0xff,
	0xde,0xac,0x79,0x55,0x55,0x55,0x34,0x12,0x00,0x00,0x21,0x85,0xba,0xdc,0xdd,0xdd,
	0xee,0xff,0xff,0xde,0xac,0x99,0x99,0x99,0x68,0x34,0x01,0x00,0x10,0x43,0x86,0xa9,
	0xaa,0xaa,0xcb,0xed,0xff,0xff,0xde,0xcd,0xdc,0xcd,0xab,0x58,0x13,0x00,0x00,0x21,
	0x43,0x55,0x55,0x65,0x97,0xca,0xed,0xff,0xff,0xee,0xee,0xee,0xcd,0x8b,0x25,0x01,
	0x00,0x00,0x11,0x22,0x22,0x32,0x53,0x97,0xca,0xfe,0xff,0xff,0xef,0xde,0xdd,0xac,
	0x47,0x01,0x00,0x00,0x00,0x00,0x00,0x10,0x21,0x53,0x97,0xdb,0xfe,0xff,0xde,0xbb,
	0xba,0xab,0x47,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0x64,0xb8,0xed,0xef,
	0xbd,0x78,0x77,0x78,0x36,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x31,0x85,
	0xeb,0xef,0x9c,0x57,0x44,0x45,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x10,0x63,0xda,0xee,0xac,0x67,0x44,0x34,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x42,0xc8,0xee,0xcd,0x9a,0x67,0x45,0x12,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x31,0xa6,0xed,0xee,0xcd,0x9a,0x57,0x13,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x84,0xdb,0xee,0xde,0xbc,0x68,0x13,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x53,0xa8,0xcc,0xcc,0x9b,0x47,
	0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x31,0x64,0x98,0x99,
	0x68,0x24,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x32,
	0x54,0x55,0x34,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x10,0x21,0x22,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x22,
	0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x31,
	0x44,0x24,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,
	0x53,0x87,0x57,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x10,0x63,0xa8,0x79,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x10,0x52,0x97,0x9a,0x36,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x31,0x85,0xaa,0x47,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x21,0x64,0xa9,0x58,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x11,0x22,0x22,0x22,0x22,0x63,0xa9,0x59,0x23,0x22,0x22,0x22,0x11,0x00,0x00,
	0x00,0x10,0x42,0x55,0x55,0x55,0x44,0x75,0xba,0x79,0x55,0x55,0x55,0x55,0x24,0x01,
	0x00,0x00,0x31,0x75,0x99,0xaa,0x99,0x78,0x98,0xbb,0x9a,0x88,0x99,0xaa,0x99,0x57,
	0x13,0x00,0x00,0x42,0xa8,0xdc,0xdd,0xcd,0xbc,0xcb,0xdd,0xcc,0xcb,0xdc,0xcd,0xcc,
	0x8a,0x24,0x00,0x10,0x63,0xda,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xee,0xde,
	0xdd,0xac,0x36,0x01,0x20,0x85,0xec,0xff,0xff,0xee,0xff,0xff,0xff,0xff,0xff,0xef,
	0xde,0xdc,0xbd,0x58,0x02,0x31,0xa6,0xed,0xff,0xef,0xee,0xff,0xff,0xff,0xff,0xff,
	0xee,0xcd,0xdc,0xdd,0x6a,0x13,0x41,0xb8,0xee,0xee,0xee,0xee,0xfe,0xff,0xff,0xff,
	0xff,0xee,0xdd,0xdd,0xde,0x8b,0x14,0x52,0xc9,0xee,0xee,0xee,0xdd,0xfe,0xff,0xff,
	0xff,0xff,0xee,0xde,0xdd,0xdd,0x9c,0x25,0x52,0xd9,0xee,0xee,0xee,0xee,0xfe,0xff,
	0xff,0xff,0xff,0xee,0xdd,0xdd,0xdd,0x9c,0x25,0x52,0xda,0xee,0xee,0xee,0xee,0xff,
	0xff,0xff,0xff,0xff,0xee,0xdd,0xee,0xee,0xac,0x25,0x52,0xda,0xff,0xef,0xee,0xfe,
	0xff,0xff,0xff,0xff,0xff,0xef,0xed,0xee,0xee,0xad,0x25,0x52,0xd9,0xfe,0xff,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xee,0xff,0xef,0x9d,0x25,0x52,0xc9,0xfe,0xff,
	0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0xfe,0xff,0xef,0x9c,0x25,0x41,0xa7,0xed,
	0xfe,0xef,0xee,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xee,0xee,0xde,0x7a,0x14,0x21,0x85,
	0xca,0xdc,0xcd,0xbc,0xaa,0xaa,0xaa,0xaa,0xaa,0xba,0xcc,0xcd,0xac,0x58,0x12,0x10,
	0x43,0x86,0x99,0x99,0x78,0x56,0x55,0x55,0x55,0x55,0x76,0x98,0x99,0x68,0x34,0x01,
	0x00,0x21,0x43,0x55,0x55,0x34,0x23,0x22,0x22,0x22,0x22,0x33,0x54,0x55,0x34,0x12,
	0x00,0x00,0x00,0x11,0x22,0x22,0x11,0x01,0x00,0x00,0x00,0x00,0x11,0x21,0x22,0x11,
	0x00,0x00,0x00,0x00,0x11,0x22,0x22,0x22,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x10,0x42,0x55,0x55,0x55,0x24,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x31,0x75,0x99,0xaa,0x99,0x57,0x23,0x01,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x10,0x63,0xb9,0xcc,0xcc,0xcc,0x9b,0x46,0x23,0x22,0x22,0x22,0x22,0x11,
	0x00,0x00,0x21,0x85,0xcb,0xdd,0xcc,0xdd,0xbc,0x79,0x56,0x55,0x55,0x55,0x55,0x24,
	0x01,0x00,0x41,0xa7,0xcc,0xbb,0xba,0xcb,0xdc,0xbc,0xaa,0xaa,0xaa,0xaa,0x99,0x57,
	0x13,0x00,0x52,0xb9,0xac,0x89,0x88,0xa9,0xdc,0xee,0xdd,0xdd,0xdd,0xdd,0xcd,0x8b,
	0x25,0x01,0x52,0xb9,0x9b,0x78,0x87,0xa8,0xdb,0xfe,0xff,0xff,0xff,0xff,0xef,0xbd,
	0x47,0x02,0x52,0xb9,0xab,0x99,0xaa,0xcb,0xed,0xff,0xff,0xff,0xff,0xff,0xff,0xde,
	0x7a,0x13,0x52,0xc9,0xbc,0xcb,0xdc,0xed,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xef,
	0x8c,0x24,0x52,0xc9,0xdd,0xed,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,
	0x9c,0x25,0x52,0xda,0xee,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,
	0x9c,0x25,0x52,0xda,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,
	0x8c,0x14,0x52,0xda,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,
	0x7b,0x13,0x52,0xda,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xdf,
	0x6a,0x12,0x52,0xda,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xde,
	0x59,0x02,0x52,0xda,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xce,
	0x48,0x01,0x52,0xda,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbe,
	0x37,0x01,0x52,0xda,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xad,
	0x36,0x01,0x52,0xda,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xad,
	0x25,0x00,0x52,0xd9,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0x9c,
	0x25,0x00,0x52,0xc9,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xde,0x7b,
	0x14,0x00,0x41,0xa7,0xdc,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xbc,0x58,
	0x12,0x00,0x21,0x75,0x99,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0x79,0x35,
	0x01,0x00,0x10,0x42,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x45,0x12,
	0x00,0x00,0x00,0x11,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x12,0x01,
	0x00,0x00,0x00,0x00,0x00,0x11,0x11,0x00,0x00,0x00,0x11,0x22,0x22,0x22,0x22,0x11,
	0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x32,0x23,0x01,0x00,0x10,0x42,0x55,0x55,0x55,
	0x55,0x24,0x01,0x00,0x00,0x00,0x00,0x00,0x31,0x75,0x57,0x13,0x11,0x31,0x85,0xa9,
	0xaa,0xaa,0x9a,0x58,0x13,0x00,0x00,0x00,0x00,0x10,0x63,0xa8,0x8a,0x36,0x22,0x64,
	0xb9,0xdc,0xdd,0xdd,0xcd,0x9b,0x36,0x01,0x00,0x00,0x00,0x31,0x86,0xba,0xab,0x69,
	0x55,0x96,0xdc,0xfe,0xff,0xff,0xef,0xcd,0x69,0x13,0x00,0x00,0x10,0x63,0xa8,0xbb,
	0xbb,0x9a,0x88,0xca,0xfe,0xff,0xff,0xff,0xff,0xef,0x9c,0x36,0x01,0x00,0x21,0x85,
	0xaa,0x89,0x98,0xba,0xcb,0xed,0xff,0xff,0xff,0xff,0xff,0xff,0xce,0x69,0x13,0x00,
	0x41,0xa7,0x9a,0x57,0x75,0xb9,0xdc,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xef,0x9c,
	0x36,0x01,0x52,0xa8,0x7a,0x35,0x54,0xa8,0xed,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
	0xff,0xce,0x59,0x12,0x52,0xb9,0x6a,0x34,0x54,0x97,0xec,0xff,0xff,0xff,0xfe,0xff,
	0xff,0xff,0xff,0xdf,0x8b,0x14,0x52,0xb9,0x7a,0x45,0x76,0x98,0xec,0xff,0xff,0xff,
	0xff,0xff,0xff,0xef,0xfe,0xef,0x9c,0x25,0x52,0xb9,0x8a,0x66,0x87,0x98,0xdb,0xfe,
	0xff,0xff,0xff,0xff,0xff,0xde,0xed,0xee,0x9d,0x25,0x52,0xb9,0x9b,0x78,0x76,0x87,
	0xca,0xed,0xee,0xfe,0xff,0xff,0xef,0xbc,0xcb,0xee,0xad,0x25,0x52,0xc9,0xbc,0x79,
	0x55,0x55,0xa8,0xcb,0xcb,0xed,0xff,0xff,0xdf,0x9b,0xca,0xee,0xad,0x25,0x52,0xc9,
	0xac,0x68,0x24,0x32,0x75,0x99,0x98,0xca,0xfe,0xff,0xdf,0x9b,0xca,0xee,0xad,0x25,
	0x52,0xb9,0x9b,0x46,0x12,0x21,0x64,0x88,0x66,0x97,0xec,0xff,0xdf,0xbc,0xdb,0xee,
	0xad,0x25,0x52,0xb8,0x9b,0x36,0x12,0x21,0x74,0x89,0x45,0x75,0xda,0xff,0xef,0xdd,
	0xed,0xef,0x9d,0x25,0x41,0xa7,0x9b,0x47,0x23,0x43,0x96,0x89,0x35,0x64,0xca,0xfe,
	0xff,0xee,0xff,0xef,0x9c,0x25,0x21,0x85,0xaa,0x79,0x55,0x76,0xa9,0x8a,0x45,0x74,
	0xca,0xed,0xfe,0xff,0xff,0xdf,0x8b,0x14,0x10,0x63,0xa8,0xaa,0x99,0xba,0xcc,0x8a,
	0x56,0x96,0xba,0xcb,0xed,0xff,0xff,0xce,0x59,0x12,0x00,0x31,0x86,0xba,0xcc,0xdd,
	0xdd,0x9b,0x88,0xa9,0x9a,0x88,0xca,0xee,0xee,0x9c,0x36,0x01,0x00,0x10,0x63,0xb8,
	0xdc,0xee,0xde,0xbc,0xaa,0xaa,0x68,0x55,0x96,0xdb,0xbd,0x69,0x13,0x00,0x00,0x00,
	0x31,0x86,0xcb,0xdd,0xcd,0xbc,0xbb,0x8a,0x36,0x22,0x64,0xa9,0x9a,0x36,0x01,0x00,
	0x00,0x00,0x10,0x53,0x97,0xa9,0x9a,0x99,0x89,0x57,0x13,0x11,0x31,0x75,0x57,0x13,
	0x00,0x00,0x00,0x00,0x00,0x21,0x54,0x55,0x55,0x55,0x55,0x24,0x01,0x00,0x10,0x32,
	0x23,0x01,0x00,0x00,0x00,0x00,0x00,0x10,0x21,0x22,0x22,0x22,0x22,0x11,0x00,0x00,
	0x00,0x11,0x11,0x00,0x00,0x00,0x00,0x10,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,
	0x22,0x12,0x01,0x00,0x00,0x00,0x00,0x00,0x32,0x54,0x55,0x55,0x55,0x55,0x55,0x55,
	0x55,0x55,0x45,0x23,0x11,0x00,0x00,0x00,0x10,0x63,0x98,0xaa,0xaa,0xaa,0xaa,0xaa,
	0xaa,0xaa,0xaa,0x89,0x57,0x24,0x01,0x00,0x00,0x20,0x84,0xcb,0xdd,0xdd,0xdd,0xdd,
	0xdd,0xdd,0xdd,0xdd,0xcc,0x9b,0x58,0x13,0x00,0x00,0x20,0x95,0xdc,0xee,0xee,0xee,
	0xee,0xee,0xee,0xee,0xee,0xee,0xcd,0x9b,0x36,0x01,0x00,0x20,0x84,0xcb,0xdd,0xdd,
	0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,0xed,0xee,0xbd,0x69,0x13,0x00,0x10,0x63,0x98,0xaa,
	0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xcb,0xed,0xde,0x8b,0x25,0x00,0x00,0x32,0x54,
	0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x65,0x97,0xdb,0xee,0xad,0x36,0x01,0x00,0x10,
	0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x32,0x54,0xb8,0xed,0xce,0x48,0x01,0x00,
	0x00,0x10,0x21,0x12,0x01,0x00,0x00,0x00,0x00,0x10,0x31,0x96,0xec,0xce,0x59,0x02,
	0x00,0x00,0x10,0x32,0x23,0x01,0x00,0x00,0x00,0x00,0x00,0x20,0x84,0xec,0xde,0x59,
	0x02,0x00,0x00,0x31,0x65,0x35,0x12,0x00,0x00,0x00,0x00,0x00,0x21,0x84,0xec,0xde,
	0x59,0x02,0x00,0x10,0x63,0x98,0x68,0x34,0x22,0x22,0x22,0x22,0x22,0x42,0x96,0xec,
	0xce,0x59,0x02,0x00,0x31,0x96,0xcb,0x9b,0x67,0x55,0x55,0x55,0x55,0x55,0x76,0xb8,
	0xed,0xce,0x48,0x01,0x10,0x63,0xc9,0xed,0xcd,0xab,0xaa,0xaa,0xaa,0xaa,0xaa,0xba,
	0xdc,0xee,0xad,0x36,0x01,0x20,0x85,0xdb,0xff,0xee,0xdd,0xdd,0xdd,0xdd,0xdd,0xdd,
	0xdd,0xee,0xde,0x8b,0x24,0x00,0x21,0x95,0xec,0xff,0xff,0xee,0xee,0xee,0xee,0xee,
	0xee,0xee,0xee,0xbd,0x59,0x13,0x00,0x20,0x85,0xdb,0xff,0xee,0xdd,0xdd,0xdd,0xdd,
	0xdd,0xdd,0xdd,0xcc,0x8a,0x35,0x01,0x00,0x10,0x63,0xc9,0xed,0xcd,0xab,0xaa,0xaa,
	0xaa,0xaa,0xaa,0xaa,0x89,0x46,0x13,0x00,0x00,0x00,0x31,0x96,0xcb,0x9b,0x67,0x55,
	0x55,0x55,0x55,0x55,0x55,0x45,0x23,0x01,0x00,0x00,0x00,0x10,0x63,0x98,0x68,0x34,
	0x22,0x22,0x22,0x22,0x22,0x22,0x12,0x01,0x00,0x00,0x00,0x00,0x00,0x31,0x65,0x35,
	0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x32,
	0x23,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x11,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x10,0x21,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x12,0x01,0x00,0x00,0x00,
	0x10,0x32,0x54,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x45,0x23,0x01,0x00,
	0x00,0x31,0x64,0x98,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x89,0x46,0x13,
	0x00,0x10,0x53,0xa8,0xcb,0xbc,0xbb,0xab,0xaa,0xaa,0xaa,0xba,0xbb,0xcb,0xbc,0x8a,
	0x35,0x01,0x20,0x84,0xdb,0xee,0xbd,0x9a,0x99,0x99,0x99,0x99,0x99,0xa9,0xdb,0xee,
	0xbd,0x48,0x02,0x31,0xa6,0xed,0xee,0x9c,0x67,0x55,0x55,0x55,0x55,0x55,0x76,0xc9,
	0xee,0xde,0x6a,0x13,0x41,0xc8,0xfe,0xdf,0x7b,0x34,0x22,0x22,0x22,0x22,0x22,0x43,
	0xb7,0xfd,0xef,0x8c,0x14,0x52,0xc9,0xfe,0xdf,0x6a,0x13,0x00,0x00,0x00,0x00,0x00,
	0x31,0xa6,0xfd,0xef,0x9c,0x25,0x52,0xda,0xff,0xdf,0x5a,0x02,0x00,0x00,0x00,0x00,
	0x00,0x20,0xa5,0xfd,0xff,0xad,0x25,0x52,0xda,0xff,0xdf,0x5a,0x02,0x00,0x00,0x00,
	0x00,0x00,0x20,0xa5,0xfd,0xff,0xad,0x25,0x52,0xda,0xff,0xdf,0x5a,0x02,0x00,0x00,
	0x00,0x00,0x00,0x20,0xa5,0xfd,0xff,0xad,0x25,0x52,0xda,0xff,0xdf,0x5a,0x02,0x00,
	0x00,0x00,0x00,0x00,0x20,0xa5,0xfd,0xff,0xad,0x25,0x52,0xda,0xff,0xdf,0x5a,0x02,
	0x00,0x00,0x00,0x00,0x00,0x20,0xa5,0xfd,0xff,0xad,0x25,0x52,0xc9,0xfe,0xdf,0x6a,
	0x13,0x00,0x00,0x00,0x00,0x00,0x31,0xa6,0xfd,0xef,0x9c,0x25,0x41,0xc8,0xfe,0xdf,
	0x7b,0x34,0x22,0x22,0x22,0x22,0x22,0x43,0xb7,0xfd,0xef,0x8c,0x14,0x31,0xa6,0xed,
	0xee,0x9c,0x67,0x55,0x55,0x55,0x55,0x55,0x76,0xc9,0xee,0xde,0x6a,0x13,0x20,0x84,
	0xdb,0xee,0xbd,0x9a,0x99,0x99,0x99,0x99,0x99,0xa9,0xdb,0xee,0xbd,0x48,0x02,0x10,
	0x53,0xa8,0xcb,0xbc,0xbb,0xab,0xaa,0xaa,0xaa,0xba,0xbb,0xcb,0xbc,0x8a,0x35,0x01,
	0x00,0x31,0x64,0x98,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x99,0x89,0x46,0x13,
	0x00,0x00,0x10,0x32,0x54,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x45,0x23,
	0x01,0x00,0x00,0x00,0x10,0x21,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x12,
	0x01,0x00,0x00,0x20,0x32,0x43,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,0x44,
	0x33,0x02,0x00,0x32,0x65,0x77,0x77,0x77,0x67,0x76,0x77,0x77,0x77,0x77,0x77,0x77,
	0x56,0x24,0x00,0x53,0x97,0xaa,0xaa,0x9a,0x99,0x99,0xa9,0xaa,0xbb,0xbb,0xbb,0xaa,
	0x89,0x36,0x01,0x63,0xb9,0xdd,0xdd,0xbc,0x9a,0xa9,0xcb,0xdd,0xdd,0xdd,0xdd,0xdd,
	0xac,0x47,0x01,0x74,0xda,0xee,0xee,0xbc,0x89,0x98,0xcb,0xee,0xee,0xee,0xee,0xee,
	0xbd,0x58,0x02,0x74,0xda,0xee,0xde,0xac,0x67,0x76,0xca,0xed,0xee,0xff,0xef,0xee,
	0xbd,0x58,0x02,0x74,0xca,0xdd,0xcd,0x9b,0x46,0x64,0xb9,0xdd,0xdd,0xee,0xde,0xdd,
	0xbc,0x58,0x02,0x74,0xa9,0xbb,0xbb,0x8a,0x35,0x53,0xa8,0xbb,0xbb,0xcc,0xbc,0xbb,
	0xab,0x47,0x02,0x63,0x98,0x88,0x98,0x78,0x34,0x53,0x97,0x89,0x98,0xaa,0x9a,0x88,
	0x99,0x47,0x02,0x63,0x77,0x66,0x76,0x67,0x34,0x53,0x87,0x67,0x66,0x88,0x67,0x66,
	0x77,0x46,0x02,0x53,0x66,0x45,0x64,0x67,0x34,0x43,0x76,0x46,0x54,0x76,0x56,0x44,
	0x76,0x46,0x02,0x53,0x56,0x34,0x54,0x66,0x35,0x53,0x76,0x45,0x43,0x66,0x46,0x43,
	0x65,0x46,0x02,0x53,0x56,0x34,0x53,0x77,0x45,0x64,0x77,0x35,0x43,0x65,0x45,0x33,
	0x65,0x46,0x02,0x53,0x56,0x34,0x53,0x87,0x67,0x77,0x78,0x35,0x43,0x65,0x45,0x33,
	0x65,0x46,0x02,0x53,0x56,0x34,0x64,0x98,0x99,0x99,0x89,0x46,0x43,0x65,0x45,0x33,
	0x65,0x46,0x02,0x53,0x66,0x34,0x74,0xb9,0xcc,0xcc,0x9b,0x46,0x43,0x76,0x46,0x43,
	0x75,0x46,0x02,0x53,0x67,0x55,0x85,0xca,0xdd,0xdd,0xac,0x58,0x55,0x77,0x57,0x55,
	0x76,0x46,0x02,0x63,0x77,0x67,0x97,0xdb,0xee,0xee,0xbd,0x79,0x77,0x98,0x78,0x76,
	0x87,0x46,0x02,0x63,0x87,0x88,0xa9,0xcb,0xdd,0xdd,0xbc,0x9a,0x98,0xa9,0x89,0x88,
	0x88,0x46,0x01,0x53,0x87,0x88,0x99,0xba,0xbb,0xbb,0xab,0x99,0x98,0x99,0x99,0x88,
	0x78,0x36,0x01,0x42,0x65,0x77,0x77,0x88,0x88,0x88,0x88,0x77,0x77,0x77,0x77,0x77,
	0x66,0x24,0x00,0x20,0x43,0x44,0x44,0x44,0x55,0x55,0x44,0x44,0x44,0x44,0x44,0x44,
	0x34,0x12,0x00,0x00,0x10,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,0x11,
	0x11,0x00,0x00,0x00,0x00,0x10,0x11,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x10,0x32,0x44,0x34,0x12,0x00,0x10,0x21,0x22,0x22,0x12,0x00,
	0x00,0x00,0x00,0x00,0x31,0x64,0x88,0x68,0x34,0x11,0x21,0x54,0x55,0x55,0x34,0x12,
	0x00,0x00,0x00,0x10,0x53,0xa8,0xcb,0xab,0x68,0x34,0x53,0x97,0xa9,0x9a,0x68,0x24,
	0x00,0x00,0x00,0x20,0x84,0xdb,0xee,0xde,0x9b,0x57,0x86,0xcb,0xdd,0xcd,0x9b,0x36,
	0x02,0x00,0x00,0x31,0xa6,0xed,0xff,0xef,0xcd,0x9a,0xb9,0xed,0xff,0xef,0xbd,0x68,
	0x23,0x00,0x00,0x41,0xb8,0xfe,0xff,0xff,0xef,0xcc,0xdc,0xfe,0xff,0xff,0xde,0x8b,
	0x35,0x01,0x00,0x41,0xc8,0xfe,0xff,0xff,0xef,0xdd,0xed,0xff,0xff,0xff,0xef,0x9c,
	0x36,0x01,0x00,0x41,0xb7,0xfd,0xff,0xff,0xde,0xcc,0xec,0xff,0xff,0xff,0xdf,0x8b,
	0x25,0x01,0x00,0x21,0x95,0xdb,0xfe,0xee,0xbc,0x99,0xca,0xfe,0xff,0xff,0xce,0x69,
	0x13,0x00,0x00,0x10,0x63,0xb9,0xdc,0xbc,0x8a,0x56,0x97,0xec,0xff,0xef,0x9c,0x46,
	0x01,0x00,0x00,0x00,0x31,0x85,0x99,0x89,0x46,0x33,0x74,0xca,0xfe,0xdf,0x8b,0x25,
	0x01,0x00,0x00,0x00,0x10,0x42,0x55,0x45,0x23,0x32,0x64,0xc9,0xed,0xde,0x8b,0x35,
	0x12,0x00,0x00,0x00,0x00,0x11,0x22,0x22,0x32,0x53,0x86,0xca,0xfe,0xef,0xac,0x67,
	0x24,0x01,0x00,0x00,0x00,0x00,0x00,0x11,0x43,0x86,0xba,0xed,0xff,0xff,0xce,0x9b,
	0x58,0x13,0x00,0x00,0x00,0x00,0x00,0x21,0x75,0xca,0xed,0xfe,0xff,0xff,0xef,0xcd,
	0x8b,0x35,0x01,0x00,0x00,0x00,0x00,0x41,0xa7,0xec,0xfe,0xff,0xff,0xff,0xff,0xef,
	0xbd,0x48,0x02,0x00,0x00,0x00,0x10,0x52,0xb8,0xed,0xff,0xff,0xff,0xff,0xff,0xef,
	0xcd,0x69,0x13,0x00,0x00,0x00,0x10,0x73,0xca,0xdd,0xee,0xee,0xfe,0xef,0xee,0xde,
	0xcd,0x7a,0x14,0x00,0x00,0x00,0x10,0x84,0xcb,0xcc,0xcc,0xdc,0xed,0xde,0xcd,0xcc,
	0xcc,0x8b,0x24,0x00,0x00,0x00,0x10,0x74,0xca,0xbc,0xbb,0xcb,0xdc,0xcd,0xbc,0xbb,
	0xbb,0x8b,0x24,0x00,0x00,0x00,0x10,0x52,0xa8,0xbb,0xbb,0xcc,0xdd,0xcd,0xbc,0xbb,
	0xbb,0x79,0x14,0x00,0x00,0x00,0x00,0x31,0x75,0x99,0xba,0xbb,0xcc,0xcc,0xbb,0xaa,
	0x89,0x57,0x12,0x00,0x00,0x00,0x00,0x10,0x42,0x65,0x88,0x99,0x99,0x99,0x89,0x68,
	0x56,0x24,0x01,0x00,0x00,0x00,0x00,0x00,0x11,0x32,0x54,0x55,0x55,0x55,0x55,0x34,
	0x22,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x21,0x22,0x22,0x22,0x22,0x11,
	0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

static const int ALIGN_DATA icon_l_light_pos[NUM_FONTS] = {
	0x000000,0x0001f8,0x0003b2,0x000552,0x000726,0x0008be,0x000a23,0x000b93
};

static const INT8 ALIGN_DATA icon_l_light_width[NUM_FONTS] = {
	36,34,32,36,34,34,32,32
};

static const INT8 ALIGN_DATA icon_l_light_height[NUM_FONTS] = {
	28,26,26,26,24,21,23,26
};

static const INT8 ALIGN_DATA icon_l_light_skipx[NUM_FONTS] = {
	 3, 3, 4, 2, 4, 3, 5, 3
};

static const INT8 ALIGN_DATA icon_l_light_skipy[NUM_FONTS] = {
	 2, 3, 3, 3, 4, 6, 5, 3
};


/*------------------------------------------------------
	functions
------------------------------------------------------*/

int icon_l_get_gryph(struct font_t *font, UINT16 code)
{
	if (code < NUM_FONTS)
	{
		font->data   = &icon_l[icon_l_pos[code]];
		font->width  = icon_l_width[code];
		font->height = icon_l_height[code];
		font->pitch  = 32;
		font->skipx  = icon_l_skipx[code];
		font->skipy  = icon_l_skipy[code];
		return 1;
	}
	return 0;
}

int icon_l_get_light(struct font_t *font, UINT16 code)
{
	if (code < NUM_FONTS)
	{
		font->data   = &icon_l_light[icon_l_light_pos[code]];
		font->width  = icon_l_light_width[code];
		font->height = icon_l_light_height[code];
		font->pitch  = 32;
		font->skipx  = icon_l_light_skipx[code];
		font->skipy  = icon_l_light_skipy[code];
		return 1;
	}
	return 0;
}
