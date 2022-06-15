#include <unistd.h>

#include "print_frame.h"
#include "clear_frame.h"

void print_and_clear_frame(char *frame_path) {
    int SLEEP_SEC = 1;
    int num_line;

    num_line = print_frame(frame_path);
    sleep(SLEEP_SEC);
    clear_frame(num_line);
}


int main() {
    char *frame_1 = "../frames/normal";
    char *frame_2 = "../frames/handsup";
    char *frame_3 = "../frames/handsup2";
    int num_line;

    while (1) {
        print_and_clear_frame(frame_1);
        print_and_clear_frame(frame_2);
        print_and_clear_frame(frame_1);
        print_and_clear_frame(frame_3);
    }

    return 0;
}