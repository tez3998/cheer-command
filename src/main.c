#include <unistd.h>

#include "print_frame.h"
#include "clear_frame.h"

int main() {
    char *frame_1 = "../frames/normal";
    char *frame_2 = "../frames/handsup";
    char *frame_3 = "../frames/handsup2";

    int num_line;

    while (1) {
        num_line = print_frame(frame_1);
        sleep(1);
        clear_frame(num_line);

        num_line = print_frame(frame_2);
        sleep(1);
        clear_frame(num_line);

        num_line = print_frame(frame_1);
        sleep(1);
        clear_frame(num_line);

        num_line = print_frame(frame_3);
        sleep(1);
        clear_frame(num_line);
    }

    return 0;
}