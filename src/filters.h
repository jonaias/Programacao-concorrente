#ifndef FILTERS_H_
#define FILTERS_H_
#include <stdlib.h>

void equalization(int histogram[256], int transform[256], int m, int n){

        int i;
        int cdf[256];

        cdf[0] = histogram[0];

        for (i = 1; i < 256; i++) cdf[i] = cdf[i - 1] + histogram[i];
        for (i = 0; i < 256; i++) transform[i] = ((cdf[i] - cdf[0]) * 255 / (m * n - cdf[0]));

}

void brightness( int transform[256], int level){

        int i;

        for(i = 0; i < 256; i++) transform[i] = i;
        if (level > 0) for(i = 0; i < 256; i++) transform[i] = i + (-level *i ) / 255 + level;
        else for(i = 0; i < 256; i++) transform[i] = i + i * level/255;
}


#endif
