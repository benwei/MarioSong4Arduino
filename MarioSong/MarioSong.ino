// this is a test for using git

#include <Tone.h>

Tone tone1;

/*

 * attachInterrupt.pde: attachInterrupt() 與外部中斷

 */



const int interruptNumber = 0;           // Interrupt 0 在 pin 2 上

const int buttonPin = 2;                 // 按鈕(pushbutton)

//const int ledPin = 13;                   // LED

volatile int buttonState;                // 用來儲存按鈕狀態



void setup() {

  tone1.begin(13);//Playback on Pin 13, change to whatever you may need

  //pinMode(ledPin, OUTPUT);               // 把 ledPin 設置成 OUTPUT

  //pinMode(buttonPin, INPUT);             // 把 buttonPin 設置成 INPUT

  

  // 把外部中斷(interrupt 0)連接到 buttonStateChanged() 函式

  // CHANGE 是指當 pin 狀態改變時就觸發中斷，不管是從 HIGH 到 LOW 或從 LOW 到 HIGH

  attachInterrupt(interruptNumber, buttonStateChanged, CHANGE);

}



void loop() {

  tone1.play(660,100);

delay(75*2);tone1.play(660,100);

delay(150*2);tone1.play(660,100);

delay(150*2);tone1.play(510,100);

delay(50*2);tone1.play(660,100);

delay(150*2);tone1.play(770,100);

delay(275*2);tone1.play(380,100);

delay(287*2);tone1.play(510,100);

delay(225*2);tone1.play(380,100);

delay(200*2);tone1.play(320,100);

delay(250*2);tone1.play(440,100);

delay(150*2);tone1.play(480,80);

delay(165*2);tone1.play(450,100);

delay(75*2);tone1.play(430,100);

delay(150*2);tone1.play(380,100);

delay(100*2);tone1.play(660,80);

delay(100*2);tone1.play(760,50);

delay(75*2);tone1.play(860,100);

delay(150*2);tone1.play(700,80);

delay(75*2);tone1.play(760,50);

delay(175*2);tone1.play(660,80);

delay(150*2);tone1.play(520,80);

delay(75*2);tone1.play(580,80);

delay(75*2);tone1.play(480,80);

delay(175*2);tone1.play(510,100);

delay(275*2);tone1.play(380,100);

delay(200*2);tone1.play(320,100);

delay(250*2);tone1.play(440,100);

delay(150*2);tone1.play(480,80);

delay(165*2);tone1.play(450,100);

delay(75*2);tone1.play(430,100);

delay(150*2);tone1.play(380,100);

delay(100*2);tone1.play(660,80);

delay(100*2);tone1.play(760,50);

delay(75*2);tone1.play(860,100);

delay(150*2);tone1.play(700,80);

delay(75*2);tone1.play(760,50);

delay(175*2);tone1.play(660,80);

delay(150*2);tone1.play(520,80);

delay(75*2);tone1.play(580,80);

delay(75*2);tone1.play(480,80);

delay(250*2);tone1.play(500,100);

delay(150*2);tone1.play(760,100);

delay(50*2);tone1.play(720,100);

delay(75*2);tone1.play(680,100);

delay(75*2);tone1.play(620,150);

delay(150*2);tone1.play(650,150);

delay(150*2);tone1.play(380,100);

delay(75*2);tone1.play(430,100);

delay(75*2);tone1.play(500,100);

delay(150*2);tone1.play(430,100);

delay(75*2);tone1.play(500,100);

delay(50*2);tone1.play(570,100);

delay(110*2);tone1.play(500,100);

delay(150*2);tone1.play(760,100);

delay(50*2);tone1.play(720,100);

delay(75*2);tone1.play(680,100);

delay(75*2);tone1.play(620,150);

delay(150*2);tone1.play(650,200);

delay(150*2);tone1.play(1020,80);

delay(150*2);tone1.play(1020,80);

delay(75*2);tone1.play(1020,80);

delay(150*2);tone1.play(380,100);

delay(150*2);tone1.play(500,100);

delay(150*2);tone1.play(760,100);

delay(50*2);tone1.play(720,100);

delay(75*2);tone1.play(680,100);

delay(75*2);tone1.play(620,150);

delay(150*2);tone1.play(650,150);

delay(150*2);tone1.play(380,100);

delay(75*2);tone1.play(430,100);

delay(75*2);tone1.play(500,100);

delay(150*2);tone1.play(430,100);

delay(75*2);tone1.play(500,100);

delay(50*2);tone1.play(570,100);

delay(110*2);tone1.play(500,100);

delay(150*2);tone1.play(760,100);

delay(50*2);tone1.play(720,100);

delay(75*2);tone1.play(680,100);

delay(75*2);tone1.play(620,150);

delay(150*2);tone1.play(650,200);

delay(150*2);tone1.play(1020,80);

delay(150*2);tone1.play(1020,80);

delay(75*2);tone1.play(1020,80);

delay(150*2);tone1.play(380,100);

delay(150*2);tone1.play(500,100);

delay(150*2);tone1.play(760,100);

delay(50*2);tone1.play(720,100);

delay(75*2);tone1.play(680,100);

delay(75*2);tone1.play(620,150);

delay(150*2);tone1.play(650,150);

delay(150*2);tone1.play(380,100);

delay(75*2);tone1.play(430,100);

delay(75*2);tone1.play(500,100);

delay(150*2);tone1.play(430,100);

delay(75*2);tone1.play(500,100);

delay(50*2);tone1.play(570,100);

delay(210*2);tone1.play(585,100);

delay(275*2);tone1.play(550,100);

delay(210*2);tone1.play(500,100);

delay(180*2);tone1.play(380,100);

delay(150*2);tone1.play(500,100);

delay(150*2);tone1.play(500,100);

delay(75*2);tone1.play(500,100);

delay(150*2);tone1.play(500,60);

delay(75*2);tone1.play(500,80);

delay(150*2);tone1.play(500,60);

delay(175*2);tone1.play(500,80);

delay(75*2);tone1.play(580,80);

delay(175*2);tone1.play(660,80);

delay(75*2);tone1.play(500,80);

delay(150*2);tone1.play(430,80);

delay(75*2);tone1.play(380,80);

delay(300*2);tone1.play(500,60);

delay(75*2);tone1.play(500,80);

delay(150*2);tone1.play(500,60);

delay(175*2);tone1.play(500,80);

delay(75*2);tone1.play(580,80);

delay(75*2);tone1.play(660,80);

delay(225*2);tone1.play(870,80);

delay(162*2);tone1.play(760,80);

delay(300*2);tone1.play(500,60);

delay(75*2);tone1.play(500,80);

delay(150*2);tone1.play(500,60);

delay(175*2);tone1.play(500,80);

delay(75*2);tone1.play(580,80);

delay(175*2);tone1.play(660,80);

delay(75*2);tone1.play(500,80);

delay(150*2);tone1.play(430,80);

delay(75*2);tone1.play(380,80);

delay(300*2);tone1.play(660,100);

delay(75*2);tone1.play(660,100);

}



// Interrupt 0 的中斷處理函式

// 讀取 buttonPin 的狀態，並反應到 ledPin 上

void buttonStateChanged() {

  buttonState = digitalRead(buttonPin);

  tone1.play(750,200);

delay(100*2);tone1.play(770,200);

delay(100*2);tone1.play(1300,500);

delay(1000*2);

  //digitalWrite(ledPin, buttonState);

}
