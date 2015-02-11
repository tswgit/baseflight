#ifndef __NRFAPP_H
#define __NRFAPP_H

#include "nRF24l01p.h"

uint16_t nRFReadRawRC(uint8_t chan);
void nRF_checkEvent(void);


#include "..\board.h"
typedef struct {
	serialPort_t port;
} nrfPort_t;

#endif
