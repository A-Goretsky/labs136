#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "lab-images.hpp"

const int MAX_H = 512;
const int MAX_W = 512;

void invert(img[MAX_H][MAX_W], int height, int width) {
    for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) {
            img[x][y] = 255 - img[x][y];
        }
    }
}

void inverthalf(img[MAX_H][MAX_W], int height, int width) {
    for (int x = width - 1; x < width / 2; x--) {
        for (int y = 0; y < height; y++) {
            img[x][y] = 255 - img[x][y];
        }
    }
}

void box(img[MAX_H][MAX_W], int height, int width) {
    
}

int main() {
    int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w);
    invert(img)
}