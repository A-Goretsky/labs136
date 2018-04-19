#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "lab-images.hpp"

using std::cout;

void invert(int image[MAX_H][MAX_W], int height, int width) {
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            image[row][col] = 255 - image[row][col];
        }
    }
    int out[MAX_H][MAX_W];

	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			out[row][col] = image[row][col];
		}
	}

	// and save this new image to file "outImage.pgm"
    writeImage(out, height, width, "taskA");
}

void inverthalf(int image[MAX_H][MAX_W], int height, int width) {
    for (int row = 0; row < height; row++) {
        for (int col = width - 1; col > width / 2; col--) {
            image[row][col] = 255 - image[row][col];
        }
    }

    int out[MAX_H][MAX_W];

	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			out[row][col] = image[row][col];
		}
	}

	// and save this new image to file "outImage.pgm"
    writeImage(out, height, width, "taskB");
}

void box(int image[MAX_H][MAX_W], int height, int width) {
    int halfwidth = width / 2; 
    int halfheight = height / 2;
    for (int row = halfheight / 2; row < halfheight + (halfheight / 2); row++) {
        for (int col = halfwidth / 2; col < halfwidth + (halfwidth / 2); col++) {
            image[row][col] = 255;
        }
    }

    int out[MAX_H][MAX_W];

    for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			out[row][col] = image[row][col];
		}
	}
	// and save this new image to file "outImage.pgm"
    writeImage(out, height, width, "taskC");
}

void frame(int image[MAX_H][MAX_W], int height, int width) {
    int halfwidth = width / 2; 
    int halfheight = height / 2;
    for (int row = halfheight / 2; row < halfheight + (halfheight / 2); row++) {
        for (int col = halfwidth / 2; col < halfwidth + (halfwidth / 2); col++) {
            if (row == halfheight / 2 || row == halfheight + (halfheight / 2) - 1)
                image[row][col] = 255;
            if (col == halfwidth / 2 || col == halfwidth + (halfwidth / 2) - 1)
                image[row][col] = 255;
        }
    }

    int out[MAX_H][MAX_W];

	for(int row = 0; row < height; row++) {
		for(int col = 0; col < width; col++) {
			out[row][col] = image[row][col];
		}
	}

    writeImage(out, height, width, "taskD");
}

void scale(int image[MAX_H][MAX_W], int height, int width) {
    int out[MAX_H][MAX_W];
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            out[row*2][col*2] = image[row][col];
            out[row*2 + 1][col*2] = image[row][col];
            out[row*2][col*2 + 1] = image[row][col];
            out[row*2 + 1][col*2 + 1] = image[row][col];
        }
    }

    writeImage(out, height*2, width*2, "taskE");
}

void pixelate(int image[MAX_H][MAX_W], int height, int width) {
    int out[MAX_H][MAX_W];
    int avg = 0;
    for (int row = 0; row < height; row += 2) {
        for (int col = 0; col < width; col += 2) {
            avg = (image[row][col] + image[row + 1][col] + image[row][col + 1] + image[row + 1][col + 1]) / 4;
            out[row][col] = avg;
            out[row + 1][col] = avg;
            out[row][col + 1] = avg;
            out[row + 1][col + 1] = avg;
        }
    }
    writeImage(out, height, width, "taskF");
}

int main() {
    int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w);
    invert(img, h, w);
    readImage(img, h, w);
    inverthalf(img, h, w);
    readImage(img, h, w);
    box(img, h, w);
    readImage(img, h, w);
    frame(img, h, w);
    readImage(img, h, w);
    scale(img, h, w);
    readImage(img, h, w);
    pixelate(img, h, w);
}