#include <ncurses.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>


#define FRAMES 4
#define REFRESH_RATE 200000 // Refresh Rate in miliseconds ( 200 ms )

typedef struct {
  int idx   ; 
  char* img ; 
}Frame;


static Frame Video[FRAMES] = {
  { 0 , "This"},
  { 1 , "Is"},
  { 2 , "A"},
  { 3 , "Message"},
}; 


int main()
{
  FILE* fptr;
  fptr = fopen("/mnt/e/ncurses/frames.txt", "r");
  initscr(); 
  endwin(); 
  char fBuffer[5000] ;
  while ((fgets(fBuffer , 5000 , fptr) != NULL)) {
    printw("%s" , fBuffer) ;
    refresh(); 
    usleep(REFRESH_RATE) ; 
  }
  endwin(); 
	return 0;

}
