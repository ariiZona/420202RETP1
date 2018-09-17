








































#pragma comment(lib,"SDL2.lib")
#pragma comment(lib,"SDL2main.lib")
#pragma comment(linker,"/SUBSYSTEM:windows /entry:mainCRTStartup")
#include <ctime>
#include <cstdlib>
#include <SDL2/SDL.h>
#define Y7N4S0 if
#define H7V3M1 TP1
#define T7Y3R6 case
#define G7J9L0 bool
#define H7G4C3 break
#define H6J4V8 const
#define B5V7M3 class
#define E4R7Y9 while
#define N7H8D9 switch
#define M4Z8H9 public
#define N6M3V6 return
#define M4C6B8 isOpen
#define G6B4X3 default
#define H8J4V8 private
#define N5A4M9 SDL_Quit
#define B7H5V4 SDL_QUIT
#define N9M0F3 SDL_Rect
#define B8K4G6 SDL_Event
#define D1T7I0 SDL_Window
#define Y6B8S0 drawSquare
#define F6N2U9 SDL_Renderer
#define G6H2D9 unsigned char
#define J7F5Z1 SDL_PollEvent
#define B6N1D5 SDL_RenderClear
#define G5Q3D4 SDL_CreateWindow
#define B6N7M9 SDL_DestroyWindow
#define G7N3F7 SDL_RenderPresent
#define H7T4F8 SDL_CreateRenderer
#define G6N7M0 SDL_RenderFillRect
#define B7H6R4 SDL_DestroyRenderer
#define B7M3D7 SDL_SetRenderDrawColor
#define H6Y7U8 SDL_WINDOWPOS_CENTERED
#define H6B5V4 SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC
B5V7M3 H7V3M1{H8J4V8:D1T7I0*w;F6N2U9*d;B8K4G6 e;N9M0F3 r;G7J9L0 q;G6H2D9 c[9]={255,100,25,0,120,20,195,60,200};M4Z8H9:H7V3M1(){w=G5Q3D4("420-202-RE : TP1",H6Y7U8,H6Y7U8,530,530,c[3]);d=H7T4F8(w,-1,H6B5V4);q=1;r.w=r.h=10;}~H7V3M1(){B7H6R4(d);B6N7M9(w);N5A4M9();}G7J9L0 M4C6B8(){E4R7Y9(J7F5Z1(&e))Y7N4S0(e.type==B7H5V4)q=0;G7N3F7(d);B6N1D5(d);N6M3V6 q;}void Y6B8S0(H6J4V8 int& x,H6J4V8 int& y,H6J4V8 char& type){N7H8D9(type){T7Y3R6'C':B7M3D7(d,c[5],c[6],c[7],c[0]);H7G4C3;T7Y3R6'E':T7Y3R6'S':B7M3D7(d,c[3],c[4],c[8],c[0]);H7G4C3;T7Y3R6'X':B7M3D7(d,c[1],c[1],c[1],c[0]);H7G4C3;G6B4X3:B7M3D7(d,c[2],c[2],c[2],c[0]);}r.x=x*10;r.y=y*10;G6N7M0(d,&r);}};TP1 tp1;
