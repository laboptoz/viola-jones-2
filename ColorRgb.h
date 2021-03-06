#ifndef __COLORRGB_H__
#define __COLORRGB_H__

#include <string>

#include "IColor.h"

class ColorRgb:
    public IColor
{
    private:
        int r;
        int g;
        int b;

    public:
        int getBpp() const;
        int getR() const;
        int getG() const;
        int getB() const;
        int getA() const;
        int getGray() const;
        void setRgba(int r, int g, int b, int a);
        void setGray(int gray);
        std::string toString();

    public:
        ColorRgb();
        ColorRgb(int r, int g, int b);
        ~ColorRgb();
};

#endif /* __COLORRGB_H__ */
