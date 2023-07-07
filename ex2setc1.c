#include <stdio.h>
int main()
{
float room_width, room_length, room_height, door_length, door_height, window_length, window_height, paint_area, whitewash_area;
printf("Enter dimensions of room (Length, Width, Height) in order:\n");
scanf("%f%f%f", &room_length, &room_width, &room_height);
printf("Enter dimensions of door (Length, Height) in order:\n");
scanf("%f%f", &door_length, &door_height);
printf("Enter dimensions of window (Length, Height) in order:\n");
scanf("%f%f", &window_length, &window_height);
paint_area = 4*room_length*room_height - door_length *door_height - 2*window_length*window_height;
whitewash_area = room_length*room_width;
printf("Area to be painted:\t%f\n", paint_area);
printf("Area to be whitewashed:\t%f\n", whitewash_area);
} 
