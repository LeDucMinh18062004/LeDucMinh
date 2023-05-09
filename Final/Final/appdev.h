#pragma once

#define NN 20


typedef struct {
	int max;
	int min;
	char rname[NN];

}rock;

void send_data(rock);