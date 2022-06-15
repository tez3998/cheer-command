#include "clear_frame.h"

void clear_frame(int num_line) {
    int i;

    for (i = 0; i < num_line; i++) {
        printf("\x1b[1A\x1b[2K");
    }
}