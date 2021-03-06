/* Plays "This is Berk" from How to Train your Dragon.
 * No seriously, plug in a buzzer on pin 1.
 */

#include "simpletools.h" 

#define PIN 1
#define speed 80

#define Ab4 415
#define Bb4 466
#define F4  349
#define C5  523
#define Eb4 311
#define D4  294
#define Bb3 233
#define Ab3 207
#define Db5 554

const int notes[] = {
  Ab4,2,Bb4,4,Bb4,4,F4,2,Ab4,3,Bb4,1,C5,2,Bb4,4,F4,2,
  Ab4,3,Bb4,1,C5,2,Bb4,2,Ab4,2,F4,2,Eb4,2,D4,2,Eb4,2,
    Eb4,2,F4,2,Ab4,2,
  Ab4,2,Bb4,4,Bb4,4,F4,2,Ab4,3,Bb4,1,Db5,2,Bb4,4,F4,2,
  Bb4,2,Bb4,2,Ab4,2,F4,2,F4,2,Eb4,2,Bb3,2,Bb3,2,Ab3,2,Bb3,6
};

const int size = sizeof(notes)/sizeof(notes[0]);

int main()
{
  while (1) {
    for (int i=0;i<size;i+=2) {
      freqout(PIN,speed*notes[i+1],notes[i]);
    }
  }
}
