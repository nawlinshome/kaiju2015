/*
 * RainbowFadePattern.h
 *
 *  Created on: 7 Jan 2015
 *      Author: tully
 */

#ifndef RAINBOWFADEPATTERN_H_
#define RAINBOWFADEPATTERN_H_

#include "Pattern.h"

class RainbowFadePattern: public Pattern
{
public:
    virtual ~RainbowFadePattern();
    RainbowFadePattern();

    virtual void update(unsigned int deltaT);
    virtual void draw(CRGB *frameBuffer);
    virtual void reset();
private:
    unsigned int _phase;
};

#endif /* RAINBOWFADEPATTERN_H_ */
