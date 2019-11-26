//
//  main.c
//  sos
//
//  Created by s20181102932 on 2019/11/26.
//  Copyright © 2019 wjx. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    void setup() {
        // put your setup code here, to run once:
        pinMode(13,OUTPUT);
    }
    
    void loop() {
        // put your main code here, to run repeatedly:
        for(int i=0;i<3;i++)
        {
            digitalWrite(13,HIGH);
            delay(250);
            digitalWrite(13,LOW);
            delay(250);
        }
        for(int i=0;i<3;i++)
        {
            digitalWrite(13,HIGH);
            delay(500);
            digitalWrite(13,LOW);
            delay(500);
        }
    }
}
