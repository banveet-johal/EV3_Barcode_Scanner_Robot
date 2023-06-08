Designed and Programmed a robot that can scan a bar code (standard code 39) of a single ASCII alphabet character (A, B, …, X, Y, Z) of different sizes using MATLAB to smooth signal input and C language to gather input from light sensor.
Software

a. Robot-C

 a. The light sensor attached to robot, scans the barcode saves the light sensor values 
 to the data-log.
 b. The datalog file holding the light sensor values and encoder values acquired in the 
 previous step is uploaded to the PC using the robotC Robot->LegoBrick->file 
 Management Utility.
 c. On the PC, rename the data-log file extension to be a comma separated values 
 (csv) file.
 d. Import the csv file into MATLAB. MATLAB filters the values to find the aplhabet character.
 
b. MATLAB

a. Moving average algorithm (from scratch not using built-in functions) to filter the 
noisy light sensor values
b. Derivative (from scratch not using built-in functions) to detect edge at each black 
or white region in the bar code.
c. Findpeaks (a built-in function can be used) to find the index of the start and end 
(i.e. width) of each region in the bar code.
d. Once the width and color of each region in the barcode is found, design a simple 
lookup table to find the corresponding ASCII character.
e. Display the ASCII character in the command window
