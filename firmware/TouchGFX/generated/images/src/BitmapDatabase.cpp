// 4.21.1 0x3bd71365
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_widgets_circleprogress_backgrounds_large[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_CIRCLEPROGRESS_BACKGROUNDS_LARGE_ID = 0, Size: 190x190 pixels
extern const unsigned char image_back[]; // BITMAP_BACK_ID = 1, Size: 480x283 pixels
extern const unsigned char image_put[]; // BITMAP_PUT_ID = 2, Size: 480x273 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_widgets_circleprogress_backgrounds_large, 0, 190, 190, 170, 59, 13, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 72, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_back, 0, 480, 283, 0, 1, 480, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 282, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_put, 0, 480, 273, 39, 242, 63, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 2, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase