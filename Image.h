#ifndef __IMAGE_H__
#define __IMAGE_H__

#include <string>

#include "Color.h"
#include "File.h"


class Image
{
    private:
        int width;
        int height;
        int bpp;
        int size;
        Color **colors;

    public:
        int getWidth() const;
        int getHeight() const;
        int getBpp() const;
        int getSize() const;
        Color& getColor(int x, int y) const;

    private:
        Image(int width, int height, int bpp);

    public:
        ~Image();

    public:
        static Image& loadFromFile(const std::string& filename);

    private:
        static Image& loadTga(File& file);
};

#endif /* __IMAGE_H__ */
