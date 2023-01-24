#!/usr/bin/env python3
import os
import time


if __name__ == '__main__':
    start_time = time.time()
    for i in range(1, 25 + 1):
        padded = str(i).rjust(2, '0')
        print('\nDAY ' + padded)
        # move to the folder containing the binary to run
        os.chdir('day' + padded)
        # run part 1 and part 2
        os.system('python.exe part1.py')
        if i < 25:
            os.system('python.exe part2.py')
        # move back to the paretn folder
        os.chdir('..')
    end_time = time.time()
    print(f"\nAll solution scripts took {round(end_time - start_time)} seconds to complete.\n")
